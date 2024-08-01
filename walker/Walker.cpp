#include "Walker.h"

//コンストラクタ
Walker::Walker( Odometry *odo):
    mOdo(odo)
{
    mPid = new PID();
    mBright = gBrightness;
    mX = gX;
    mY = gY;
    
}


void Walker::run()
{

}

void Walker::printInfo()
{
    msg_log("Walker");
}

void Walker::setparam()
{

}

void Walker::reset()
{
    
}

void Walker::setData(double w[])
{

}