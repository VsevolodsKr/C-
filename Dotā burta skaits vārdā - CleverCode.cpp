#include <iostream>
using namespace std;
int main() {
  string str;
  char burts;
  int skaits=0;
  cin>>str>>burts;
  for(int i=0;i<str.length();i++){
    if(str[i]==burts)
      skaits++;
  }
  cout<<skaits;
  return 0;
}