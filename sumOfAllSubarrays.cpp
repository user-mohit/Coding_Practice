#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 0, 0, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int sum = 0;
    int subArrays = n*(n+1)/2;
    cout<<"Number of subarrays: "<<subArrays<<endl;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << "The sum of the subarray: " << sum << endl;
        }
    }

    return 0;
}