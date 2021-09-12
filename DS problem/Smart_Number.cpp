#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c =0;
        for(int i=1;i<=n;i++)
        {
            if(n%i == 0)
            {
                c++;
            }
        }
        if(c%2 != 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
    return 0;
}