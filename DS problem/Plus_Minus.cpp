#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    double p=0,ne=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            ne++;
        }
        else if(a[i]==0)
        {
            z++;
        }
    }
    // double r1=p/n;
    // double r2=ne/n;
    // double r3=z/n;
    cout <<setprecision(6) <<(double)p/n<<endl;
    cout <<setprecision(6) <<(double)ne/n<<endl;
    cout <<setprecision(6) <<(double)z/n<<endl;
    return 0;
}