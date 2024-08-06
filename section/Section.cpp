#include "Section.h"
#include "Len_judge.h"
#include "CurveVirtual.h"
#include "Blue_judge.h"
#include "StraightVirtual.h"


extern SimpleWalker *gWalker;
extern LineTracer *gTracer;
extern Odometry *gOdo;
extern SpeedControl *gSpeed;

Section::Section()
{
        j_flag = false;
        w_flag = false;
}

Section::~Section()
{
    msg_log("destruct Section");
    delete mWalker;
}


bool Section::run()
{
    //Judge初期化
    if(j_flag == false)
    {
        printf("ooooo\n");
        mJudge->reset();
        printf("ooooo\n");

        j_flag = true;
    }
    
    //Walker初期化
    if(w_flag == false)
    {
        printf("iiiiii\n");
        mWalker->reset();
        printf("iiiiii\n");

        w_flag = true;
    }
  

    //判定
    if(mJudge->judge())
    return true;

    //走法
    mWalker->run();
    
    return false;
}

Walker *Section::selectWalker(int no)
{
    switch(no) {
        case WALKER:
            mWalker = (Walker*)(new SimpleWalker(gOdo,gSpeed));
            break;
        case TRACER:
            mWalker = (Walker*)(new LineTracer(gOdo,gSpeed));
           break;
        case CURVEVIRTUAL :
            mWalker = (Walker*)(new CurveVirtual(gOdo,gSpeed));
            break;
        case STRAIGHTVIRTUAL :
            mWalker = (Walker*)(new StraightVirtual(gOdo,gSpeed));
            break;
        case END :
            break;
        default:
            msg_log("selectWalker error!!");
    }

    return mWalker;
}

Judge *Section::selectJudge(int no)
{
   switch(no) {
        case LENGTH:
            mJudge = (Judge*)(new Len_judge());
            break;
        case BLUE:
            mJudge = (Judge*)(new Blue_judge());
            break;
        default:
            msg_log("selectJudge error!!");
   }
   return mJudge;
}