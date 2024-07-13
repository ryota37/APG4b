#include <bits/stdc++.h>
using namespace std;


vector<int> reverse_sub(vector<int> int_array, vector<int> &reversed_array) {
    if (int_array.size() == 0) {
        return reversed_array;
    }

    // 末端から値を１つ取り出す
    int last_element = int_array.back();
    // 取り出した値をreversed_arrayの後ろに一つずつ付加
    reversed_array.push_back(last_element);
    // reversed_arrayを返す
    return reverse_sub(vector<int>(int_array.begin(), int_array.end() - 1), reversed_array);
}

vector<int> reverseArray(vector<int> &int_array) {
    
    // ベースケース
    if (int_array.size() <= 1) {
        return int_array;
    }

    // reversed_arrayを宣言
    vector<int> reversed_array;
    reverse_sub(int_array, reversed_array);
    return reversed_array;
}

int main() {

    vector<int> int_array = {1, 2, 3, 4, 5};
    vector<int> reversed_array = reverseArray(int_array);

    for (int i = 0; i < reversed_array.size(); i++) {
        cout << reversed_array[i] << " ";
    }
    cout << endl;
    return 0;
}