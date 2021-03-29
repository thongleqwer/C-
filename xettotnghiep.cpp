#include<iostream>
using namespace std;
float toan,van,anh,tn,xh,kk,tb12,dut,dtn,a;
int main()
{
    cout << "nhap diem thi toan: ";
    cin >> toan;
    cout << "nhap diem thi van: ";
    cin >> van;
    cout << "nhap diem thi anh: ";
    cin >> anh;
    cout <<"nhap diem kk: ";
    cin >> kk;
    if (toan<1){
        cout << "ko dau tot nghiep";
        return 0;
    }
    else{
        if (van<1){
            cout << "ko dau tot nghiep";
            return 0;
        }
        else{
            if (anh<1){
                cout << "ko dau tot nghiep";
                return 0;
            }
            else {
                cout << "ko co diem nao liet"<< endl;
            }
        }
    }
    cout << "tu nhien nhap 1, xa hoi nhap 2"<< endl;
    cin >>a;
    if (a==1)
        {
            cout << "nhap diem tu nhien: ";
            cin >> tn;
            cout << "nhap diem tb lop 12: ";
            cin >> tb12;
            cout << "nhap diem uu tien: ";
            cin >> dut;
            dtn=((((toan+van+anh+tn+kk)/4*7)+(tb12*3))/10)+dut;
            cout << "diem tot nghiep: " << dtn;
        }
    else
    {
        if (a==2)
        {
            cout << "nhap diem xa hoi";
            cin >> xh;
            cout << "nhap diem tb lop 12";
            cin >> tb12;
            cout << "nhap diem uu tien";
            cin >> dut;
            dtn=((((toan+van+anh+xh+kk)/4*7)+(tb12*3))/10)+dut;
            cout << "diem tot nghiep: " << dtn;
        }
    }

}
