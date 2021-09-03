// // #include<bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin>>n;
// //         int a[n];
// //         int d;
// //         cin>>d;
// //         for(int i=0;i<n;i++)
// //         {
// //             cin>>a[i];
// //         }
// //         for(int j=d;j<n;j++)
// //         {
// //             cout<<a[j]<<" ";
// //         }
// //         for(int k=0;k<d;k++)
// //         {
// //             cout<<a[k]<<" ";
// //         }
// //     return 0;
// // }

// //  #include<bits/stdc++.h>
// //   using namespace std;
// //  int main()
// //  {
// //      int a,b,sub,x;
// //      cin>>a>>b;
// //      sub=a-b;
// //      if(sub>=0)
// //      x=sub;
// //      else
// //      x=-(sub);
// //      cout<<x<<" ";
// //      return 0;
// //  }





// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     private:
//   int age,standard;
//   string first_name,last_name;
  
//   public:
//   void set_age(int a){
//         age=a;
//     }
//     int get_age(){
//         return age;
//     }

//       void set_first_name(string c){
//         first_name=c;
//     }
//     int get_first_name(){
//         return first_name;
//     }

//       void set_last_name(string d){
//         last_name=d;
//     }
//     int get_last_name(){
//         return last_name;
//     }
    
//     void set_standard(int b) {
//         standard=b;
//     }
//     int get_standard(){
//         return standard;
//     }
     
//     string to_string() {
//         stringstream ss;
//         ss<<a<<","<<first_name<<","<<last_name<<","<<standard;
//     }
// };
// /*
// Enter code for class Student here.
// Read statement for specification.
// */
// int main() {
//     int age, standard;
//     string first_name, last_name;
    
//     cin >> age >> first_name >> last_name >> standard;
    
//     Student st;
//     st.set_age(age);
//     st.set_standard(standard);
//     st.set_first_name(first_name);
//     st.set_last_name(last_name);
    
//     cout << st.get_age() << "\n";
//     cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
//     cout << st.get_standard() << "\n";
//     cout << "\n";
//     cout << st.to_string();
    
//     return 0;
// }
#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int a) 
        {
            age = a;
        }
        int get_age() 
        {
            return age;
        }

        void set_first_name(string fn) 
        {
            first_name = fn;
        }
        string get_first_name() 
        {
            return first_name;
        }

        void set_last_name(string ln) 
        {
            last_name = ln;
        }
        string get_last_name() 
        {
            return last_name;
        }

        void set_standard(int s) 
        {
            standard = s;
        }
        int get_standard() 
        {
            return standard;
        }

        string to_string() 
        {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}