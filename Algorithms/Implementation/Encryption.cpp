#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
void encryption(string s) {
    int r = round(sqrt(s.length()));
    int c;
    if (r >= sqrt(s.length())) 
      c = r; 
    else c = r + 1;
    for(int j=0;j<c;++j) {
        for(int i=j; i<s.length();i+=c)
            cout << s[i];
        cout << ' ';
    } 
}

int main()
{
    string s;
    getline(cin, s);
    encryption(s);

    return 0;
}

