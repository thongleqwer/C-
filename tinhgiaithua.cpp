#include <iostream>
using namespace std;
 
int main(){
    int a,s;
    cin >> a;
    s=1;
    for (int i=1; i<=a; i++)
    {
    s*=i;
    }
cout <<s<< endl;
}
