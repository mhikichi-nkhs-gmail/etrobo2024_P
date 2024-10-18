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

        INFO_DATA Ldata[6]={{Section::TRACER,{LineTracer::LEFTEDGE,95,0,8,15,8,3},Section::LENGTH,{290}}//80
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,20},Section::LENGTH,{35}}//60
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,95,0,8,15,8,3},Section::LENGTH,{180}}//80
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,20},Section::LENGTH,{30}}//60
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,15,8,2},Section::LENGTH,{100}}//60
                    //,{Section::TRACER,{LineTracer::LEFTEDGE,40,-0.2,8,16,8,3},Section::BLUE,{180,300,0.3}}//60青検知
                    //,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,0,0,8,16,8,3,0},Section::LENGTH,{32}}青検知
                    ,{Section::END}};

        
        INFO_DATA Rdata[6]={{Section::TRACER,{LineTracer::RIGHTEDGE,95,0,24,60,12,0},Section::LENGTH,{290}}//80
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,70,0,5,6,4.7,-15},Section::LENGTH,{25}}//60
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,24,60,12,0},Section::LENGTH,{190}}//80
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,70,0,5,6,4.7,-15},Section::LENGTH,{30}}//60
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,95,0,16,40,8,0},Section::LENGTH,{100}}//60
                    //,{Section::TRACER,{LineTracer::LEFTEDGE,40,-0.2,8,16,8,3},Section::BLUE,{180,300,0.3}}//60青検知
                    //,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,0,0,8,16,8,3,0},Section::LENGTH,{32}}青検知
                    ,{Section::END}};



        /*INFO_DATA Rdata[14]={{Section::TRACER,{LineTracer::RIGHTEDGE,90,0,8,10,8,3},Section::LENGTH,{300}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,6,4.7,-20},Section::LENGTH,{20}}//325
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,90,0,8,10,8,3},Section::LENGTH,{200}}//520
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,6,4.7,-20},Section::LENGTH,{545}}//545
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,70,0,8,16,8,3},Section::LENGTH,{630}}//630
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,45,0,8,16,8,1,0},Section::LENGTH,{650}}//650
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,22.5,4.7,-5},Section::LENGTH,{823}}//823
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,45,0,8,16,8,3},Section::LENGTH,{850}}//843
                    ,{Section::CURVEVIRTUAL,{45,10,5,22.5,4.7,5,-10,0},Section::LENGTH,{860}}//853
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,70,0,8,16,8,8},Section::LENGTH,{950}}//950
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,70,0,16,32,16,13},Section::LENGTH,{1100}}//バッテリー8100クリア//1100
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,45,1,8,16,8,-1},Section::LENGTH,{1190}}//45//1190
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,8,16,8,3},Section::LENGTH,{1240}}//45//1240
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
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,25},Section::LENGTH,{325}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,80,0,8,16,8,3},Section::LENGTH,{520}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,6,4.7,25},Section::LENGTH,{545}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,8,16,8,3},Section::LENGTH,{630}}//60
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,45,0,8,16,8,1,0},Section::LENGTH,{650}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,22.5,4.7,15},Section::LENGTH,{823}}//45
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{848}}//40
                    ,{Section::CURVEVIRTUAL,{60,10,5,22.5,4.7,5,10,0},Section::LENGTH,{855}}//45
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,16,8,-5},Section::LENGTH,{950}}
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,16,32,16,-10},Section::LENGTH,{1100}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,1,8,16,8,3},Section::LENGTH,{1200}}//45
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,16,8,3},Section::LENGTH,{10003}}//45
                    ,{Section::END}};






                     INFO_DATA Ldata[15]={{Section::TRACER,{LineTracer::LEFTEDGE,80,0,8,16,8,3},Section::LENGTH,{300}}
                     //{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,1,8,16,8,1,1},Section::LENGTH,{54}}
                    ,//{Section::CURVEVIRTUAL,{60,20,50,80,60,5,-20},Section::LENGTH,{91}}                    
                    {Section::TRACER,{LineTracer::LEFTEDGE,70,0,5,6,4.7,25},Section::LENGTH,{325}}//325
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,45,0,8,16,8,1,3},Section::LENGTH,{159}}
                     {Section::TRACER,{LineTracer::LEFTEDGE,80,0,8,16,8,3},Section::LENGTH,{520}}//520
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,5,6,4.7,25},Section::LENGTH,{545}}//545
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,8,16,8,3},Section::LENGTH,{630}}//630
                    ,//{Section::TRACER,{LineTracer::RIGHTEDGE,45,0,8,16,8,6},Section::LENGTH,{655}}
                     {Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,45,0,8,16,8,1,0},Section::LENGTH,{650}}//650
                    ,//{Section::CURVEVIRTUAL,{60,39,50,50,37,2.5,-50,0},Section::LENGTH,{780}}//,100,1,10,5,3,5,1
                    {Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,22.5,4.7,15},Section::LENGTH,{823}}//823
                    ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,50,0,8,16,8,-5},Section::LENGTH,{843}}//843
                    //,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,16,8,3},Section::LENGTH,{863}}
                    ,{Section::CURVEVIRTUAL,{45,10,5,22.5,4.7,5,10,0},Section::LENGTH,{851}}//853
                    // {Section::TRACER,{LineTracer::LEFTEDGE,4,0,5,22.5,4.7,0},Section::LENGTH,{1073}}
                    ,//{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,5,1,50,80,60,5,1},Section::LENGTH,{1093}}
                    {Section::TRACER,{LineTracer::LEFTEDGE,70,0,8,16,8,-5},Section::LENGTH,{950}}//950
                    //,{Section::CURVEVIRTUAL,{60,30,50,80,60,5,-30,0},Section::LENGTH,{1160}}*/
                    /*,{Section::TRACER,{LineTracer::LEFTEDGE,70,0,16,32,16,-10},Section::LENGTH,{1095}}//ここまでバッテリー8300クリア//1100
                    //{Section::CURVEVIRTUAL,{45,15,5,22.5,4.7,5,15,0},Section::LENGTH,{983}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,45,1,8,16,8,5},Section::LENGTH,{1190}}//45//1190
                    ,{Section::TRACER,{LineTracer::LEFTEDGE,60,0,8,16,8,3},Section::LENGTH,{1200}}//45//1240
                    ,{Section::END}};
*/