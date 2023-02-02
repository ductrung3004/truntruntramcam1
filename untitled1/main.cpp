/*
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector <double> a;
unsigned long long nGiaiThua ;
double Giaithua (int n) {
    double NeperNumber = 0;

    a.push_back(1);
    int i = 1;
    while (i <= n) {
        double x = (double) (a[a.size() - 1] / i++);
        a.push_back(x);
        NeperNumber += x;
    }
    return NeperNumber;
}
int Giaithua2 (int x){
    if (x==0) return 1;
    int p=1;
    for (int i=1;i<=x;i++)
        p=p*i;
    return p;
}

void inputprogress()
{

    double epsilon;
    cin >> epsilon;
    nGiaiThua = 1/epsilon;

}
int main() {
    inputprogress();

    unsigned long long n=0,j=1, copy = nGiaiThua;
    while (j <= nGiaiThua)
    {
        n++;
        j *= n;
    }
    double NeperNumber;
    for (int i = 0 ; i <= n;++i)
        NeperNumber = NeperNumber + 1 / (double) Giaithua2(i);
    cout << setprecision(10) << fixed << NeperNumber;

    return 0;
}*/
#include <iostream>
#include <iomanip>
using namespace std;

double Sgiaithua (double x)
{
    double NeperNumber = 1;
    unsigned long long nGiaiThua=1/x;// Tìm Giới hạn cho vòng lập
    int i=0,j=1;
    while (j <= nGiaiThua)
    {
            i++;
            j = j * i;// tính giai thừa
            double z = 1 / (double) j; // tính số nghịch đảo của giai thừa
            NeperNumber += z ; // tính tổng
            if (z < 0) break; // điều kiện giới hạn vòng lập khi tràn số
        }
        return NeperNumber;
}
int main() {
    double epsilon;
    cin >> epsilon;
    cout << setprecision(10) << fixed << Sgiaithua(epsilon);

    return 0;
}
