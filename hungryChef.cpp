#include <iostream>
using namespace std;
//help taken
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r;
        cin >> x >> y >> n >> r;

        if ((r / y) >= n)
        {
            cout << 0 << " " << n << endl;
        }
        else if ((r / x) < n)
        {
            cout << "-1" << endl;
        }
        else
        {
            int g = (y * n);
            int f = (x - y);

            int m = (r - g) / (f);

            if ((r - (g)) % (f) != 0)
            {
                m = m + 1;
            }
            cout << m << " " << n - m << endl;
        }
    }
    return 0;
}
