#include "SpeedSectionManager.h"
#include "Section.h"

SpeedSectionManager::SpeedSectionManager()
{
    // test用初期化
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::RIGHTEDGE;
#else
      const int _EDGE = LineTracer::LEFTEDGE;
#endif
//0
    Section *sc0 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer0 = (LineTracer*)sc0->selectWalker(Section::TRACER);

    tracer0->setParam(25, 0 ,  30, 0.2, 0.1 );
    tracer0->setEdgeMode(_EDGE);
    addSection(sc0);

//1
    Section* sc1 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer1 = (LineTracer*)sc1->selectWalker(Section::TRACER);

    tracer1->setParam(25, 0 ,  30, 0.2, 0.1 );
    tracer1->setEdgeMode(_EDGE);
    addSection(sc1);
//2
    Section *sc2 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer2 = (LineTracer*)sc2->selectWalker(Section::TRACER);

    tracer2->setParam(25, 0 ,  30, 0.2, 0.1 );
    tracer2->setEdgeMode(_EDGE);
    addSection(sc2);
//3
    Section *sc3 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer3 = (LineTracer*)sc3->selectWalker(Section::TRACER);

    tracer3->setParam(25, 0 ,  30, 0.2, 0.1 );
    tracer3->setEdgeMode(_EDGE);
    addSection(sc3);
//4
    Section *sc4 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer4 = (LineTracer*)sc4->selectWalker(Section::TRACER);

    tracer4->setParam(25, 0 ,  30, 0.2, 0.1 );
    tracer4->setEdgeMode(_EDGE);
    addSection(sc4);
//5
    Section *sc5 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer5 = (LineTracer*)sc5->selectWalker(Section::TRACER);

    tracer5->setParam(25, 0 ,  30, 0.2, 0.1 );
    tracer5->setEdgeMode(_EDGE);
    addSection(sc5);

    /*
    // SimpleWalkerテスト
    SimpleWalker* walker = (SimpleWalker*)sc->selectWalker(Section::WALKER);
    walker->setCommand(10,10);
    */
    

}

bool SpeedSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
        return true;

    return false;
}