#ifndef _DEV_SECTION_MANAGER_H_
#define _DEV_SECTION_MANAGER_H_
#include "SectionManager.h"

class DevSectionManager : public SectionManager {
    public:
        DevSectionManager();
        bool run();
        void param();
        int button_no;
        int getArrayLength;

    protected:

    private:
                INFO_DATA Ldata[20]={{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,15,8,0},Section::BLUE,{180,300,0.30}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,15,8,0},Section::LENGTH,{38}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,50,0,200,200,100,0},Section::LENGTH,{10}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,10,15,8,0},Section::LENGTH,{55}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,10,15,8,0},Section::LENGTH,{20}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,50,0,200,200,100,0},Section::LENGTH,{80}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,-50,0,200,200,100,0},Section::LENGTH,{10}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,50,0,200,200,100,0},Section::LENGTH,{45}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,10,15,8,0},Section::BLUE,{180,300,0.3}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,0,0,10,15,8,0},Section::LENGTH,{13}}
                        ,{Section::END}};


        INFO_DATA Rdata[9]={{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,15,8,0},Section::BLUE,{180,300,0.30}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,15,8,0},Section::LENGTH,{38}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,15,8,0},Section::LENGTH,{35}}
                        ,{Section::END}};
};

#endif
