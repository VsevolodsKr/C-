#include <iostream>
using namespace std;
int main() {
  string str;
  int sk=0;
  cin>>str;
  for(int i=0;i<str.length();i++){
    if(str[i]=='a')
      sk++;
  }
  cout<<sk;
  return 0;
}