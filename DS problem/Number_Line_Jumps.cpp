#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;

    int d1,d2,d3;
    
    int n = INT_MAX;
    while(n--)
    {
        d1=abs(x2-x1);
    d2=abs((x1+v1)-(x2+v2));
     if(d2>d1)
    {
        cout<<"NO"<<endl;
        break;
    }
    else if(d1>d2)
    {
    d3 = abs(x2-x1);
    if(d3 == 0)
    {
        cout<<"YES"<<endl;
        break;
    }
    else
    {
        x1+=v1;
        x2+=v2;
    }
    }
    }
    return 0;
}