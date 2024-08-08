
#include "SimpleWalker.h"
#include "CurveVirtual.h"
#include "math.h"
#include "TurnAngle.h"

CurveVirtual::CurveVirtual(Odometry *odo,
                           SpeedControl *scon
                           ): SimpleWalker(odo,scon),mLeftTurn(true),mSpeed(0),mBias(0)
{

}

void CurveVirtual::run()
{   
    nX = mX->getValue();//現在の座標
    nY = mY->getValue();

    rad2 = mAngle->getValue();
    //printf("rad2 = %lf\n",rad2);
    rad2=rad2*M_PI/180;

    double oLength;//中心との距離
    double direction;

    double sX=-3*sin(rad2)+nX;
    double sY=3*cos(rad2)+nY;

    printf("sY = %lf\n",sY);

    oLength=sqrt((sX-x1)*(sX-x1)+(sY-y1)*(sY-y1));//中心との距離計算

    printf("oLength = %lf\n",oLength);

    mTurn = calcTurn(oLength);
    if(J>0)
    mTurn = -mTurn;

    printf("mTurn = %lf\n",mTurn);

   /* static char buf[256];
    sprintf(buf,"LT %2.3f, %d,%d",brightness,mTargetSpeed,mTurn);
    msg_log(buf);*/

    setCommandV((int)mTargetSpeed, (int)mTurn);

    SimpleWalker::run();
    

}

void CurveVirtual::reset()
{
    X0 = mX->getValue();//最初のストレートの方向がxの正の方向
    printf("X0 = %lf\n",X0);
    Y0 = mY->getValue();
    printf("Y0 = %lf\n",Y0);
    rad1 = mAngle->getValue();
   // printf("rad1 = %lf\n",rad1);
    //度からrad変換
    rad1=(rad1)*M_PI/180;
   
    //中心座標の計算
    x1 = -R * sin(rad1) + X0;
    printf("x1 = %lf\n",x1);
    if(J>0)
    {
       y1 = (R * cos(rad1) + Y0);
    }
    else
    {
       y1 = (-R * cos(rad1) + Y0);
    }
    printf("y1 = %lf\n",y1);

}


double CurveVirtual::calcTurn(double oLength)
{
double bai = 1.0;   //CompositeSection用？
    /*if(mSpeedControl->getCurrentSpeed()<15) {  //12
        bai=0.5;
    }
    mPid->setKp(mPFactor*bai); //0.376
    mPid->setKi(mIFactor*bai);
    mPid->setKd(mDFactor*bai);*/

    double val1_turn =  mPid->getOperation(oLength);

  //  mPid->debug=true;

    if(mLeftTurn) val1_turn = -val1_turn;
    setBias(mBias);
    double turn =  val1_turn+mBias;
   
    return turn;
}

void CurveVirtual::setParam(double speed,double target,double kp, double ki, double kd,
                        double angleTarget,double angleKp)
{
    
  /*  static char buf[256];
      sprintf(buf,"Lintracer setParam %2.1f,%3.1f,  %3.1f,%3.1f,%3.1f,  %2.1f, %2.1f",speed,target, kp,ki,kd, angleTarget,angleKp);
    msg_log(buf);*/
  
    mTargetSpeed = speed;
    mTarget= target;
    mPFactor = kp;
    mIFactor = ki;
    mDFactor = kd;

  
    mPid->setTarget(mTarget);
    mPid->setKp(mPFactor); 
    mPid->setKi(mIFactor);
    mPid->setKd(mDFactor);
   
    mBias = angleTarget;
    
    R = target;

    J = angleKp;

}

void CurveVirtual::setBias(double curve)
{
     mBias = curve;
}

void CurveVirtual::setData(double LineArray[])
{
    CurveVirtual::setParam(LineArray[0],LineArray[1],LineArray[2],LineArray[3],LineArray[4],LineArray[5],LineArray[6]);
}


/*
    1.回転がほぼないときの左回り
    mTurn = calcTurn(oLength)*-1;
    rad1=(rad1)*M_PI/180;
    x1 = (-R * sin(rad1)) + X0;
    printf("x1 = %lf\n",x1);
    y1 = (R * cos(rad1) + Y0);
    printf("y1 = %lf\n",y1);

    2.回転がほぼないときの右回り
    mTurn = calcTurn(oLength);
    rad1=(rad1)*M_PI/180;
    x1 = (-R * sin(rad1) + X0);
    printf("x1 = %lf\n",x1);
    y1 = (-R * cos(rad1) + Y0);
    printf("y1 = %lf\n",y1);
    
    3.回転方向（一番上のrunの中にあるやつ）
    mTurn = calcTurn(oLength)*-1;左回り
    mTurn = calcTurn(oLength);右回り

*/