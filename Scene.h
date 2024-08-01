#ifndef _SCENE_H_
#define  _SCENE_H_

#include "SectionManager.h"
#include "SpeedSectionManager.h"
#include "WloopSectionManager.h"
#include "ev3api.h"

class Scene{
    public:
        Scene();
        bool run();
        void execUndefined();
        void execMode();
        void execStart();
        void execSpeed();
        void execWloop();
        void execGarage();
        int button_no;

    private:
        enum State {
            UNDEFINED,
            MODE,
            START,
            SPEED,
            WLOOP,
            GARAGE,
            END
        };

        State mState;

        SectionManager *mSm;
        SpeedSectionManager *mSsm;
        WloopSectionManager *mWsm;
};
#endif
