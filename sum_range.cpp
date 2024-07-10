#include <bits/stdc++.h>
using namespace std;

int sum_range(int a, int b) {
    if (a > b) {
        return 0;
    }

    // sum関数の中でsum関数を呼び出している
    int s = sum_range(a, b - 1);
    return s + b;
}

int main() {
  cout << sum_range(3,5) << endl;  // 3 + 4 + 5 = 12
  cout << sum_range(4,16) << endl; // 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 + 16 = 130
  cout << sum_range(1,2) << endl;  // 1 + 2 = 3
}

// 参考元のsum関数を活用するなら、sum(b)-sum(a-1)でもできるよな(実習としても意味はないけど)