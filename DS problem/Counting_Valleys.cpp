// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

// /*
//  * Complete the 'countingValleys' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts following parameters:
//  *  1. INTEGER steps
//  *  2. STRING path
//  */

// int countingValleys(int steps, string path) {
    

// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string steps_temp;
//     getline(cin, steps_temp);

//     int steps = stoi(ltrim(rtrim(steps_temp)));

//     string path;
//     getline(cin, path);

//     int result = countingValleys(steps, path);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int countingValleys(int n, string s) {
    int level = 0, valley = 0;

    for(int i=0;i<n;i++) {
        if(s[i] == 'U') {
            level++;
        }else{
            level--;
        }

        if(level == 0 && s[i] == 'U') {
            valley++;
        }
    }

    return valley;
}

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    cout << countingValleys(n, s);
    return 0;
}
