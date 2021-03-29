#include<iostream>
using namespace std;
int main()
{
    int a,c;
    c=0;
    cin >> a;
    int b[a];
    for (int i=0; i<a; i++)
    {
        cin >> b[i];
    }
    for (int p=0; p<a-1; p++)
    {
        if ((b[p]*b[p+1])<0)
        {
            c+=1;
        }
    }
    cout <<"so lan can chuyen la: "<< c<<endl;
}