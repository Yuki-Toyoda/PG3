#pragma once
#include "Ishape.h"
#include <stdio.h>

/// <summary>
/// 矩形クラス
/// </summary>
class RectAngle : public IShape
{
public: // メンバ関数
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="size">縦横</param>
	RectAngle(Vector2 size);

	/// <summary>
	/// 面積を求める関数
	/// </summary>
	/// <returns>面積</returns>
	float Size() override;

	/// <summary>
	/// 面積を表示させる関数
	/// </summary>
	void Draw()override;

private: // メンバ変数

	// 半径
	Vector2 size_;

};

