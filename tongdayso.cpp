#include<iostream>
using namespace std;
int a,t,b,i;
int s=0;
int main()
{
    cout << "nhap so dau"<< endl;
    cin >> a;
    cout << "nhap so cuoi"<< endl;
    cin >> b;
    while (a>b)
    {
        cout << "so cuoi ko dc nho kon so dau. Nhap lai: ";
        cin >> b;
    }
    cout << "muon tinh tong so le nhan 1, tong so chan nhan 2, tong cac so nhan 0"<< endl;
    cin >> t;
    if (t==0){
        for (i=a; i<=b; i++)
        {
            s=s+i;
        }
    }
    else{
        if (t==1)
        {
            for (i=a; i<=b; i++)
            {
                if (i%2==1){
                    s=s+i;
                }
                else{
                    s=s+0;
                }
            }
        }
        else{
            for (i=a; i<=b; i++){
            if (i%2==0){
                s=s+i;
            }
            else{
                s=s+0;
            }
            }
        }
    }
    cout << "tong la "<< s;
}