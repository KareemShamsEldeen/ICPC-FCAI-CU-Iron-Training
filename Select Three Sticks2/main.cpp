#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n;
        cin>>n;
        int arr[n];
        int arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        arr2[0]=0;
        int minn=INT_MAX;
        for(int i=1; i<n; i++)
        {
            arr2[i]=arr[i]-arr[i-1];
            if(i>=2)
            {
                minn=min(minn,arr2[i]+arr2[i-1]);
            }
        }
        cout<<minn<<endl;

    }
    return 0;
}
