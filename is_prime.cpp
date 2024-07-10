#include <bits/stdc++.h>
using namespace std;

bool is_divisible (int n, int divisor) {
    if (divisor * divisor > n) {
        return false;
    } else if (n % divisor == 0) {
        return true;
    } else {
        return is_divisible(n, divisor + 1);
    }
}

string is_prime(int n) {
    // ベースケース
    if (n == 1) {
        return "No";
    } else if (n == 2) {
        return "Yes";
    } else {
    // 再帰ステップ
        if (is_divisible(n, 2)) {
            return "No";
        } else {
            return "Yes";
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << is_prime(n);
}