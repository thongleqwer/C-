#include <iostream>
using namespace std;

int count(int arr[], int size){
    bool check[size];

    for (int i=0; i<size; i++){
        check[i] = 0;
    }
    for (int i=0; i<size; i++){
        if (check[i] == 1){
            cout << "OK ";
            continue;
        }

        for (int j=i+1; j<size; j++)
            if (arr[i] == arr[j]){
                check[j] = 1;
            }

        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int frequency(int arr[], int size){
    sort(arr, arr+size);
    int t=0, r=0;
    bool check[size];

    for (int i=0; i<size; i++){
        if (check[i] == 1){
            continue;
        }

        for (int j=i+1; j<size; j++)
            if (arr[i] == arr[j]){
                t++;
                check[j] = 1;
            }

        if (r<t)
        {
            r=t;
        }
    }
    cout << r;
    cout << endl;
    return 0;

}

int main(){
    int a;
    cin >> a;
    int mang[a];
    for(int i=0; i<a; i++){
        cin >> mang[i];
    }
    frequency(mang, a);
    count(mang, a);
}