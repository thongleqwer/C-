#include<iostream>
using namespace std;

// // uocchunglonnhat
// int uoc(int a, int b)
// {
//     int c;
//     for (int i=1; i<=a; i++)
//     {
//         if ((a%i==0) && (b%i==0))
//         {
//             c=i;
//         }
//     }
//     return c;
// }
// int main()
// {
//     int a,b;
//     cout << "nhap a: ";
//     cin >> a;
//     cout << "nhap b: ";
//     cin >> b;
//     cout <<"uoc chung lon nhat cua "<<a<<" va "<< b<< " la "<< uoc(a,b);
// }

//so nguyen to
// long snt(long a)
// {
//     int b;
//     for (long i=2; i<=a/2; i++)
//     {
//         if (a%i != 0)
//         {
//             b=1;
//         }
//         else
//         {
//             b=0;
//             break;
//         }
//     }
//     return b;
// }
// int main()
// {
//     cout <<"nhap so: ";
//     int a;
//     cin >>a;
//     if (a==2)
//     {
//         cout << "so nguyen to";
//         return 0;
//     }
//     if (snt(a)==0)
//         cout << "ko nguyen to";
//     else
//     cout << "so nguyen to";
//     return 0;
// }

// lietke snt
// int main()
// {
//     int a;
//     cout << " nhap so :";
//     cin >> a;
//     while (a<2)
//     {
//         cout << "dell co so nguyen to nao het"<< endl;
//         cout << "nhap lai: ";
//         cin >>a;
//     }
//     if (a==2)
//     cout << " 2 ";
//     else
//     cout << "2"<<" 3";
//     for (int i=2; i<=a;i++)
//     {
//         if (snt(i)==1)
//         {
//             cout <<" "<< i;
//         }
//     }
//     return 0;
// }

//dientich
// float stron(float a)
// {
//     float pi=3.14;
//     float s;
//     s=1;
//     s=a*a*pi;
//     return s;
// }
// float stamgiac(float a, float b)
// {
//     float s;
//     s=1;
//     s=a*b/2;
//     return s;
// }
// float shcn(float a, float b)
// {
//     float s;
//     s=1;
//     s=a*b;
//     return s;
// }
// int main()
// {
//     cout << "nhap 1 de tinh dien tich hinh tron, nhap 2 de tinh dien tich hcn, nhap 3 de tinh dien tich tam giac: ";
//     int i;
//     cin >> i;
//     int a,b;
//     if (i==1)
//     {
//         cout << "nhap ban kinh: ";
//         cin >>a;
//         cout << "dien tich hinh tron ban kinh "<<a<<" la "<<stron(a);
//     }
//     if (i==2)
//     {
//         cout << "nhap canh 1: ";
//         cin >> a;
//         cout << "nhap canh 2: ";
//         cin >> b;
//         cout <<"dien tich hcn co canh la "<<a<<" va "<<b<<" la "<<shcn(a,b);
//     }
//     if (i==3)
//     {
//         cout <<"nhap chieu cao: ";
//         cin >> a;
//         cout <<"nhap day: ";
//         cin >>b;
//         cout <<"dien tich cua tam giac co chieu cao "<<a<<" va day "<<b<<" la "<<stamgiac(a,b);
//     }
//     return 0;
// }

//boi chung nho nhat
// int bcnn(int a, int b)
// {
//     int i;
//     for (i=1; i<=(a*b);i++)
//     {
//         if ((i%a==0) && (i%b==0))
//         return i;
//     }
// }
// int main()
// {
//     int a,b;
//     cout << "nhap a: ";
//     cin >> a;
//     cout << "nhap b: ";
//     cin >>b;
//     cout << "boi chung nho nhat cua "<<a<<" va "<<b<< " la "<< bcnn(a,b);
//     return 0;
// }

//sochinhphuong
// int scp(int a)
// {
//     int i=1;
//     while (i*i<=a)
//     {
//         if (i*i==a)
//         {
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     for (int p=1; p<=a;p++)
//     {
//         if (scp(p)==0)
//         cout << p;
//     }
//     return 0;
// }

//cong, tru, nhan,chia hai so
// int tong(int a, int b)
// {
//     return a+b;
// }
// int hieu(int a, int b)
// {
//     return a-b;
// }
// int tich(int a, int b)
// {
//     return a*b;
// }
// int thuong(int a, int b)
// {
//     return a/b;
// }
// int main()
// {
//     int a,b;
//     cin >> a >> b;
//     cout <<"tong: "<< tong(a,b)<< endl;
//     cout <<"hieu: "<< hieu(a,b)<< endl;
//     cout <<"tich: "<< tich(a,b)<< endl;
//     cout <<"thuong: "<< thuong(a,b)<< endl;
//     return 0;
// }

//giaithua
// int giaithua(int a)
// {
//     int s=1;
//     for (int i=1; i<=a; i++)
//     {
//         s=s*i;
//     }
//     return s;
// }
// int main()
// {   
//     int a;
//     cin >> a;
//     cout <<"giai thua cua "<< a<< " la "<< giaithua(a);
// }

//sohoanthien
// int main()
// {
//     int a,b,s;
//     cin >> a;
//     s=0;
//     for (int i=1;i<a; i++)
//     {
//         if (a%i==0){
//             b=i;
//             s+=i;
//         }
//         else
//         {
//             s+=0;
//         }
//     }
//     if (s==a)
//     {
//         cout<< "so hoan thien";
//     }
//     else{
//         cout << "so ko hoan thien";
//     }
// }