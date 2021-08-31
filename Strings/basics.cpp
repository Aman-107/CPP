#include<bits/stdc++.h>
using namespace std;

int main()
{
    //  string a,c;
    // cin>>a;                                 // will take 1 string at a time i.e not the full sentence.
    // cout<<a<<endl;

    // string b(5,'n');
    // cout<<b<<endl;
    
    // c = "Aman Kumar Maurya";
    // cout<<c<<endl;

    // string d;
    // getline(cin,d);                           // giving input with white spaces
    // cout<<d<<endl;

    // string s1,s2;
    // cin>>s1>>s2;                            //s1.append(s2)  means adding 2 in 1
    // if(!s2.compare(s1))                          // methode 1--> s2.compare(s1)==0     method 2--> !s2.compare(s1) 
    // cout<<"Eqaul"<<endl;                         // if output is +ve then s2 is greater and -ve then s1 is greater and 0 means both are eqal 
    // cout<<s2.compare(s1)<<endl;                  // comparision by alphabetical
    
    string s1;
    cin>>s1;
    cout<<s1<<endl;
    int k = s1.size();                                // for finding the size of the string

    // s1.clear();                                    // to clear the string stored

    // if(s1.empty())                                  //fun to check string is empty or not
    // cout<<"Empty"<<endl;


    // if(!s1.empty())                                  //fun to check string is not empty
    // cout<<"Empty"<<endl;

    // s1.erase(3,2);                                    // to erase from-->3   how many digits--> 2
    // cout<<s1<<endl;

    // int k=s1.find("ma");                             // finds the substring or elemnt is present in the string 
    // cout<<k<<endl;                                   // returns the 1 position where it finds the elementm
    
    // s1.insert(k,"_Maurya");                          // for inserting the string from--> k   what string--> "_Maurya"
    // cout<<s1<<endl;

    // string s=s1.substr(5,k);                         // for taking out the substring from the given string
    // cout<<s<<endl;

    // string b = "107";
    // int x = stoi(b);                                   // stoi --> string to integer for further calcularion if string is in integer
    // cout<<(x+2)<<endl;

    // int x = 109;
    // string b = to_string(x);                             // conversion of string from integer  
    // cout<<(b) + "2" <<endl;                              // string addition is done and note the " "  
    
    // string z = "Aman_Kumar_Maurya";
    // sort(z.begin(),z.end());                            // sorting 1 comes capital letters then special symbols and then small letters
    // cout<<z<<endl;


    string z = "AMAN";
    reverse(z.begin(),z.end());                           // reversing of string and can also be used in integer without using loop
    cout<<z<<endl;
    return 0;
}