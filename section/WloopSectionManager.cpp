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
    addSection(sc0);

    

    
}

bool WloopSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
        mSectionIdx++;
    if(mSectionIdx>1)
    return true;

    return false;
}