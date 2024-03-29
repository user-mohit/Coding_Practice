#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,0,7,2,0,2,2};
    int n = sizeof(arr) / sizeof(int);

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout << "Number of Record Breaking Days: " << ans << endl;

    return 0;
}