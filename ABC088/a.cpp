#include <iostream>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  cin >> a;
  if (n % 500 <= a) cout << "Yes";
  else cout << "No";
}
