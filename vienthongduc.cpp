#include <iostream>
using namespace std;


int main(){
    int dk[2];
    for (int i=0; i<2; i++){
        cin >> dk[i];
    }
    
    int low = dk[1];
    int big = dk[0];
    int day[big];
    for (int i=0; i<big;i++){
        cin >> day[i];
    }
    
    
    //thuc hien tinh toan lai
    int bien=0, tong=0, dem=0;
    float chia, kq=(float)0;
    for (int i=0; i<big-low+1; i++){
//        cout << "Bien i: " << i << endl;
        for (int k=i; k<big; k++){
            tong += day[k];
//            cout << tong << endl;
            dem++;
//            cout << "He so chia: " << dem << endl;
            chia = (float)tong/dem;
//            cout << "Phep chia: " << chia << endl;
            if (dem >= low && kq < chia){
                kq = chia;
            }
        }
        tong = 0;
        dem = 0;
        chia = 1;
        bien++;
    }
    cout << kq << endl;
}