#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long n,count=0,sum=0,t=0;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    long long x;
    cin>>x;
    count+=((x/sum)*n);
    cout<<"count==="<<count<<endl;
     t += ((x/sum)*sum);
    cout<<" t==="<< t<<endl;

    for(int i=0; i<n; i++)
    {
        if(t>x)
        {
            break;
        }
        count++;
        t+=arr[i];
    }
    cout<<count;

    return 0;
}
