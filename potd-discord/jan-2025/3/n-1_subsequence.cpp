#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
  int T;
  cin>>T;

  while(T--){
    int n;
    cin>>n;

    int nz=0,no=0;
    int x;
    for(int i=0;i<n;i++){
      cin>>x;
      if(x==0) nz++;
      else if(x==1) no++;
    }

    cout<< (long long)( no * pow(2,nz))<<endl;
  }
  return 0;
}
