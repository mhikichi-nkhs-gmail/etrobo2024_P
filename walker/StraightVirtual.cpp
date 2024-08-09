#include "SimpleWalker.h"
#include "StraightVirtual.h"
#include "math.h"
#include "TurnAngle.h"

StraightVirtual::StraightVirtual(Odometry *odo,
                           SpeedControl *scon
                           ): SimpleWalker(odo,scon),mLeftTurn(true),mSpeed(0),mBias(0)
{

}


void StraightVirtual::run()
{   
    nX = mX->getValue();
    nY = mY->getValue();


    printf("nX = %lf\n",nX);
    printf("nY = %lf\n",nY);
    printf("X0 = %lf\n",X0);
    printf("Y0 = %lf\n",Y0);
    printf("X1 = %lf\n",x1);
    printf("Y1 = %lf\n",y1);



    double distance;//直線とのずれ
    double direction;

    double distancek=(y1-Y0)*nX-(x1-X0)*nY+x1*Y0-y1*X0;

    if(distancek>=0)
    distancek=distancek*-1;

    distance=distancek/sqrt((x1-X0)*(x1-X0)+(y1-Y0)*(y1-Y0));
    mTurn = calcTurn(distance);

   /* static char buf[256];
    sprintf(buf,"LT %2.3f, %d,%d",brightness,mTargetSpeed,mTurn);
    msg_log(buf);*/

    setCommandV((int)mTargetSpeed, (int)mTurn);

    SimpleWalker::run();
    

}

void StraightVirtual::reset()
{
    X0 = mX->getValue();
    printf("X0 = %lf\n",X0);
    Y0 = mY->getValue();
    printf("Y0 = %lf\n",Y0);
    rad1 = mAngle->getValue();
    printf("rad1 = %lf\n",rad1);
    //度からrad変換
    rad1=rad1*M_PI/180;
   
    //中心座標の計算
    x1 = -R * sin(rad1) + X0;
    printf("X1 = %lf\n",x1);
    y1 = R * cos(rad1) + Y0;
    printf("Y1 = %lf\n",y1);

}


double StraightVirtual::calcTurn(double distance)
{
double bai = 1.0;   //CompositeSection用？
    /*if(mSpeedControl->getCurrentSpeed()<15) {  //12
        bai=0.5;
    }
    mPid->setKp(mPFactor*bai); //0.376
    mPid->setKi(mIFactor*bai);
    mPid->setKd(mDFactor*bai);*/

    double val1_turn =  mPid->getOperation(distance);

  //  mPid->debug=true;

    if(mLeftTurn) val1_turn = -val1_turn;
    setBias(mBias);
    double turn =  val1_turn+mBias;
   
    return turn;
}

void StraightVirtual::setParam(double speed,double target,double kp, double ki, double kd,
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
    
    R = angleKp;
    

}

void StraightVirtual::setBias(double curve)
{
     mBias = curve;
}

void StraightVirtual::setData(double LineArray[])
{
    StraightVirtual::setParam(LineArray[1],LineArray[2],LineArray[3],LineArray[4],LineArray[5],LineArray[6],LineArray[7]);
}