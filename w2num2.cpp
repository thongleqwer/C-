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
string tu;

int main()
{
    int b[15];
    int d[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    string tu="";
    int k=0;
    int j=0;
    int a,c,i;
    cin >> a;
    c=a;

    while ((a>9999999999999) && (a<0))
    {
        cout << "so lon qua, nhap lai: ";
        cin >> a;
    }

    while (a>0){
        b[k]=a%10;
        a=a/10;
        cout << b[k] << endl;
        k+=1;
    }
     
    for (int i=15; i>=0; i--){
        d[j]=b[i];
        cout << b[i];
        cout << d[j] << endl;
        j++;
    } 


    if (c==0)
    {
        cout << "khong viet thang chu la: 0";
    }
    else 
    {
        for (int p=0; p<13; p+=3)
        {
            if (d[p]!=0){
                tu += hangtram[d[p]];
                d[p]=0;
            }
            if (d[p+1]!=0)
            {
                tu += hangmuoi[d[p+1]];
                d[p+1]=0;
            }
            if (d[p+2]!=0)
            {
                tu += hangdv[d[p+2]];
                if (d[2]!=0)
                {
                    tu+=g;
                }
                else if (d[5]!=0)
                {
                    tu+=e;
                }
                else if (d[8]!=0)
                {
                    tu +=f;
                }
                else if (d[11]!=0)
                {
                    tu+=g;
                }
                d[p+2]=0;                
            }
        }
    }
    cout << tu << endl;
    tu = "heoll ";
    cout << tu;
}
