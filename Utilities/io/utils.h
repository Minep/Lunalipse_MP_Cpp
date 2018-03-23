#ifndef __LPS_UTILS_IO_FILE
#define __LPS_UTILS_IO_FILE
#include <iostream>
#include <vector>
#include <fstream>
char* getFileName(const char* path);
char* getFileNameWithoutExt(const char* filename);
char* getFileExt(const char* filename);
long getFileSize(const char* path);
#endif