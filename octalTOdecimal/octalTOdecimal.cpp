#include <iostream>
#include <cmath>

using namespace std;

int octalToDecimal(int octalNumber);

int main()
{
    int octalNumber;
    cout << "Enter an octal number : ";
    cin >> octalNumber;
    cout << octalNumber << " in octal = " << octalToDecimal(octalNumber) << " in decimal";
    return 0;
}

int octalToDecimal(int octalNumber)

{
    int decimalNumber(0), rem, i(0);
    decimalNumber % 10;
    octalNumber /= 10;
    decimalNumber += rem * pow(8, i);
    i++;

    return decimalNumber;
}