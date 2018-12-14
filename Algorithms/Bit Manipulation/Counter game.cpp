#include <bits/stdc++.h>

using namespace std;
//Previous power of two
unsigned long long previous_power_of_two(unsigned long long x ) {
    if (x == 0) {
        return 0;
    }
    // x--; Uncomment this, if you want a strictly less than 'x' result.
    x |= (x >> 1);
    x |= (x >> 2);
    x |= (x >> 4);
    x |= (x >> 8);
    x |= (x >> 16);
    return x - (x >> 1);
}
//  Function to check if x is power of 2 
bool isPowerOfTwo(unsigned long long x) 
{ 
     // First x in the below expression is for the case when x is 0  
     return x && (!(x & (x - 1))); 
}
// Complete the counterGame function below. 0-Louise 1-Richard
string counterGame(unsigned long long n, int turn) {
    if(n==1)
        return turn==1 ? "Richard" : "Louise";
    else{
        if(isPowerOfTwo(n))
            return counterGame(n/2, turn==1 ? 0:1);
        else{
            return counterGame(n-previous_power_of_two(n), turn==1 ? 0:1);
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n, 1);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
