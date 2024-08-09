#include "WloopSectionManager.h"
#include "SectionManager.h"
#include "Section.h"
#include "CurveVirtual.h"

WloopSectionManager::WloopSectionManager()
{
/*    // test用初期化
 #if defined(MAKE_RIGHT)
 
      const int _EDGE = LineTracer::RIGHTEDGE;
#else
      const int _EDGE = LineTracer::LEFTEDGE;
#endif
    Section *sc0 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer0 = (LineTracer*)sc0->selectWalker(Section::TRACER);
    Len_judge* judge0 =(Len_judge*)sc0->selectJudge(Section::LENGTH);
    
    CurveVirtual* curve0 = (CurveVirtual*)sc0->selectWalker(Section::CURVEVIRTUAL);
    curve0->reset();

    tracer0->setParam(15, 0 , 10 , 0.1, 0 );
    tracer0->setParam(100, 0 ,  10, 5, 2 );
    tracer0->setEdgeMode(_EDGE);
    judge0->setLength(300);
    
    addSection(sc0);

//1
    Section* sc1 = new Section();
    
    // LineTracer テスト
    LineTracer* tracer1 = (LineTracer*)sc1->selectWalker(Section::TRACER);
    Len_judge* judge1 =(Len_judge*)sc1->selectJudge(Section::LENGTH);

    tracer1->setParam(15, 0 ,  10, 0.1, 0.1 );
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



bool WloopSectionManager::run()
{
    
    if(mSection[mSectionIdx]->run()){
        mSectionIdx++;
    }
    if(mSectionIdx>=getArrayLength){
        return true;
    }else{
        return false;
    }
}
void WloopSectionManager::param()
{
    if(SectionManager::course == 0){
        for(int i=0;Ldata[i].wid!=Section::END;i++){
            getArrayLength = i+1;
        }
    }else{
        for(int i=0;Rdata[i].wid!=Section::END;i++){
            getArrayLength = i+1;
        }
    }
    
    //printf("%d\n",getArrayLength);    
        
     for(int i=0;i<getArrayLength;i++){
        Section *sc0 = new Section();

        /*Walker* walker0 = sc0->selectWalker(Section::TRACER);
        Len_judge* judge0 = (Len_judge*)sc0->selectJudge(Section::LENGTH);*/
        
        if(SectionManager::course == 0){
            Walker* walker0 = sc0->selectWalker(Ldata[i].wid);
            walker0->setData(Ldata[i].param);
            Judge* judge0 = sc0->selectJudge(Ldata[i].jid);
            judge0->setData(Ldata[i].jparam);
        }else if(SectionManager::course == 1){
            Walker* walker0 = sc0->selectWalker(Rdata[i].wid);
            walker0->setData(Rdata[i].param);
            Judge* judge0 = sc0->selectJudge(Ldata[i].jid);
            judge0->setData(Rdata[i].jparam);
        }
        
        addSection(sc0);
    }
}