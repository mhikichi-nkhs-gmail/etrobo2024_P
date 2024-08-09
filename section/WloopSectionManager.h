#ifndef _WLOOP_SECTION_MANAGER_H_
#define _WLOOP_SECTION_MANAGER_H_
#include "SectionManager.h"

class WloopSectionManager : public SectionManager {
    public:
        WloopSectionManager();
        bool run();
        void param();
        int button_no;
        int getArrayLength;

    protected:

    private:
        INFO_DATA Ldata[3]={{Section::TRACER,{LineTracer::LEFTEDGE,70,0,5,3,4.7,0},Section::BLUE,{180,300,0.30}}
                        ,{Section::WALKER,{0,0},Section::LENGTH,{2000}}
                        //,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,3,4.5,10},Section::BLUE,{180,300,0.30}}
                        ,{Section::END}};

        INFO_DATA Rdata[6]={{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{270}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{305}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{550}}
                    ,{Section::END}};

};

#endif

/*

#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        bool run();
        void param();
        int button_no;

    protected:

    private:
        INFO_DATA Ldata[8]={{Section::TRACER,{LineTracer::LEFTEDGE,10,0,10,5,3},Section::LENGTH,{15}}//303
                     ,//{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,100,300,10,5,3,5,300},Section::LENGTH,{3050}}
                     {Section::CURVEVIRTUAL,{LineTracer::LEFTEDGE,60,44,50,80,60,5,44},Section::LENGTH,{3050}}
                     //{Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{350}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{520}}
                    ,//{Section::CURVEVIRTUAL,{LineTracer::LEFTEDGE,60,0,50,80,60,5,20},Section::LENGTH,{505}}
                     {Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{570}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{644}}
                    ,//{Section::CURVEVIRTUAL,{LineTracer::LEFTEDGE,60,44,50,80,60,5,44},Section::LENGTH,{782}}
                    {Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{812}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{644}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{8120}}
                    }
                    ;

        INFO_DATA Rdata[5]={{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{270}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{305}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{550}}};

};

#endif

*/