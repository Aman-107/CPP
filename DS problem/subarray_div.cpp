#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,d,m;
    cin>>n>>d>>m;
    int a[n];

   for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int sum =0,c=0;

for(int i=0;i<n;i++)
{
    for(int j=i;j<(i+m);j++)
    {
        sum = sum+a[j];
        cout<<sum<<" ";
        if(sum == d)
        c++;
    }
    cout<<endl;
}
cout<<endl;
cout<<c;
}