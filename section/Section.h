#ifndef _SECTION_H_
#define _SECTION_H_

#include "LineTracer.h"
#include "SimpleWalker.h"

#include "Walker.h"
#include "Judge.h"


class Section {
    public:
        Section();
        ~Section();
        virtual bool run();
        Walker *selectWalker(int no);
        Judge *selectJudge(int no);


        enum WALKER_NO {
            WALKER,
            TRACER,
            CURVEVIRTUAL
        };

        enum JUDGE_NO{
            LENGTH,
            BLUE
        };

    protected:
        Walker *mWalker;
        Judge *mJudge;

    private:
        bool j_flag;
        bool w_flag;
};

#endif
