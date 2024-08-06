#include "WloopSectionManager.h"
#include "Section.h"
#include "Len_judge.h"
#include "Blue_judge.h"

WloopSectionManager::WloopSectionManager()
{

    // test用初期化
#if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::RIGHTEDGE;
#else
      const int _EDGE = LineTracer::LEFTEDGE;
#endif
    Section *sc0 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer0 = (LineTracer*)sc0->selectWalker(Section::TRACER);
    Blue_judge* blue0 = (Blue_judge*)sc0->selectJudge(Section::BLUE);
    
    tracer0->setParam(100,0,10,5,5);
    tracer0->setEdgeMode(_EDGE);
    blue0->setBlueH(204,215);
    blue0->setBlueS(0.75,0.90);
    addSection(sc0)
    
}

bool WloopSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
        mSectionIdx++;
    if(mSectionIdx>1)
    return true;

    return false;
}
void WloopSectionManager::param()
{
    int getArrayLength;
    if(SectionManager::course == 0)
        for(int i=0;Ldata[i].wid==Section::END;i++){
            getArrayLength = i;
        }
    for(int i=0;Rdata[i].wid==Section::END;i++){
            getArrayLength = i;
    }

    if(SectionManager::course == 0){
            Walker* walker0 = sc0->selectWalker(Ldata[i].wid);
            walker0->setData(Ldata[i].param);
            Len_judge* judge0 = (Len_judge*)sc0->selectJudge(Ldata[i].jid);
            judge0->setData(Ldata[i].jparam);
        }else if(SectionManager::course == 1){
            Walker* walker0 = sc0->selectWalker(Rdata[i].wid);
            walker0->setData(Rdata[i].param);
            Len_judge* judge0 = (Len_judge*)sc0->selectJudge(Ldata[i].jid);
            judge0->setData(Rdata[i].jparam);
        }
}