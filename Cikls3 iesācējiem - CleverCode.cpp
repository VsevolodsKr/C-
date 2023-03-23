#include <iostream>
using namespace std;
int main() {
  int n,skaitlis,sk=0,m;
  cin>>n>>skaitlis;
  for(int i=0;i<n;i++){
    cin>>m;
    if(m==skaitlis)
      sk++;
  }
  cout<<sk;
  return 0;
}