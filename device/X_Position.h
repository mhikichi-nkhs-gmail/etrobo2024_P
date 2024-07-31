#ifndef __X_Position_H__
#define __X_Position_H__

#include "Measure.h"

class X_Position : public Measure
{
    public:
        X_Position();
        double getValue();
        void update(double x);

    private:
        
        double mX;
};

#endif
