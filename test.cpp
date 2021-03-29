#include <iostream>
using namespace std;
// // int sosanh(int a, int b)
// // {
// //     if (a>b)
// //     return a;
// //     if (b>a)
// //     return b;
// //     else
// //     return a;
// // }
// // int main()
// // {
// //     int a,b;
// //     cout << "nhap a,b: "<< endl;
// //     cin  a, int>>a>>b;
// //     cout << "so lon nhat la: "<< sosanh(a,b);
// // }

// //thuong
// // float thuong(int a, int b)
// // {
// //     return a/b;
// // }
// // int main()
// // {   
// //     int a,b;
// //     cin >> a>>b;
// //     cout <<"thuong: "<< thuong(a,b);
// // }

giaithua
int giaithua(int a)
{
    int s=1;
    for (int i=1; i<=a; i++)
    {
        s=s*i;
    }
    return s;
}
int main()
{   
    int a;
    cin >> a;
    cout <<"giai thua cua "<< a<< " la "<< giaithua(a);
}

// songuyento
long snt(long a)
{
    int b;
    for (long i=2; i<=a/2; i++)
    {
        if (a%i != 0)
        {
            b=1;
        }
        else
        {
            b=0;
            break;
        }
    }
    return b;
}
int main()
{
    cout <<"nhap so: ";
    int a;
    cin >>a;
    if (a==2)
    {
        cout << "so nguyen to";
        return 0;
    }
    if (snt(a)==0)
        cout << "ko nguyen to";
    else
    cout << "so nguyen to";
    return 0;
}
// int main()
// {
//     long a,p,max;
//     cin >> a;
//     for (p=2; p<a; p++)
//     {
//         if (snt(p)==1)
//         cout << p;
//         max=p;
//         cout << max;
//     }
//     cout << max;
//     return 0;
// }


// int g(int &u)
// {
//     u++;
//     return u +1;
// }
// int main()
// {
//     int b=10;
//     int a=0;
//     cout << b<< endl;
//     a=g(b);
//     cout << b;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string tu;
//     string e="hello adf";
//     tu += e;
//     cout << tu;
// }