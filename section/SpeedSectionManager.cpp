#include "SpeedSectionManager.h"
#include "Section.h"
#include "Len_judge.h"

SpeedSectionManager::SpeedSectionManager()
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
    Len_judge* judge0 =(Len_judge*)sc0->selectJudge(Section::LENGTH);

    tracer0->setParam(100, 0 ,  10, 5, 2 );
    tracer0->setEdgeMode(_EDGE);
    judge0->setLength(300);
    addSection(sc0);

//1
    Section* sc1 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer1 = (LineTracer*)sc1->selectWalker(Section::TRACER);
    Len_judge* judge1 =(Len_judge*)sc1->selectJudge(Section::LENGTH);

    tracer1->setParam(70, 0 ,  10, 5, 2 );
    tracer1->setEdgeMode(_EDGE);
    judge1->setLength(320);
    //距離目安　tracer1->setLength(20);
    addSection(sc1);
//2
    Section *sc2 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer2 = (LineTracer*)sc2->selectWalker(Section::TRACER);
    Len_judge* judge2 =(Len_judge*)sc2->selectJudge(Section::LENGTH);

    tracer2->setParam(100, 0 ,  10, 5, 2 );
    tracer2->setEdgeMode(_EDGE);
    judge2->setLength(510);
    addSection(sc2);
    //距離目安　tracer2->setLength(344);
//3
    Section *sc3 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer3 = (LineTracer*)sc3->selectWalker(Section::TRACER);
    Len_judge* judge3 =(Len_judge*)sc3->selectJudge(Section::LENGTH);

    tracer3->setParam(70, 0 ,  10, 5, 2 );
    tracer3->setEdgeMode(_EDGE);
    judge3->setLength(520);
    //距離目安　tracer3->setLength(524);
    addSection(sc3);
//4
    Section *sc4 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer4 = (LineTracer*)sc4->selectWalker(Section::TRACER);
    Len_judge* judge4 =(Len_judge*)sc4->selectJudge(Section::LENGTH);

    tracer4->setParam(100, 0 ,  10, 5, 2 );
    tracer4->setEdgeMode(_EDGE);
    judge4->setLength(548);
    //距離目安　tracer4->setLength(548);
    addSection(sc4);
/*5
    Section *sc5 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer5 = (LineTracer*)sc5->selectWalker(Section::TRACER);
    Len_judge* judge5 =(Len_judge*)sc5->selectJudge(Section::LENGTH);

    tracer5->setParam(80, 0 ,  30, 0.2, 0.1 );
    tracer5->setEdgeMode(_EDGE);
    judge1->setLength(576);
    //距離目安　tracer5->setLength(576);
    addSection(sc5);

    
    /*
    // SimpleWalkerテスト
    SimpleWalker* walker = (SimpleWalker*)sc->selectWalker(Se
    ction::WALKER);
    walker->setCommand(10,10);
    */
    

}

bool SpeedSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
        mSectionIdx++;
    if(mSectionIdx>1)
    return true;

    return false;
}