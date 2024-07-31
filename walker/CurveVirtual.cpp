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
   /*
    x = mX->getValue();
    printf("x = %lf\n",x);
    x = mY->getValue();
    printf("y = %lf\n",y);
    */

}


void CurveVirtual::calcTurn()
{

}

void CurveVirtual::setParam()
{
    
}