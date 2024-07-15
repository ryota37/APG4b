#include <bits/stdc++.h>
using namespace std;

// x番の組織が親組織に提出する枚数を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(vector<vector<int>> &children, int x) {
	// (ここに追記して再帰関数を実装する)
    // 返り値：回答となる数値を格納した配列(値:報告書の枚数, インデックス番号:組織の番号)
    // ベースケース：親組織がない場合
    // 再帰ステップ：組織番号が大きいものから、上に遡るように計算していく
}

// pの中身は-1 0 0 1 1 4 in case1

// childrenの中身in case1
// {{1, 2}, {3, 4}, {}, {}, {5}, {}}
// Parent 0: 1 2 
// Parent 1: 3 4 
// Parent 2: 
// Parent 3: 
// Parent 4: 5 
// Parent 5: 

// これ以降の行は変更しなくてよい

int main() {
	int N;
	cin >> N;

	vector<int> p(N);  // 各組織の親組織を示す配列
	p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
	for (int i = 1; i < N; i++) {
		cin >> p.at(i);
	}
	// 組織の関係から2次元配列を作る
	vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
	for (int i = 1; i < N; i++) {
		int parent = p.at(i);  // i番の親組織の番号
		children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
	}

	// 各組織について、答えを出力
	for (int i = 0; i < N; i++) {
		cout << count_report_num(children, i) << endl;
	}


}
