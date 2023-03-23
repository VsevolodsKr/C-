#include <iostream>
using namespace std;
int main() {
  string str;
  char burts1, burts2;
  int poz1=0,poz2=0,parb1=0,parb2=0;
  cin>>str>>burts1>>burts2;
  for(int i=0;i<str.length();i++){
    if(str[i]==burts1 || str[i]==burts2){
      cout<<str[i];
      break;
  }
 }
  return 0;
}