#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace ariel
{

    class NumberWithUnits
    {
    private:
    double a;
    string s;
    public:
        NumberWithUnits(double a, string s);
        static void read_units(ifstream &file);
        NumberWithUnits operator+(NumberWithUnits a);
        friend ostream &operator<<(ostream &os, NumberWithUnits a);
        friend istringstream &operator>>(istringstream &sample_input, NumberWithUnits a);
        friend NumberWithUnits operator-(NumberWithUnits a, NumberWithUnits b);
        friend NumberWithUnits operator-(NumberWithUnits a);
        friend bool operator<=(NumberWithUnits a, NumberWithUnits b);
        friend bool operator>(NumberWithUnits a, NumberWithUnits b);
        friend bool operator==(NumberWithUnits a, NumberWithUnits b);
        friend NumberWithUnits operator+=(NumberWithUnits a, NumberWithUnits b);
        friend bool operator!=(NumberWithUnits a, NumberWithUnits b);
        friend NumberWithUnits operator*(int a, NumberWithUnits b);
    };

};
