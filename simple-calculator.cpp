#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;

  cout << "Operator Option : \n 1) Addition \n 2) Substraction \n 3) "
          "Multiplication \n 4) Division \n";
  cout << "What do you want to do : ";
  cin >> x;

  float a, b, res;

  if (x == 1) {
    cout << "\n=== ADDITION ===\n First number : ";
    cin >> a;
    cout << " Second number : ";
    cin >> b;

    res = a + b;

  } else if (x == 2) {
    cout << "\n=== SUBSTRACTION ===\n First number : ";
    cin >> a;
    cout << " Second number : ";
    cin >> b;

    res = a - b;
  
  } else {
    cout << "\noops currently we didn't have that option :((\n ";
  }

  cout << "\n=== Result : " << res << " ===\n" << endl;

  return 0;
}
