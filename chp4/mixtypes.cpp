// mixtypes.cpp -- some type combinations
#include <iostream>

struct antartica_years_end
{
    int year;
    /* some really interesting data, etc. */
};

int main()
{
    antartica_years_end s01, s02, s03;
    s01.year = 1998;
    antartica_years_end * pa = &s02;
    pa->year = 1999;
    antartica_years_end trio[3];    // array of 3 structures
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antartica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antartica_years_end ** ppa = arp;
    auto ppb = arp;     // C++ automatic type deduction
    // or else use const antartica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;
    return 0;
}

