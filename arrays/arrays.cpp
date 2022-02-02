#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Primitive type vectors */

    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* Array Objects using the Array Class */
    array<int, 5> arrayObject; 
    arrayObject.fill(256); 

    cout << "Printing Arr Object elements:";
    for(int& x : arrayObject) { cout << ' ' << x; }
    cout << "\n";

    return 0;
}
