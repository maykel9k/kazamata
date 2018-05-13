
#include "Student.h"
#include <ostream>
#include <iomanip>

using namespace std;

ostream&operator<<(ostream& os, const Student& s)
    {
    os << " | " << left << setw(15) << s.FirstName << " | " << setw(25) << s.LastName << " | " << setw(8) << s.IdNumber << " | " << setw(4) << s.Group << " | " << setw(4) << s.Average << " | " << s.Active << " | " << endl ;
    return os;
    }
