#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int x;
  int y;

  cout << "enter modulo: ";
  cin >> n;

  cout << "enter numbers: ";
  cin >> x;
  cin >> y;

  int k = (x + y)%n;

  int M;

  cout << k << " ";

  return 0;
}
