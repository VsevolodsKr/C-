#include <iostream>
#include<cmath>
using namespace std;

long summa(int x) {
  long sum = 0;
  for (int i = 1;pow(i,2)<= x;i++) {
    if (x % i == 0) {
      sum += i;
      sum += x/i;
    }
  }
  return sum;
}

int main() {
  int n, m;
  long sum = 0;
  cin >> n >> m;
  for (int i = n; i <= m; i++) {
    sum += summa(i);
  }
  cout << sum;
  return 0;
}