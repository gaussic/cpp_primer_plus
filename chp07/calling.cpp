// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>
void simple();      // function prototype
int main()
{
    using namespace std;
    cout << "main() with call the sample() function:\n";
    simple();       // function call
    cout << "main() is finished with the simple() function.\n";
    // cin.get()
    return 0;
}

// function definition
void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}