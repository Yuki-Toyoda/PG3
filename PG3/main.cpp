#include <stdio.h>
#include <Windows.h>
#include <functional>
#include <stdlib.h>
#include <time.h>

/// <summary>
///	引数で指定した秒数がたった後、引数で指定した関数を実行する
/// </summary>
/// <param name="second">待機秒数</param>
/// <param name="func">関数</param>
void SetTimeOut(int second, std::function<void()> func) {
	// 引数で指定した秒数分待機
	Sleep(second * 1000);

	// 引数の関数を実行
	func();
}

// メイン関数
int main() {

	// 乱数初期化
	srand((unsigned int)time(nullptr));

	int selectedValue;

	std::function<void()> displayResult = [=]() {
		// 結果は
		printf("\n結果は ");

		// ランダムな値を取得し偶数か奇数か求める
		int randomValue = (rand() % 6) + 1;
		printf(" サイコロの目 : %d   ", randomValue);
		// 取得した値と入力値が同じなら
		if (randomValue % 2 == selectedValue)
			printf("正解\n\n");
		else
			printf("不正解\n\n");
	};

	while (true)
	{
		printf("0(丁) か 1(半)を入力してください : ");
		// 入力受付
		scanf_s("%d", &selectedValue);

		if (selectedValue < 2) {
			SetTimeOut(3, displayResult);
		}
		else {
			// 0 ~ 1の値を入力するよう促す
			printf("0 ~ 1の値を入力してください\n\n");
		}
	}

	return 0;
}