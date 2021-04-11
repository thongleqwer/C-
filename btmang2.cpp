#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// void NhapMaTran(int a[][100], int m, int n)
// {
//    for(int i = 0; i < m; i++)
//       for(int j = 0; j < n; j++)
//       {
//         cout<<"A["<<i<<"]["<<j<<"] = ";
//         cin>>a[i][j];
//       }
// }
// void XuatMaTran(int a[][100], int m, int n)
// {
//    for(int i = 0; i < m; i++)
//    {
//       for(int j = 0; j < n; j++)
//          cout<<a[i][j];
//       cout<<endl;
//    }
// }
// int main(){
//     int a[100][100];
//     int m,n;
//     cout<<"nhap so hang n = "; 
//     cin>>n;
//     cout<<"nhap so cot m = "; 
//     cin>>m;
//     cout<<"nhap vao ma tran:"<<endl;
//     NhapMaTran(a, m , n);
//     XuatMaTran(a, m, n);
// }

//sochannhohon2004
// int main()
// {
//     int a,c;
//     cout<<"nhap so hang: ";
//     cin >> a;
//     cout << "nhap so cot: ";
//     cin >>c;
//     int b[a][c];
//     for (int i=0; i<a; i++)
//     {
//         for (int p=0; p<c; p++)
//         {
//             cin >> b[i][p];
//         }
//     }
//     for (int p=0; p<a; p++)
//     {
//         for (int i=0; i<a; i++)
//         if ((b[p][i]%2==0) && (b[p][i]<2004))
//         {
//             cout << "co so chan nho hon 2004"<< endl;
//             return 0;
//         }
//     }
//     cout << "ko co so chan nho hon 2004";
//     return 0;
// }