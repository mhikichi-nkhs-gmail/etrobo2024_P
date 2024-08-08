#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        bool run();
        void param();
        int button_no;
        int getArrayLength;

    protected:

    private:
        INFO_DATA Ldata[11]={{Section::TRACER,{LineTracer::LEFTEDGE,100,0,5,6,4.7,3},Section::LENGTH,{300}}
                     //{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,100,1,10,5,3,5,1},Section::LENGTH,{3050}}
                    ,//{Section::CURVEVIRTUAL,{60,47,50,80,60,5,47},Section::LENGTH,{770}}
                     //{Section::TRACER,{LineTracer::LEFTEDGE,10,0,10,5,3},Section::LENGTH,{180}}
                    {Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,30},Section::LENGTH,{325}}
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{885}}
                     {Section::TRACER,{LineTracer::LEFTEDGE,100,0,5,6,4.7,0},Section::LENGTH,{520}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,30},Section::LENGTH,{545}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,30,0,5,6,4.7,0},Section::LENGTH,{675}}
                    ,{Section::CURVEVIRTUAL,{60,39,50,50,37,2.5,-50,0},Section::LENGTH,{795}}//,100,1,10,5,3,5,1
                    //{Section::TRACER,{LineTracer::LEFTEDGE,1,0,10,5,3},Section::LENGTH,{6000}}
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{890}}
                    ,{Section::CURVEVIRTUAL,{60,25,50,80,60,5,25,0},Section::LENGTH,{1025}}
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{1080}}
                    //,{Section::CURVEVIRTUAL,{60,30,50,80,60,5,-30,0},Section::LENGTH,{1160}}*/
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,1,0,5,3,4.7,0},Section::LENGTH,{6400}}
                    ,{Section::END}};

        INFO_DATA Rdata[8]={{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,5,6,4.7,5},Section::LENGTH,{300}}
                     //{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,100,1,10,5,3,5,1},Section::LENGTH,{3050}}
                    ,//{Section::CURVEVIRTUAL,{60,47,50,80,60,5,47},Section::LENGTH,{770}}
                     //{Section::TRACER,{LineTracer::RIGHTEDGE,10,0,10,5,3},Section::LENGTH,{180}}
                    {Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,6,4.7,-30},Section::LENGTH,{325}}
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{885}}
                     {Section::TRACER,{LineTracer::RIGHTEDGE,100,0,5,6,4.7,0},Section::LENGTH,{520}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,6,4.7,-30},Section::LENGTH,{545}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,6,4.7,0},Section::LENGTH,{655}}
                    ,{Section::CURVEVIRTUAL,{60,45,50,80,60,2.5,45},Section::LENGTH,{792}}//,100,1,10,5,3,5,1
                    /*,//{Section::TRACER,{LineTracer::RIGHTEDGE,1,0,10,5,3},Section::LENGTH,{6000}}
                     {Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{850}}
                    ,{Section::CURVEVIRTUAL,{60,40,50,80,60,5,40},Section::LENGTH,{1040}}
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{1110}}
                    ,{Section::CURVEVIRTUAL,{60,30,50,80,60,5,-30},Section::LENGTH,{1160}}*/
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,1,0,5,3,4.7,0},Section::LENGTH,{6400}}
                    ,{Section::END}};
        
        
        
        
        
        
        /*{{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{270}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{305}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{550}}
                    ,{Section::END}};*/

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