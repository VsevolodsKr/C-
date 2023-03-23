#include <iostream>
using namespace std;
int main() {
  int skaits;
  string vards, rezultats;
  char burts;
  cin>>skaits;
  for(int i=0;i<skaits;i++){
    cin>>vards;
    burts = vards[0];
    rezultats += burts;
  }
  cout<<rezultats;
  return 0;
}