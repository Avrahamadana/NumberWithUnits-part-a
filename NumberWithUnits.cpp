#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include "NumberWithUnits.hpp"

using namespace ariel;

NumberWithUnits::NumberWithUnits(double a, string s) {}

NumberWithUnits NumberWithUnits::operator+(NumberWithUnits a)
{
    NumberWithUnits n = a;
    return n;
}
NumberWithUnits ariel::operator-(NumberWithUnits a)
{
    NumberWithUnits n = a;
    return n;
}

NumberWithUnits ariel::operator-(NumberWithUnits a, NumberWithUnits b)
{
    return a;
}

NumberWithUnits ariel::operator+=(NumberWithUnits a, NumberWithUnits b)
{
    return a;
}
bool ariel::operator<=(NumberWithUnits a, NumberWithUnits b)
{
    return true;
}
bool ariel::operator>(NumberWithUnits a, NumberWithUnits b)
{
    return true;
}
bool ariel::operator==(NumberWithUnits a, NumberWithUnits b)
{
    return true;
}

bool ariel::operator!=(NumberWithUnits a, NumberWithUnits b)
{
    return true;
}


NumberWithUnits ariel::operator*(int a, NumberWithUnits b)
{
    return b;
}

std::ostream &ariel::operator<<(std::ostream &os, NumberWithUnits a)
{
    return os;
}
istringstream &ariel::operator>>(istringstream &sample_input, NumberWithUnits a)
{
    return sample_input;
}
void NumberWithUnits::read_units(ifstream &file)
{
}
