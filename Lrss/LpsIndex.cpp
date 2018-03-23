#include "includes/lps_resources_index.h"
#include "../Utilities/io/utils.h"
#include <iostream>
#include <cmath>
using namespace std;
LrssIndex::LrssIndex(char* path){
    __HEADER = {};
    char* name = getFileName(path);
    char* ext = getFileExt(name);
    char* name_ne = getFileNameWithoutExt(name);
    strcpy(__HEADER.F_NAME,name_ne);
    strcpy(__HEADER.F_TYPE,ext);
    __HEADER.FH_SIZE = getFileSize(path);
}