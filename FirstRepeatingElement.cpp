#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6 + 2;
    int id[N];
    for (int i = 0; i < n; i++)
    {
        id[i] = -1;
    }
    int mini = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        if (id[arr[j]] != -1)
            mini = min(mini, id[arr[j]]);
        else
            id[arr[j]] = j;
    }
    if(mini==INT_MAX){
        mini=-1;
    }
    cout << mini;
    return 0;
}
