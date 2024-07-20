#ifndef __LENGTH_H__
#define __LENGTH_H__
#include "Measure.h"

class Length : public Measure
{
    public:
        Length();
        float getValue();
        void update(float len);

    private:
        float mLength;
};

#endif

