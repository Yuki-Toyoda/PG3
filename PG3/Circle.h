#pragma once
#include "Ishape.h"
#include <stdio.h>
#include <numbers>

/// <summary>
/// 円クラス
/// </summary>
class Circle : public IShape
{
public: // メンバ関数
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="radius">半径</param>
	Circle(float radius);

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
	float radius_;

};

