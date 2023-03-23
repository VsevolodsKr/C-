#include <iostream>
using namespace std;
int main() {
int sk=1, MN, N, M, K;
  cin>>N>>M>>K;
   MN = M* N; 
  if(M>N) {M=N; N=M;}
    if (K==MN) sk=0;
    else if ((K % M == 0) || (K % N == 0)) sk=1;
       else{
        sk=3;
        for (int i=1; (i<M)&&(sk==3); i++ ) if ( (K%i==0) && (K < N*i) ) sk=2;
        K = MN - K;
        for (int i=1; (i<M)&&(sk==3); i++ ) if ( (K%i==0) && (K < N*i) ) sk=2;              
    }
  cout<<sk;
  return 0;
}