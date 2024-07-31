#ifndef WALKER_H_
#define WALKER_H_

#include "Odometry.h"
#include "Brightness.h"
#include "PID.h"
#include "X_Position.h"

extern Brightness *gBrightness;
extern X_Position *gX;
extern Y_Position *gY;


class Walker
{
    public:
        //コンストラクタの宣言
        Walker( Odometry *odo );

        virtual void run();
        virtual void printInfo();
        virtual void setparam();
        virtual void reset();

    protected:
        Odometry *mOdo;
        PID *mPid;
        Brightness *mBright;
        X_Position *mX;
        Y_Position *mY;


    private:



};
#endif
