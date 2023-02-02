#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a[6];
    int max = 0;
    for (int i = 0 ; i <= 5 ; ++i) {
        cin >> a[i];
        if (max < a[i]) max = a[i];
    }
    cout << max;
    return 0;
}
