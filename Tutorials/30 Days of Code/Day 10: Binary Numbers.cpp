#include <bits/stdc++.h>

using namespace std;

vector<int> decToBin(int n){
    vector<int> bin;
    int r;
    while(n>0){
        r=n%2;
        n/=2;
        bin.push_back(r);
    }
    return bin;
}

int consecutiveOnes(vector<int>b){
    int cont=1, mayor=1;
    for(int i=b.size()-1; i>=0; i--){
        if(b[i]==1 && b[i-1]==1 && i>0)
            cont++;
        else{
            if(cont>mayor)
                mayor=cont;
            cont=1;
        }
    }
    return mayor;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int>bin=decToBin(n);
    cout<<consecutiveOnes(bin);
    return 0;
}

