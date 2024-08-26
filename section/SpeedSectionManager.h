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
        INFO_DATA Ldata[14]={{Section::TRACER,{LineTracer::LEFTEDGE,80,0,8,16,8,3},Section::LENGTH,{300}}
                     //{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,8,16,8,1,1},Section::LENGTH,{100}}
                    ,//{Section::CURVEVIRTUAL,{60,47,50,80,60,5,47},Section::LENGTH,{770}}
                     //{Section::TRACER,{LineTracer::LEFTEDGE,10,0,10,5,3},Section::LENGTH,{180}}
                    {Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,25},Section::LENGTH,{325}}
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{885}}
                     {Section::TRACER,{LineTracer::LEFTEDGE,80,0,8,16,8,3},Section::LENGTH,{520}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,25},Section::LENGTH,{545}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,8,16,8,3},Section::LENGTH,{630}}//60
                    ,//{Section::TRACER,{LineTracer::RIGHTEDGE,45,0,8,16,8,6},Section::LENGTH,{655}}
                     {Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,45,0,8,16,8,1,0},Section::LENGTH,{650}}
                    ,//{Section::CURVEVIRTUAL,{60,39,50,50,37,2.5,-50,0},Section::LENGTH,{780}}//,100,1,10,5,3,5,1
                    {Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,22.5,4.7,15},Section::LENGTH,{823}}//45
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{848}}//40
                    //,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,16,8,3},Section::LENGTH,{863}}
                    ,{Section::CURVEVIRTUAL,{60,10,5,22.5,4.7,5,10,0},Section::LENGTH,{855}}//45
                    // {Section::TRACER,{LineTracer::LEFTEDGE,4,0,5,22.5,4.7,0},Section::LENGTH,{1073}}
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,5,1,50,80,60,5,1},Section::LENGTH,{1093}}
                    {Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,16,8,-5},Section::LENGTH,{950}}
                    //,{Section::CURVEVIRTUAL,{60,30,50,80,60,5,-30,0},Section::LENGTH,{1160}}*/
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,16,32,16,-10},Section::LENGTH,{1100}}
                    //{Section::CURVEVIRTUAL,{45,15,5,22.5,4.7,5,15,0},Section::LENGTH,{983}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,1,8,16,8,3},Section::LENGTH,{1200}}//45
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,16,8,3},Section::LENGTH,{10003}}//45
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
8100~8000
INFO_DATA Ldata[14]={{Section::TRACER,{LineTracer::LEFTEDGE,80,0,8,16,8,3},Section::LENGTH,{300}}
                     //{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,8,16,8,1,1},Section::LENGTH,{100}}
                    ,//{Section::CURVEVIRTUAL,{60,47,50,80,60,5,47},Section::LENGTH,{770}}
                     //{Section::TRACER,{LineTracer::LEFTEDGE,10,0,10,5,3},Section::LENGTH,{180}}
                    {Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,25},Section::LENGTH,{325}}
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,50,80,60,5,1},Section::LENGTH,{885}}
                     {Section::TRACER,{LineTracer::LEFTEDGE,80,0,8,16,8,3},Section::LENGTH,{520}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,25},Section::LENGTH,{545}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,8,16,8,3},Section::LENGTH,{630}}//60
                    ,//{Section::TRACER,{LineTracer::RIGHTEDGE,45,0,8,16,8,6},Section::LENGTH,{655}}
                     {Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,45,0,8,16,8,1,0},Section::LENGTH,{650}}
                    ,//{Section::CURVEVIRTUAL,{60,39,50,50,37,2.5,-50,0},Section::LENGTH,{780}}//,100,1,10,5,3,5,1
                    {Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,22.5,4.7,15},Section::LENGTH,{823}}//45
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{848}}//40
                    //,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,16,8,3},Section::LENGTH,{863}}
                    ,{Section::CURVEVIRTUAL,{60,10,5,22.5,4.7,5,10,0},Section::LENGTH,{855}}//45
                    // {Section::TRACER,{LineTracer::LEFTEDGE,4,0,5,22.5,4.7,0},Section::LENGTH,{1073}}
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,5,1,50,80,60,5,1},Section::LENGTH,{1093}}
                    {Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,16,8,-5},Section::LENGTH,{950}}
                    //,{Section::CURVEVIRTUAL,{60,30,50,80,60,5,-30,0},Section::LENGTH,{1160}}*/
                    /*,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,16,32,16,-10},Section::LENGTH,{1100}}
                    //{Section::CURVEVIRTUAL,{45,15,5,22.5,4.7,5,15,0},Section::LENGTH,{983}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,1,8,16,8,3},Section::LENGTH,{1200}}//45
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,16,8,3},Section::LENGTH,{10003}}//45
                    ,{Section::END}};

*/