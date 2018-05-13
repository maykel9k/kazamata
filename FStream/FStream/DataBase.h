
#pragma once

#include "Student.h"

using namespace std;

class DataBase
    {
    public:
    DataBase(char *file);
    void ListData(bool akt);
    void Append();
    void Modify();
    void Pack();
    void WriteTextData();
    void ReadTextData();

    private:
    char dataFileName[64];
    };
