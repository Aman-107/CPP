#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(v1[i]>v1[i-1] && v1[i]>v1[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}