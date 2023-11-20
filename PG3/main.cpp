#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

// 関数ポインタ定義
typedef void (*Func)(bool b);

/// <summary>
/// 入力された値を元にあっているかどうか検証
/// </summary>
/// <returns>入力値</returns>
bool GetResult(int value) {
	// サイコロを振る
	int randomValue = (rand() % 6) + 1;
	printf("サイコロの目 : %d   ", randomValue);
	if (randomValue % 2 == value % 2) {
		return true;
	}
	return false;
}

/// <summary>
/// 結果表示関数
/// </summary>
/// <param name="result">入力数値</param>
/// <returns>正解か否か</returns>
void DisplayResult(bool result) {
	// 結果は
	printf("\n結果は...");

	// 取得した値と入力値が同じなら
	if (result) {
		printf("正解\n\n");
	}	
	else {
		printf("不正解\n\n");
	}
}

/// <summary>
///	引数で指定した秒数がたった後、引数で指定した関数を実行する
/// </summary>
/// <param name="second">待機秒数</param>
/// <param name="func">関数</param>
void SetTimeOut(int second, Func func, int selectedValue) {
	// 引数で指定した秒数分待機
	Sleep(second * 1000);

	// 引数の関数を実行
	func(GetResult(selectedValue));
}

// メイン関数
int main() {
	//SetConsoleOutputCP(65001);
	// 乱数初期化
	srand((unsigned int)time(nullptr));

	int selectedValue = 0;

	// 空の関数ポインタ定義
	Func func;
	// 関数ポインタに関数代入
	func = &DisplayResult;

	while (true)
	{
		printf("0(丁) か 1(半)を入力してください : ");
		// 入力受付
		scanf_s("%d", &selectedValue);

		if (selectedValue < 2) {
			// 当たっているか
			SetTimeOut(3, func, selectedValue);
		}
		else {
			// 0 ~ 1の値を入力するよう促す
			printf("0 ~ 1の値を入力してください\n\n");
		}
	}

	return 0;
}