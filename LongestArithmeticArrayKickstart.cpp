#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d=arr[1]-arr[0];
    int ans=2;
    int maxa=INT_MIN;
    for(int j=2;j<n;j++){
        if(arr[j-1]-arr[j-2]==arr[j]-arr[j-1]){
            ans++;
            maxa=max(ans,maxa);
        }
        else{
            ans=2;
            maxa=max(ans,maxa);
        }
    }
    cout<<maxa;

    return 0;
}
