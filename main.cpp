#include <iostream>

using namespace std;

int main()
{
    int fN, sN;
    int bitwiseAnd, bitwiseOr, bitwiseXor, bitwiseLeftShift, bitwiseRightShift, bitwiseNot;

    cout << "Enter two Number:";
    cin >> fN >> sN;
    unsigned char fNumber = fN, sNumber = sN;

    bitwiseAnd = fNumber & sNumber ;
    bitwiseOr = fNumber | sNumber;
    bitwiseXor = fNumber ^ sNumber;
    bitwiseRightShift = fNumber >> sNumber;
    bitwiseLeftShift = fNumber << sNumber;
    bitwiseNot = ~fNumber;

    cout << "Bitwise AND : " << bitwiseAnd << endl;
    cout << "Bitwise OR : " << bitwiseOr << endl;
    cout << "Bitwise XOR : " << bitwiseXor << endl;
    cout << "Bitwise Left Shift : " << bitwiseLeftShift << endl;
    cout << "Bitwise Right Shift : " << bitwiseRightShift << endl;
    cout << "Bitwise NOT : " << bitwiseNot << endl;
    return 0;
}
