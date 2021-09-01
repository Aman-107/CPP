#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int c=1,z=1,ans;
    int i=0;
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[j]>=a[i])
            {
                c++;
            }
        }
        ans=max(z,c);
        // cout<<a[i];
    }
    cout<<ans<<endl;
    
    return 0;
}