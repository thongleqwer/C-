// Tính kết quả của phép toán 1+1/2 3 +1/3 3 +...+1/n 3  (làm tròn 3 chữ số thập phân).
//ez
#include <iostream>
#include <cmath>
using namespace std;
int a,i,n;
float s=0;
int main()
{
    cout << "nhap so";
    cin >> a;
    cout << "nhap so mu";
    cin >> n;
    for(i=1; i<=a; i++)
        s+=(1/(pow(i,n)));
    cout << s;
}