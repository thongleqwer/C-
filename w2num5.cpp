#include<iostream>
#include<math.h>
using namespace std;

string hangdv[10]={" ","mot ","hai ","ba ","bon ","nam ","sau ","bay ","tam ","chin "};
string hangchuc[10]={"muoi ","muoi mot ","muoi hai ","muoi ba ","muoi bon ","muoi lam ","muoi sau ","muoi bay ","muoi tam ","muoi chin "};
string hangmuoi[10]={" ","muoi ","hai muoi ","ba muoi ","bon muoi ","nam muoi ","sau muoi ","bay muoi ","tam muoi ","chin muoi "};
string hangtram[10]={"khong tram ","mot tram ","hai tram ","ba tram ","bon tram ","nam tram ","sau tram ","bay tram ","tam tram ","chin tram "};
string e="ti ";
string f="trieu ";
string g="nghin ";
string tu="";
int a,i,o,so;
int k=0;
int u=0;
int h=0;
int main()
{
    cout << "nhap so: ";
    cin >> a;
    int c=0;
    while ((a>9999999999999) && (a<0))
    {
        cout << "so lon qua, nhap lai: ";
        cin >> a;
    }
    o=a;
    so=a;
    while (a>0)
    {
        a=a/10;
        u+=1;
    }
    cout <<u<< endl;
    int b[u];
    int d[u];
    while (o>0)
    {
        b[k]=o%10;
        o=o/10;
        // cout << b[k]<< endl;
        k+=1;
    }
    for (i=u; i>=0; i--)
    {
        d[i]=b[h];
        h+=1;
        // cout << d[i]<< endl;
    }
    cout << d[0];
    if (so==0)
    {
        cout << "0 viet thanh chu la: khong";
    }
    else
    {
        
    }
    cout << tu;
}