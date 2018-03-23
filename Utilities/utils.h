#ifndef __LPS_UTILS
#define __LPS_UTILS
#include <iostream>
#include <vector>

std::vector<std::string> split(const std::string& str, const std::string& delim);
char* getFileName(const char* path);
char* getFileNameWithoutExt(const char* filename);
char* getFileExt(const char* filename);
#endif