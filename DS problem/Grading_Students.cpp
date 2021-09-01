#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        if(g>=38 && (g%5)>=3)
        {
            g=g+(5-(g%5));
        }
        else if(g>=38 && (g%5)<3)
        {
            g=g+0;
        }
        else if(g<38)
        {
            g=g+0;
        }
        
        cout<<g<<endl;
    }
    return 0;
    
}