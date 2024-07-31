#ifndef __Y_Position_H__
#define __Y_Position_H__

#include "Measure.h"

class Y_Position : public Measure
{
    public:
        Y_Position();
        double getValue();
        void update(double y);

    private:
        
        double mY;
};
#endif