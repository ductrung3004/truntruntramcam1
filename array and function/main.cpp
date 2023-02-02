#include <iostream>
#include <iomanip>

using namespace std;
unsigned long long fibonacci(int x)
{
    unsigned long long a[101];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= x; ++i)
        a[i] = a[i - 1] + a[i - 2];
    return a[x];
}
unsigned long long fiborecur(int x)
{
    if (x == 0) return 0;
    if (x == 1) return 1;
    return fiborecur(x-1) + fiborecur(x - 2);

}
int main() {
    int x;
    cin >> x;
    cout << fibonacci(x) << "\n" ;
    return 0;
}
