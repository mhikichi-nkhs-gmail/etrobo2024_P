#ifndef _SECTION_MANAGER_H_
#define _SECTION_MANAGER_H_

#include "Section.h"

typedef struct info_data
{
    Section::WALKER_NO wid; //動作id
    double param[20]; //動作パラメータ
    Section::JUDGE_NO jid; //判定パラメータid
    double jparam[20]; //判定パラメータ
    //動作しなかったときの予備
    //int nid; //異常判定パラメータid
    //double njparam[20]; //異常判定パラメータ
}INFO_DATA;

class SectionManager {
    public:
        SectionManager();
        ~SectionManager();
        virtual bool run();
        void addSection(Section *);
        virtual void reset();
        typedef struct info_data;
        static int course;

    protected:
        Section *mSection[100];
        int mSectionIdx;
        int mLastIdx;
    private:


};

#endif
