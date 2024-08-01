#include "Scene.h"

#include "ev3api.h"

Scene::Scene():
    mState(UNDEFINED)
{
    mSm = new SectionManager();
    mSsm = new SpeedSectionManager();
    mWsm = new WloopSectionManager();
}

bool Scene::run()
{
    switch(mState) {
        case UNDEFINED:
            execUndefined();
            break;
        case MODE:
            execMode();
            break;
        case START:
            execStart();
            break;
        case SPEED:
            execSpeed();
            break;
        case WLOOP:
            execWloop();
            break;
        case GARAGE:
            execGarage();
            break;
        default:
            return true;
    }
    return false;
}

void Scene::execUndefined()
{
    mState=MODE;
}

void Scene::execMode()
{
   

    if(mSm->setMode()){
        delete mSm;
        mState=START;
    }
    
}
void Scene::execStart()
{

    // とりあえず動かすだけなので、設計に基づいて書き直そう
   
    if (ev3_button_is_pressed(ENTER_BUTTON))
    {
        msg_log("Press Touch Button to start.");
        int 	ev3_battery_current_mA ();
        printf("本体バッテリー%d\n"+ ev3_battery_current_mA());
            mState=SPEED;
    }
}
void Scene::execSpeed()
{
    if(mSsm->run()) {
        delete mSsm;
        mState = WLOOP;
    }
}
void Scene::execWloop()
{
    //青色を感知した際に実行するところ
    if(mWsm->run()) {
        
        delete mWsm;
        mState = END;
    }
}
void Scene::execGarage()
{

}
