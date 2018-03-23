#ifndef __LPS_RES_INDEX
#define __LPS_RES_INDEX
#include "lps_resources.h"
class LrssIndex{
    private:
        long addr;
        char* path;
        LPS_FHEADER __HEADER;
    public:
        LrssIndex(char* path);
        long Address(void);
        char* Path(void);
        int Occupied(void);
        int FileSize(void);
        int Index(void);
        char* Name(void);
        char* Type(void);
};
#endif