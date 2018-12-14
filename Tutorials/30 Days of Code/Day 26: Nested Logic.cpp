#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int d1,d2,m1,m2,y1,y2,f1,f2,fine;
  cin>>d1>>m1>>y1;
  cin>>d2>>m2>>y2;
  f1=(y1*100+m1)*100+d1;
  f2=(y2*100+m2)*100+d2;
  if(f1<=f2)
    fine=0;
  else{
    if(y1==y2){
      if(m1==m2)
        fine=15*(d1-d2);
      else
        fine=500*(m1-m2);
    }
    else
      fine=10000;
  }
  cout<<fine;
  return 0;
}
