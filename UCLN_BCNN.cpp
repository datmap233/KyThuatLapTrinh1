#include <iostream>
using namespace std;
int ucln (int n, int m)
{
    if (m == 0)
        return n;
    return ucln (m, m % n);
}
int main ()
{
    int i, j;
    cin >> i >> j;
    cout << "UCLN: " << ucln (i,j);
    int k = i*j / ucln(i,j);
    cout << endl << "BCNN: " << k << endl;
    return 0;
}
