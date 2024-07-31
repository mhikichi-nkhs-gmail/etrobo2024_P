#ifndef __HSVSATU_H__
#define __HSVSATU_H__
#include "Measure.h"

class HsvSatu : public Measure
{
    public:
        HsvSatu();
        double getValue();
        void update(float h);

    private:
        float mSatu;
};

#endif

