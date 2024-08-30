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
        INFO_DATA Ldata[31]={{Section::TRACER,{LineTracer::LEFTEDGE,70,0,5,3,4.7,0},Section::BLUE,{180,300,0.30}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{10}}//押し込み
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{-10}}//下がり
                        ,{Section::WALKER,{0,40},Section::TURN,{40}}//カーブ1
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::WALKER,{0,40},Section::TURN,{40}}//カーブ2
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{10}}//押し込み
                        ,{Section::WALKER,{0,10},Section::TURN,{0}}//旋回
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{-10}}//下がり
                        ,{Section::WALKER,{0,-10},Section::TURN,{40}}//逆旋回
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{10}}//押し込み
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{-10}}//下がり
                        ,{Section::WALKER,{0,-40},Section::TURN,{0}}//カーブ3
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::WALKER,{0,-40},Section::TURN,{40}}//カーブ4
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{10}}//押し込み
                        ,{Section::WALKER,{0,10},Section::TURN,{40}}//旋回
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,60,0,8,16,8,-5},Section::LENGTH,{-10}}//下がり
                        ,{Section::WALKER,{0,-10},Section::TURN,{40}}//逆旋回
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::WALKER,{0,40},Section::TURN,{40}}//カーブ5
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,5,3,4.7,0},Section::LENGTH,{0}}
                        ,{Section::END}};

        INFO_DATA Rdata[6]={{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{270}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{305}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{475}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,50,80,60},Section::LENGTH,{505}}
                    ,{Section::TRACER,{LineTracer::RIGHTEDGE,100,0,10,5,3},Section::LENGTH,{550}}
                    ,{Section::END}};

};

#endif
