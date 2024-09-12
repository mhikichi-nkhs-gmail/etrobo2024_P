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
        INFO_DATA Ldata[15]={{Section::TRACER,{LineTracer::LEFTEDGE,40,0,10,5,5,0},Section::LENGTH,{55}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-50}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,200,200,100,20},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-35}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,200,200,100,4},Section::LENGTH,{10}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,40,0,8,5,10,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{40}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,200,200,100,0},Section::LENGTH,{45}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{50}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,40,0,10,7,10,0},Section::LENGTH,{25}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,10,7,10,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,0,0,8,5,8,0},Section::LENGTH,{200}}
                        ,{Section::END}
                        };

        INFO_DATA Rdata[17]={{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,5,8,0},Section::LENGTH,{55}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,200,200,100,0},Section::LENGTH,{25}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::STRAIGHTVIRTUAL,{LineTracer::RIGHTEDGE,40,0,100,100,100,0},Section::LENGTH,{25}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,5,10,0},Section::LENGTH,{45}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,5,10,0},Section::LENGTH,{35}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,5,10,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::TRACER,{LineTracer::RIGHTEDGE,50,0,8,5,10,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,50},Section::TURN,{-90}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,50,0,8,5,8,0},Section::LENGTH,{35}}
                        ,{Section::WALKER,{0,-50},Section::TURN,{90}}
                        ,{Section::TRACER,{LineTracer::LEFTEDGE,0,0,8,5,8,0},Section::LENGTH,{200}}
                        ,{Section::END}
                        };

                        /*パターン1
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
                        */
};

#endif
