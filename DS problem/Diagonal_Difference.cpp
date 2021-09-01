#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    
    int left=0,right=0,diff;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                left+=a[i][j];
            }
        }
    }
    // cout<<left<<endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>=0;)
        {
            right+=a[i][j];
            break;
        }
    }
    // cout<<right;
    diff = abs((left-right));
    cout<<diff;
    return 0;
}