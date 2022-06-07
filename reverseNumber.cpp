/*
Write a program to generate the reverse of a given
number N. Print the corresponding reverse number.
( Note : If a number has trailing zeros, then its
reverse will not include them.
For e.g., reverse of 10400 will be 401
instead of 00401. )
*/
#include <iostream>
using namespace std;

int reverseNum(int n)
{
    int reverse = 0;
    while (n)
    {
        int lastDigit;
            lastDigit = n % 10;
                reverse = (reverse * 10) + lastDigit;
             n = n / 10;
    }

     cout << reverse << endl;

    return 0;
}
int main()
{
    int n;
    cin >> n;

        reverseNum(n);

    return 0;
}