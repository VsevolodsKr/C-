#include <fstream>
using namespace std;
int main(){
    int sk1;
    ifstream ievadfile;
    ievadfile.open("reiz.in");
    ievadfile>>sk1;
    ievadfile.close();
    ofstream izvadfile;
    izvadfile.open("reiz.out");
    izvadfile<<2*sk1;
    izvadfile.close();
  return 0;
}