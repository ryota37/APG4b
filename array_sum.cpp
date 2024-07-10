#include <bits/stdc++.h>
using namespace std;

int array_sum(vector<int> array) {

    if (array.size() == 0) {
        return 0;
    }

    int s = array_sum(vector<int>(array.begin(), array.end() - 1));
    return s + array.back();

}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << array_sum(array) << endl;
    return 0;
}
