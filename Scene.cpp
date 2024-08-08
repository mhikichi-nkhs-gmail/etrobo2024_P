#include "Scene.h"

#include "ev3api.h"

extern MyColorSensor *gColor;

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
    int button_no = -1;
   if(ev3_button_is_pressed(LEFT_BUTTON)){
        printf("左を選択\n");
        button_no = 0;
        gColor->UpdateRgb();
        printf("値の更新");
    }else if(ev3_button_is_pressed(RIGHT_BUTTON)){
        printf("右を選択\n");
        button_no = 1;
        gColor->UpdateRgb();
        printf("値の更新");
    }

    if((button_no == 0)||(button_no == 1)){
        SectionManager::course = button_no;
        mState=START;
    }
    
}

void Scene::execStart()
{

    // とりあえず動かすだけなので、設計に基づいて書き直そう
   
    if (ev3_button_is_pressed(ENTER_BUTTON))
    {
        printf("中央ボタン\n");
        mSsm->param();
        msg_log("Press Touch Button to start.");
        int a;
        a = ev3_battery_voltage_mV ();
        printf("本体バッテリー%d\n",a);
            mState=SPEED;
    }
}
void Scene::execSpeed()
{
    if(mSsm->run()) 
    {
        printf("スピード終了\n");
        delete mSsm;
        mWsm->param();
        mState = WLOOP;
    }
}
void Scene::execWloop()
{
    //青色を感知した際に実行するところ
    //printf("wloop突入！\n");
    if(mWsm->run()) {
        printf("終了！！！\n");
        delete mWsm;
        mState = END;
    }
}
void Scene::execGarage()
{

}
