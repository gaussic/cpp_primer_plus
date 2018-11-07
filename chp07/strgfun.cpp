// strgfun.cpp -- functions with a string argument
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
    using namespace std;
    char mmm[15] = "minimum";       // string in array
    // some systems require preceding char with static to enable array initialization

    char *wail = "ululate";         // wait points to string

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

// this function consts the number of characters in the string str
unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    while (*str)            // quit when *str is '\0'
    {
        if (*str == ch)
            count++;
        str++;              // move pointer to next char
    }
    return count;
}