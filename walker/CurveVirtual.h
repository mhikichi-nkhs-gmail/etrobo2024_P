#ifndef __CURVE_VIRTUAL_H__
#define __CURVE_VIRTUAL_H__

#define M_PI 3.14159265358979323846

#include "SimpleWalker.h"
#include "Odometry.h"
#include <math.h>


class CurveVirtual : public SimpleWalker {
public:
    CurveVirtual(Odometry *odo,
                SpeedControl *scon);
    void run();
    void reset();
    double calcTurn(double val1);
    void setParam(double speed,double target,double kp, double ki, double kd,
                        double angleTarget,double angleKp);

    void setBias(double curve);

    void setData(double LineArray[]);

private:
    double nX;
    double nY;
    double X0; //中心x座標
    double Y0; //中心y座標
    double R; //旋回半径
    double rad1;
    double x1;
    double y1;
    double rad2;
    

    double mSpeed;

    int mTargetSpeed;
    double mTarget;
    double mPFactor;
    double mIFactor;
    double mDFactor;

    double mBias;


    bool mLeftTurn;
     
};
#endif 