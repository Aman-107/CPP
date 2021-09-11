#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr = 0;
    int maxi = -1;
    for(int i=0;i<n;i++)
    {
        curr+=a[i];
        if(curr<0)
        {
            curr = 0;
        }
        maxi = max(maxi,curr);
    }
    cout<<maxi<<endl;
    return 0;
}