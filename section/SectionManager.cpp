#include "SectionManager.h"
#include "ev3api.h"

SectionManager::SectionManager()
{
    mSectionIdx=0;
    mLastIdx=0;
 
}

SectionManager::~SectionManager()
{
    msg_log("destruct SectionManager");

    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
}

bool SectionManager::run()
{
    
    return true;
}

void SectionManager::addSection(Section *sec)
{
    mSection[mLastIdx++]=sec;
    
}

void SectionManager::reset()
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}

void SectionManager::setData()
{
    
}

bool SectionManager::setMode()
{
    if(ev3_button_is_pressed(LEFT_BUTTON)){
        button_no = 0;
    }else if(ev3_button_is_pressed(RIGHT_BUTTON)){
        button_no = 1;
    }
}

int SectionManager::getMode()
{
    return button_no;
}