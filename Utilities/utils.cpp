#include "utils_templet.h"
#include "utils.h"
using namespace std;
std::vector<std::string> split(const std::string& str, const std::string& delim)
{
    vector<string> res;  
    if("" == str) return res;  
    char * strs = new char[str.length() + 1] ;
    strcpy(strs, str.c_str());    
    char * d = new char[delim.length() + 1];  
    strcpy(d, delim.c_str());   
    char *p = strtok(strs, d);  
    while(p) {  
        string s = p; //分割得到的字符串转换为string类型  
        res.push_back(s); //存入结果数组  
        p = strtok(NULL, d);  
    }
    return res;
}

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

