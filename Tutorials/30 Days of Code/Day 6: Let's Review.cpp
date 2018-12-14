#include<bits/stdc++.h>
using namespace std;


int main() {
  int t;
  string s;
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  cin>>t;
  for(int n=0; n<t; n++){
    cin>>s;
    for(int i=0; i<s.length(); i+=2){
      cout<<s[i];
    }
    cout<<" ";
    for(int i=1; i<s.length(); i+=2){
      cout<<s[i];
    }
    cout<<endl;
  }
  return 0;
}

