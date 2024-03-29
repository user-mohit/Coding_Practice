#include<iostream>
using namespace std;

int main() {

    int arr[] = {10,7,4,6,8,10,12,14,16,11};
    int n = sizeof(arr)/sizeof(int);
    int ans = 2;
    int curr = 2;
    int pd = arr[1] - arr[0];
    int i = 2;
    while(i<n)
    {
        if(pd == arr[i]-arr[i-1]){
            curr++;
        }
        else {
            curr = 2;
            pd = arr[i]-arr[i-1];
        }
        ans = max(ans,curr);
        i++;
    }

    cout<<"The length of Longest Arithmatic Subarray: "<<ans<<endl;
    return 0;
}