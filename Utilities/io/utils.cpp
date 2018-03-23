#include "../utils_templet.h"
#include "../string/utils_str.h"
#include "utils.h"
using namespace std;

char* getFileName(const char* path){
    vector<string> name = split(path,"\\");
    char c[128];
    strcpy(c,name[name.size()-1].c_str());
    dVector(name);
    return c;
}

char* getFileExt(const char* filename){
    vector<string> name = split(filename,".");
    char c[16];
    strcpy(c,name[name.size()-1].c_str());
    dVector(name);
    return c;
}

char* getFileName(const char* filename){
    vector<string> name = split(filename,".");
    char c[128];
    strcpy(c,name[0].c_str());
    dVector(name);
    return c;
}

long getFileSize(const char* path){
    ifstream file;
    file.open(path);
    if(!file) return -1;
    file.seekg(0,ios::end);
    long size = file.tellg();
    file.close();
    return size;
}

