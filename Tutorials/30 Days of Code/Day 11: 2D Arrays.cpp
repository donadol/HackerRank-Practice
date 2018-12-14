#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<vector<int>> arr(6);
  int sum=0, mayor=-70, k;
  for (int i = 0; i < 6; i++) {
      arr[i].resize(6);

      for (int j = 0; j < 6; j++) {
          cin >> arr[i][j];
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      k=0;
      sum=0;
      while(k<3){
        sum+=arr[i][j+k];
        sum+=arr[i+2][j+k];
        k++;
      }
      sum+=arr[i+1][j+1];
      if(sum>mayor)
        mayor=sum;
    }
  }
  cout<<mayor;
  return 0;
}
