#include <stdio.h>
#include <Windows.h>
#include <chrono>
#include <string>

// メイン関数
int main() {
	
	// この段階での時間を記録
	std::chrono::steady_clock::time_point time = std::chrono::steady_clock::now();
	
	// 文字列の宣言
	std::string a = (100000, "a");
	
	// 文字列のコピー
	std::string copy = a;

	// 現在時間の取得
	std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now();

	// 前回の記録からの経過時間を取得
	std::chrono::microseconds elapsed =
		std::chrono::duration_cast<std::chrono::microseconds>(now - time);

	// コピー時の経過秒数
	printf("コピー : %d マイクロ秒\n", static_cast<int>(elapsed.count()));

	// この段階での時間を記録させる
	time = std::chrono::steady_clock::now();

	// ムーブで記録
	std::string move = std::move(a);

	// 現在時間の取得
	now = std::chrono::steady_clock::now();

	// 前回の記録からの経過時間を取得
	elapsed =
		std::chrono::duration_cast<std::chrono::microseconds>(now - time);

	// ムーブ時の経過秒数
	printf("ムーブ : %d マイクロ秒\n", static_cast<int>(elapsed.count()));

	// 終了
	return 0;
}