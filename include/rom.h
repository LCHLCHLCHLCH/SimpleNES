#ifndef ROM_H
#define ROM_H

#include "smb.h"


namespace LCH
{
    class rom
    {
    public:
        rom();
        void read(char* a,int n);

    private:
        unsigned char *buffer; // 指向数据的指针
        int position; // 当前读取位置
    };

}

#endif
