#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];                                    //output error 
    cin.getline(a,n);
    cin.ignore();

    int i = 0,curr=0,maxL=0;
    int start = 0, end = 0;
    while(1)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            if(curr>maxL)
            {
                maxL = curr;
                end = start;
            }
            curr = 0;
            start = i+1;
        }
        else

        curr++;
        if(a[i]=='\0')
        {
            break;
        }
            i++;
    }
    cout<<maxL<<endl;
    for(int i =0;i<end;i++)
    {
        cout<<a[i+end];
    }
    return 0;
}



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char string[100] = "Hello Kurnool";
//     int i, letters = 0, longest = 0;

//     for (i = 0; string[i] != '\0'; i++) {
//         if (string[i] != ' ') {
//             letters++;
//             if (letters > longest) {
//                 longest = letters;
//             }
//         } else {
//             letters = 0;
//         }
//     }
    
//     printf("longest : %d\n", longest);

//     return 0;
// }