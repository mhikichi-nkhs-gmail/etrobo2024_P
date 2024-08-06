#ifndef _WLOOP_SECTION_MANAGER_H_
#define _WLOOP_SECTION_MANAGER_H_
#include "SectionManager.h"

class WloopSectionManager : public SectionManager {
    public:
        WloopSectionManager();
        bool run();
        void param();

    protected:

    private:
        INFO_DATA Ldata[6]={{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{135}}
                    ,{Section::CURVEVIRTUAL,{LineTracer::LEFTEDGE,60,0,50,80,60,5,20},Section::LENGTH,{360}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::CURVEVIRTUAL,{LineTracer::LEFTEDGE,60,0,50,80,60,5,20},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{550}}
                    ,{Section::END}};

        INFO_DATA Rdata[6]={{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{270}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{305}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{550}}
                    ,{Section::END}};
};

#endif
