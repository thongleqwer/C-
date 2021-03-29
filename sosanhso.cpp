#include<iostream>
using namespace std;
int main()
{   int a,b;
cout << "Nhap vao: \n";
    cin >> a;
    int mang[a];
    for (int i=0; i<a; i++){
        cout << "nhap so thu: "<< i <<"  ";
        cin >> mang[i];
    }
    size_t n = sizeof(mang)/sizeof(mang[0]);
    for (size_t i=0; i<n; i++){
        cout << mang[i] << " ";
    }
}
