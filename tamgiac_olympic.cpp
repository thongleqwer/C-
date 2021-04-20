#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>diem;
    int sodiem, dem=0;
    cout << "nhap so diem"; cin >> sodiem;
    for (int i=0; i<sodiem*2; i++)
    {
        int q; cin >> q;
        diem.push_back(q);
    }
    for (int i=0; i<diem.size(); i+=2)
    {   
        for ( int k=0; k<diem.size(); k+=2)
        {
            if (i==k)
            {
                continue;
            }
            if (diem.at(i)==diem.at(k))
            {
                    for (int o=1; o<diem.size(); o+=2)
                    {
                        int u=i+1;
                        if (u==o)
                        {
                            continue;
                        }
                        if (diem.at(u)==diem.at(o))
                        {
                            dem++;
                        }
                    }
            }
        }
    }
    cout <<"dmm"<< dem;
}