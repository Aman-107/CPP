#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b=10000;
    int arr[b] = {0};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        arr[a[i]]++;
    }

    bool flag = true;
    for(int i=0;i<n;i++)
    {
        if(arr[a[i]]>1)
        {
            cout<<i+1<<endl;
            flag = false;
            break;
        }
    }
    if(flag) cout<<"-1"<<endl;
    return 0;
}