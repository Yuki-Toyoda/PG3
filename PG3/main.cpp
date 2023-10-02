#include <stdio.h>

/// <summary>
/// 一般の賃金体制の計算関数
/// </summary>
/// <param name="WorkTime">働いた時間</param>
/// <returns>賃金</returns>
int NormalWage(int workTime) {
	return (1072 * workTime);
}

/// <summary>
/// 再帰的な賃金体制の計算関数
/// </summary>
/// <param name="workTime">働いた時間</param>
/// <param name="preWage">一時間前の給料</param>
/// <returns></returns>
int RecursionWage(int workTime, int preWage = 100) {
	// 給料計算
	int wage = preWage * 2 - 50;
	if (workTime <= 0) {
		return 0;
	}

	// 残り何時間辺りの賃金
	printf("残り%d時間時点 ... %d\n", workTime - 1, preWage);

	return preWage + RecursionWage(workTime - 1, wage);
}

// メイン関数
int main() {
	while (1) {
		// 働いた時間変数
		int workTime = 0;
		// 働いた時間を入力する
		printf("働いた時間を入力 ... ");
		scanf_s("%d", &workTime);
		// 入力した時間を元に賃金を計算し出力
		printf("一般的な賃金体制の場合 ... %d\n\n", NormalWage(workTime));
		printf("再帰的な賃金体制の場合 ... %d\n\n", RecursionWage(workTime));
	}
	return 0;
}