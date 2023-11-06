#include <stdio.h>
#include <Windows.h>
#include "NBox.h"
#include "HiJet.h"

// メイン関数
int main() {

	// 新しい車の情報をぶち込む
	BaseCar* car = new NBox();
	car->Initialize(); // 初期化して
	car->ShowInfo(); // 情報表示

	// 新しい車の情報をぶち込む
	car = new HiJet();
	car->Initialize(); // 初期化して
	car->ShowInfo(); // 情報表示

	// インスタンス削除
	delete car;

	// 終了
	return 0;
}