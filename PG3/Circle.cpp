#include "Circle.h"

Circle::Circle(float radius)
{
	// 引数の値をメンバ変数に代入
	radius_ = radius;
}

float Circle::Size()
{
	// 面積を計算して返す
	return radius_ * radius_ * (float)std::numbers::pi;
}

void Circle::Draw()
{
	// 各種情報描画
	printf("形状タイプ = 円 :: 半径 = %4.2f : 面積 =	 %4.2f\n", radius_, Size());
}
