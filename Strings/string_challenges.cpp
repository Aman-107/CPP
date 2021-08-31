#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int fre[26];
    for(int i=0;i<26;i++)
    {
        fre[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        fre[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF=0;
    for(int i=0;i<26;i++)
    {
        if(fre[i]>maxF)
        {
            maxF = fre[i];
            ans = i+'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    // transform(s.begin(),s.end(),s.begin(), :: toupper);
    // cout<<s<<endl;;   
    // transform(s.begin() , s.end() , s.begin(), :: tolower);
    // cout<<s<<endl;
    // // cout<<'a'-'A'<<endl;
    return 0;
}