#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char a;   // Character type variable
    float b;  // Decimal float type variable
    double c; // double type variable

    // Check the memory's size that each variable use
    cout << "Reserved bytes in memory by variable A? " << sizeof(a);
    cout << "\nReserved bytes in memory for variable B? " << sizeof(b);
    cout << "\nReserved bytes in memory for variable C? " << sizeof(c);

    // Print the values of each variable (not assigned yet)!
    cout << "\n\nValue of variable A: " << a;
    cout << "\nValue of variable B: " << b;
    cout << "\nValue of variable C: " << c;

    // Assign values to variable B and C only!
    cout << "\n\n";
    cout << "Please type a number (you can type decimals too): ";
    cin >> b;  // Get the value typed by the user with "cin"

    // Assign a hard-coded  value to C
    c = 8.52512;

    //Print the values of a,b & c
    cout << "Value of variable A: " << a;
    cout << "\nNew value of variable B: " << b;
    cout << "\nNew value of variable C: " << c;

    system("pause > nil"); // Pauses the program execution and you need to press RETURN to terminate the program.
}
