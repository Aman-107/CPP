#include<bits/stdc++.h>
using namespace std;

void buble(int arr[],int n);

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    buble(a,n);
    return 0;
}

void buble(int arr[],int n)
{
    int count=1;
    while(count<n)
    {
    for(int i=0;i<(n-count);i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    count++;
    }
    for(int j=0;j<n;j++)
    cout<<arr[j]<<" ";
}