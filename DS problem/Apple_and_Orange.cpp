#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,n,m;
    cin>>s>>t>>a>>b>>n>>m;
    int apples[n] , oranges[m];
    
    int apl =0 , org  = 0;

for(int i = 0;i<n;i++)
{
    cin>>apples[i];
    if((apples[i]+a) >= s && ((apples[i])+a) <= t )   apl++;
}

for(int i = 0;i<m;i++)
{
    cin>>oranges[i];
     if((oranges[i]+b) >= s && ((oranges[i])+b) <= t )   org++;
}
cout<<apl<<endl<<org;
    return 0;
}