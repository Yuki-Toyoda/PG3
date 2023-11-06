#include "RectAngle.h"

RectAngle::RectAngle(Vector2 size)
{
	// 引数の値をメンバ変数に代入
	size_ = size;
}

float RectAngle::Size()
{
	// 面積を計算して返す
	return size_.x * size_.y;
}

void RectAngle::Draw()
{
	// 各種情報描画
	printf("形状タイプ = 矩形 :: サイズ 縦 = %4.2f 横 = %4.2f : 面積 = %4.2f\n", size_.x, size_.y, Size());
}
