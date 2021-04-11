#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int len, xuong, bang, dem1, dem2, dem3;
    int a,b;
    len=0; xuong=0; bang=0;
    dem1=0; dem2=0; dem3=0;
    cout << "nhap do dai cua doc: ";
    cin >> a;
    vector<int>doc;
    for (int i=0; i<a; i++)
    {
        cin >> b;
        doc.push_back(b);
    }
    // for (int i=0; i<a; i++)
    // {
    //     cout << doc.at(i);
    // }
    for (int i=0; i<a-1; i++)
    {
        if ((doc.at(i)<doc.at(i+1)) && (dem1==0))
        {
            dem2=0; dem3=0;
            len+=1;
            dem1+=1;
        }
        if ((doc.at(i)>doc.at(i+1)) && (dem2==0))
        {
            dem1=0;dem3=0;
            xuong+=1;
            dem2+=1;
        }
        if ((doc.at(i)==doc.at(i+1)) && (dem3==0))
        {
            dem1=0; dem2=0;
            bang+=1;
            dem3+=1;
        }
    }
    cout << "len: "<< len<<endl;
    cout << "xuong: "<< xuong<<endl;
    cout << "bang: "<< bang << endl;
    return 0;
}