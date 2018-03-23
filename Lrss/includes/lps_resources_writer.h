#ifndef __LPS_RES_WRITER
#define __LPS_RES_WRITER
#include <vector>
#include "lps_resources_index.h"
class lpswriter{
    public:
        std::vector<LrssIndex> LPS_RESOURCES;
    public:
        bool Export(void);
        bool AppendResource(char* path);
        bool AppendResourcesDir(char* dir);
        bool AppendResources(char** paths);
        void RemoveResource(int index);
};
#endif