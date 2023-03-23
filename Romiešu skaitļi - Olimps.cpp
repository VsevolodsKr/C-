#include<fstream>
using namespace std;
int main(){
  string str;
  int sum=0;
  char c;
  ifstream ievadfile;
  ievadfile.open("romiesi.dat");
  ievadfile>>str;
  ievadfile.close();
  ofstream izvadfile;
  izvadfile.open("romiesi.rez");
  for(int j=0;j<str.length();j++){
    c=str[j];
    switch(c){
      case'I':
        if(str[j+1]!='V' && str[j+1]!='X')
          sum+=1;
        else if(str[j+1]=='V'){
          sum+=4;
          j++;
        }else{
          sum+=9;
          j++;
        }
      break;
      case'V':
          sum+=5;
      break;
      case'X':
        if(str[j+1]!='L' && str[j+1]!='C')
          sum+=10;
        else if(str[j+1]=='L'){
          sum+=40;
          j++;
        }else{
          sum+=90;
          j++;
        }
      break;
      case'L':
          sum+=50;
      break;
      case'C':
        if(str[j+1]!='D' && str[j+1]!='M')
          sum+=100;
        else if(str[j+1]=='D'){
          sum+=400;
          j++;
        }else{
          sum+=900;
          j++;
        }
      break;
      case'D':
          sum+=500;
      break;
      case'M':
          sum+=1000;
      break;
    }
}
  izvadfile<<sum;
  izvadfile.close();
  return 0;
 }
 