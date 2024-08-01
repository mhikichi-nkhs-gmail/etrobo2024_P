#include "SimpleWalker.h"
#include "CurveVirtual.h"
#include "math.h"

CurveVirtual::CurveVirtual(Odometry *odo,
                           SpeedControl *scon
                           ): SimpleWalker(odo,scon)
{

}

void CurveVirtual::run()
{   

    

}

void CurveVirtual::reset()
{
   
    X0 = mX->getValue();
    printf("X0 = %lf\n",X0);
    Y0 = mY->getValue();
    printf("Y0 = %lf\n",Y0);
    //rad1 = mAngle->getValue();
    //cprintf("rad = %lf\n",rad1);

    //中心座標の計算
    //x1 = R * cos(rad1) + X0;
    printf("X0 = %lf\n",X0);
   // y1 = R * sin(rad1) + Y0;
    printf("Y0 = %lf\n",Y0);

}


void CurveVirtual::calcTurn()
{

}

void CurveVirtual::setParam()
{
    
}