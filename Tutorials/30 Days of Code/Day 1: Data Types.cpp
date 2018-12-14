#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int l;
    double m;
    string n;
    // Read and save an integer, double, and String to your variables.
    cin>>l;
    cin>>m;
    cin.ignore();
    getline(cin,n);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+l<<endl;
    // Print the sum of the double variables on a new line.
    d+=m;
    cout << fixed << setprecision(1) << d << endl;
    // Concatenate and print the String variables on a new line
    cout<<s<<n<<endl;
    // The 's' variable above should be printed first.

    return 0;
}
