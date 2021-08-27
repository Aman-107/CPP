#include<bits/stdc++.h>
using namespace std;

void solve(char a[],int n)
{
  bool check =1;

  for(int i=0;i<n;i++)
  {
      if(a[i] != a[n-1-i])
      {
          check =0;
          break;
      }
  }
  if(check == true)
      cout<<"Its a Palindrome"<<endl;
  else
      cout<<"Not Palindrome"<<endl;
}

int main()
{
    int n;
    cin>>n;
    char a[n+1];
   cin>>a;
   solve(a,n);
    return 0;
}