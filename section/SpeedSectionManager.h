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
        INFO_DATA Ldata[5]={{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{270}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{305}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{550}}};

        INFO_DATA Rdata[5]={{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{270}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{305}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,50,80,60},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,100,0,10,5,3},Section::LENGTH,{550}}};

};

#endif
