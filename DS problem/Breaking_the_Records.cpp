#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;   cin>>n; int  h = 0 , w = 0 , a = INT_MAX , b = INT_MIN;

    
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    if(x<a)
    {
        h++;
        a=x;
    }
    if(x>b)
    {
        w++;
        b=x;
    }
    }
    
    cout<<w-1<<" "<<h-1;

    return 0;
}