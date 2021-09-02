#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v1;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }

        int sum=0,s=0,l=0;

    for(int i=0;i<n;i++)
    {
        sum+=v1[i];
        if(sum>k)
        {
            sum-=v1[i];
            if(sum==k)
            {
                s=
                cout<<i<<" "<<
            }
        }
    }
    return 0;
}