#include<iostream>
#include<math.h>
using namespace std;
float a,b,c,delta,x,x1,x2;
int main()
{
    cin>>a>>b>>c;
    delta=(b*b)-(4*a*c);
    if (delta<0)
    {
        cout <<"khong co nghiem";
    }
    else {
            if (delta==0)
            {
            x=(-b)/(2*a);
            cout <<"co 1 nghiem duy nhat "<<x; 
            }
            else{
                x1=(-b+sqrt(delta))/(2*a) ;
                x2=(-b-sqrt(delta))/(2*a) ;
                cout << "pt co 2 nghiem "<<x1<< " va "<<x2 ;
            }
        }
    
}