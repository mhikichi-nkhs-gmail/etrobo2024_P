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
    Section *sc = new Section();
    
    // LineTracer テスト
    LineTracer* tracer = (LineTracer*)sc->selectWalker(Section::TRACER);

    //PID
    tracer->setParam(25, 0 ,  30, 0.2, 0.1 );
    tracer->setEdgeMode(_EDGE);
    addSection(sc);
    /*
    // SimpleWalkerテスト
    SimpleWalker* walker = (SimpleWalker*)sc->selectWalker(Section::WALKER);
    walker->setCommand(10,10);
    */
    

}

bool SpeedSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
        mSectionIdx++;

    return false;
}