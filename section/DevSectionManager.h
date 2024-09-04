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
        INFO_DATA Ldata[31]={{Section::TRACER,{LineTracer::LEFTEDGE,60,0,5,3,4.7,0},Section::BLUE,{180,300,0.30}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,40,0,8,16,8,0},Section::LENGTH,{30}}//押し込み
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,-40,0,8,16,8,0},Section::LENGTH,{30}}//下がり
                        ,{Section::WALKER,{0,40},Section::TURN,{40}}//カーブ1
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,5,3,7,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,40},Section::TURN,{20}}//カーブ2
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,30,0,8,16,8,-5},Section::LENGTH,{5}}//押し込み
                        ,{Section::WALKER,{0,10},Section::TURN,{5}}//旋回
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,-30,0,8,16,8,-5},Section::LENGTH,{5}}//下がり
                        ,{Section::WALKER,{0,-10},Section::TURN,{-5}}//逆旋回
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,30,0,8,16,8,-5},Section::LENGTH,{10}}//押し込み
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,-30,0,8,16,8,-5},Section::LENGTH,{10}}//下がり
                        ,{Section::WALKER,{0,-40},Section::TURN,{-20}}//カーブ3
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-40},Section::TURN,{-20}}//カーブ4
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,30,0,8,16,8,-5},Section::LENGTH,{5}}//押し込み
                        ,{Section::WALKER,{0,10},Section::TURN,{5}}//旋回
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::LEFTEDGE,-30,0,8,16,8,-5},Section::LENGTH,{5}}//下がり
                        ,{Section::WALKER,{0,-10},Section::TURN,{-5}}//逆旋回
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,40},Section::TURN,{40}}//カーブ5
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::END}};

        INFO_DATA Rdata[27]={{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,3,4.7,0},Section::BLUE,{180,300,0.30}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,8,16,8,0},Section::LENGTH,{15}}//押し込み
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,-40,0,8,16,8,0},Section::LENGTH,{-5}}//下がり
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}//カーブ1
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,5,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,8,5,8,0},Section::LENGTH,{35}}
                        //赤
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,16,8,0},Section::LENGTH,{15}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,8,16,8,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,5,8,0},Section::LENGTH,{15}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,5,8,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}//カーブ2
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,5,8,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,5,8,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}//カーブ3
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,5,8,0},Section::LENGTH,{15}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,8,16,8,-5},Section::LENGTH,{15}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,30,0,8,16,8,-5},Section::LENGTH,{50}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,-30,0,8,16,8,-5},Section::LENGTH,{15}}        
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}                
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,5,8,0},Section::LENGTH,{15}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,0,0,8,5,8,0},Section::LENGTH,{200}}
                        ,{Section::END}};
                        /*パターン4 27*/

                        /*
                        {{Section::TRACER,{LineTracer::RIGHTEDGE,60,0,5,3,4.7,0},Section::BLUE,{180,300,0.30}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,8,16,8,0},Section::LENGTH,{15}}//押し込み
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,-40,0,8,16,8,0},Section::LENGTH,{-5}}//下がり
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}//カーブ1
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,5,3,7,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}//カーブ2
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,30,0,8,16,8,-5},Section::LENGTH,{5}}//押し込み
                        ,{Section::WALKER,{0,10},Section::TURN,{5}}//旋回
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,-30,0,8,16,8,-5},Section::LENGTH,{5}}//下がり
                        ,{Section::WALKER,{0,-10},Section::TURN,{-5}}//逆旋回
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,30,0,8,16,8,-5},Section::LENGTH,{10}}//押し込み
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,-30,0,8,16,8,-5},Section::LENGTH,{10}}//下がり
                        ,{Section::WALKER,{0,40},Section::TURN,{20}}//カーブ3
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,40},Section::TURN,{20}}//カーブ4
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,30,0,8,16,8,-5},Section::LENGTH,{5}}//押し込み
                        ,{Section::WALKER,{0,10},Section::TURN,{5}}//旋回
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,-30,0,8,16,8,-5},Section::LENGTH,{5}}//下がり
                        ,{Section::WALKER,{0,-10},Section::TURN,{-5}}//逆旋回
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-40},Section::TURN,{-20}}//カーブ5
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,3,7,0},Section::LENGTH,{35}}
                        ,{Section::END}};
                        パターン１ 31*/

                        

};

#endif
