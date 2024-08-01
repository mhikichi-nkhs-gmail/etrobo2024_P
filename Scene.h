#ifndef _SCENE_H_
#define  _SCENE_H_

#include "SpeedSectionManager.h"
#include "WloopSectionManager.h"
#include "ev3api.h"

class Scene{
    public:
        Scene();
        bool run();
        void execUndefined();
        void execStart();
        void execSpeed();
        void execWloop();
        void execGarage();

    private:
        enum State {
            UNDEFINED,
            START,
            SPEED,
            WLOOP,
            GARAGE,
            END
        };

        State mState;

        SpeedSectionManager *mSsm;
        WloopSectionManager *mWsm;
};
#endif
