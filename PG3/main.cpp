#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

// 関数ポインタ定義
typedef int (*Func)();

/// <summary>
/// ランダムな値を返す関数(1 ~ 6)
/// </summary>
/// <returns>ランダムな値(1 ~ 6)</returns>
int GetRandomValue() {
	int randomValue = (rand() % 6) + 1;
	return randomValue;
}

/// <summary>
/// コールバック関数
/// </summary>
/// <param name="f">関数</param>
/// <param name="value">入力数値</param>
/// <param name="second">待ち時間</param>
/// <returns>正解か否か</returns>
void CallBack(Func f, int value, int second) {
	// 結果は
	printf("\n結果は");
	for (int i = 0; i < second; i++) {
		printf(".");
		Sleep(1000);
	}

	// ランダムな値を取得し偶数か奇数か求める
	int randomValue = f();
	printf(" サイコロの目 : %d   ", randomValue);
	// 取得した値と入力値が同じなら
	if (randomValue % 2 == value % 2)
		printf("正解\n\n");
	else
		printf("不正解\n\n");
}

// メイン関数
int main() {
	// 乱数初期化
	srand((unsigned int)time(nullptr));

	// 空の関数ポインタ定義
	Func func;
	// 関数ポインタに関数代入
	func = &GetRandomValue;

	int selectedValue = 0;

	while (true)
	{
		printf("0(丁) か 1(半)を入力してください : ");
		// 入力受付
		scanf_s("%d", &selectedValue);

		if (selectedValue < 2) {
			// 当たっているか
			CallBack(func, selectedValue, 3);
		}
		else {
			// 0 ~ 1の値を入力するよう促す
			printf("0 ~ 1の値を入力してください\n\n");
		}
	}

	return 0;
}