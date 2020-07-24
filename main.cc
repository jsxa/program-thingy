#include <iostream>
#include <cmath>

using namespace std;

double power(double base, int exponent)// declaring, defining.
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}


void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is" << myPower << ".\n";
}


int main()
{
    double base;
    int exponent;
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "what is the exponent: ";
    cin >> exponent;
    print_pow(base, exponent);
}
