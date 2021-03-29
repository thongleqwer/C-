#include<iostream>
using namespace std;
 
int a,b,c;
int main()
{
    cout<<"nhap canh a: ";
    cin>> a;
    cout<<"nhap canh b: ";
    cin>> b;
    cout<<"nhap canh c: ";
    cin>> c;
    if (a+b<=c)
    {
        cout <<"ko phai 3 canh 1 tam giac";
    }
    else{
        if (a+c<=b) {
            cout<<"ko phai ba canh 1 tam giac";
        }
        else{
            if (b+c<=a){
                cout<<"ko phai 3 canh 1 tam giac";
            }
            else cout<<"la 3 canh 1 tam giac";
        }
    }
}
