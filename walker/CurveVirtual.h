#ifndef __CURVE_VIRTUAL_H__
#define __CURVE_VIRTUAL_H__

#include "SimpleWalker.h"
#include "Odometry.h"
#include <math.h>


class CurveVirtual : public SimpleWalker {
public:
    CurveVirtual(Odometry *odo,
                SpeedControl *scon);
    void run();
    void reset();
    void calcTurn();
    void setParam();
private:
    double X0; //中心x座標
    double Y0; //中心y座標
    double R; //旋回半径
    double rad;
    double x1;
    double y1;
};
#endif 