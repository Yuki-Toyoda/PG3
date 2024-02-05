#include <stdio.h>
#include <Windows.h>
#include "Enemy.h"

// メイン関数
int main() {
	// 敵を生成
	Enemy* enemy_ = new Enemy(); // インスタンス生成
	enemy_->Initialize(); // 初期化

	// 更新処理を呼び続ける
	while (1) {
		enemy_->Update();
	}

	// 敵のインスタンス削除
	delete enemy_;
	return 0;
}