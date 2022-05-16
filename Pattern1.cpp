#include <iostream>
using namespace std;

int main()
{
    int N, i, j, k;
    cin >> N;
    i = 1;
    while (i <= N)
    {
        j = 1;
        k = i;
        while (j <= i)
        {
            cout << k;
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
