#include<iostream>
using namespace std;
int c,a;
int main(){
cout <<"nhap ngay: ";
cin>>c;
switch(c)
{
    case 1: cout << "Thang 1 co 31 ngay";
    break;
    case 2:
        cout << "nhap nam ";
        cin >> a;
        if (a%4==0)
        {
            cout << "thang 2 nam "<<a<< " co 29 ngay";
        }
        else cout <<"thang 2 nam "<< a << " co 28 ngay";
    break;
    case 3: cout << "Thang 3 co 31 ngay";
    break;
    case 4: cout << "Thang 4 co 30 ngay";
    break;
    case 5: cout << "Thang 5 co 31 ngay";
    break;
    case 6: cout << "Thang 6 co 30 ngay";
    break;
    case 7: cout << "Thang 7 co 31 ngay";
    break;
    case 8: cout << "Thang 8 co 31 ngay";
    break;
    case 9: cout << "Thang 9 co 30 ngay";
    break;
    case 10: cout << "Thang 10 co 31 ngay";
    break;
    case 11: cout << "Thang 11 co 30 ngay";
    break;
    case 12: cout << "Thang 12 co 31 ngay";
    default : cout << "khong co thu nay";
}
}
