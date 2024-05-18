#include "rom.h"

extern const unsigned char smb_nes[40976];

namespace LCH
{
    rom::rom()
    {
        buffer = (unsigned char *)smb_nes;
        position = 0;
    }

    void rom::read(char *a, int n)
    {
        char *pointer = a;

        int i;
        for (i = 0; i < n; i++)
        {
            *pointer = *(smb_nes+position);
            position++;
            pointer++;
        }
    }

}