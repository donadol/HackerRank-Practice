#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    int diag1=0,diag2=0, j=arr.size()-1;
    for(int i=0; i<arr.size(); i++)
        diag1+=arr[i][i];
    for(int i=0; i<arr.size(); i++, j--)
            diag2+=arr[i][j];
    return abs(diag1-diag2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

