#include <stdio.h>
#include <Windows.h>
#include "Circle.h"
#include"RectAngle.h"

// メイン関数
int main() {

	// 円生成
	IShape* shape = new Circle(5.0f); // インスタンス生成
	shape->Draw();					  // 情報描画

	// 矩形生成
	shape = new RectAngle({ 2.5f, 5.0f }); // インスタンス生成
	shape->Draw();						   // 情報描画

	// 終了
	return 0;
}