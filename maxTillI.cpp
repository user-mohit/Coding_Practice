#include<iostream>
using namespace std;

int main() {
    int arr[5] = {0,-2,3,-5,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"The value of n: "<<n<<endl;
    int mx = -1999999;

    cout<<"The result will be : "<<endl;
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<endl;
    }

    return 0;
}