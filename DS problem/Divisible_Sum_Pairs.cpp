#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum = 0,r = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=(i+1);j<n;j++)
        {
        sum=a[i]+a[j];
            // cout<<sum <<" ";
        if(sum%k == 0)
        {
            r++;
        }}
    }
    cout<<r<<endl;
    return 0;
}