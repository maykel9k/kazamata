
#pragma once

#include <ostream>

using namespace std;

struct Student
    {
    char    FirstName[15];
    char    LastName[25];
    int     IdNumber;
    char    Group[4];
    double  Average;
    bool    Active;

    friend ostream&operator<<(ostream& os, const Student& s);
    };
