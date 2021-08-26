#include<bits/stdc++.h>
using namespace std;

int serc(int arr[],int n,int key);

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<serc(arr,a,k)<<endl;
    return 0;
}

int serc(int arr[],int n,int key) 
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}