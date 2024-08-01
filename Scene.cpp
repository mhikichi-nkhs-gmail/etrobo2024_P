#include "Scene.h"

#include "ev3api.h"

Scene::Scene():
    mState(UNDEFINED)
{
    mSsm = new SpeedSectionManager();
    mWsm = new WloopSectionManager();
}

bool Scene::run()
{
    switch(mState) {
        case UNDEFINED:
            execUndefined();
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
    mState=START;
}
void Scene::execStart()
{

    // とりあえず動かすだけなので、設計に基づいて書き直そう
    //msg_log("Press Touch Button to start.");
   
    if (ev3_button_is_pressed(ENTER_BUTTON))
    {
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
