#include <stdio.h>
#include <Windows.h>
#include <functional>
#include <stdlib.h>
#include <time.h>

int GetRandomValue() {
	return (rand() % 6) + 1;
}

// メイン関数
int main() {

	// 乱数初期化
	srand((unsigned int)time(nullptr));

	int selectedValue;

	std::function<void(int i)> SetTimeOut = [&selectedValue](int randomValue) {
		// 結果は
		printf("\n結果は");
		for (int i = 0; i < 3; i++) {
			printf(".");
			Sleep(1000);
		}

		// ランダムな値を取得し偶数か奇数か求める
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
			SetTimeOut(GetRandomValue());
		}
		else {
			// 0 ~ 1の値を入力するよう促す
			printf("0 ~ 1の値を入力してください\n\n");
		}
	}

	return 0;
}