#include <stdio.h>
#include <Windows.h>
#include <functional>
#include <stdlib.h>
#include <time.h>

void SetTimeOut(int second, int selectValue, std::function<int()> func) {
	// 結果は
	printf("\n結果は");
	for (int i = 0; i < second; i++) {
		printf(".");
		Sleep(1000);
	}

	// ランダムな値を取得し偶数か奇数か求める
	int randomValue = func();
	printf(" サイコロの目 : %d   ", randomValue);
	// 取得した値と入力値が同じなら
	if (randomValue % 2 == selectValue)
		printf("正解\n\n");
	else
		printf("不正解\n\n");
}

// メイン関数
int main() {

	// 乱数初期化
	srand((unsigned int)time(nullptr));

	int selectedValue;

	std::function<int()> GetRandomValue = []() {
		return (rand() % 6) + 1; };

	while (true)
	{
		printf("0(丁) か 1(半)を入力してください : ");
		// 入力受付
		scanf_s("%d", &selectedValue);

		if (selectedValue < 2) {
			SetTimeOut(3, selectedValue, GetRandomValue);
		}
		else {
			// 0 ~ 1の値を入力するよう促す
			printf("0 ~ 1の値を入力してください\n\n");
		}
	}

	return 0;
}