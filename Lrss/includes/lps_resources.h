#ifndef __LPS_RES
#define __LPS_RES
typedef struct{
    public:
        int H_MAGIC;
        char H_SIG[32];
        long H_FH_LOC[32];
        bool H_ENCRYPTED;
        int H_PWD_ACT_LEN;
}LPS_HEADER;

typedef struct{
    public:
        int FH_INDEX;
        int FH_BCOUNT;
        long FH_SIZE;
        char F_NAME[128];
        char F_TYPE[16];
}LPS_FHEADER;

typedef struct{
    public:
        int FB_INDEX;
        unsigned char FB_DAT[1024];
}LPS_FBLOCK;

typedef struct{
    public:
        unsigned char VE_KEY[26];
}LPS_VERIFICATION;
#endif