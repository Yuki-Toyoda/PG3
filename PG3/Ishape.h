#pragma once
/// <summary>
/// 形状基底クラス
/// </summary>
class IShape
{
public: // サブクラス

	// 二次元ベクトル構造体
	struct Vector2
	{
		float x; // x
		float y; // y
	};

public: // メンバ関数

	// コンストラクタ
	IShape() {};
	// デストラクタ
	virtual ~IShape() {};

	/// <summary>
	/// 面積を求める関数
	/// </summary>
	/// <returns>面積</returns>
	virtual float Size() = 0;

	/// <summary>
	/// 面積を表示させる関数
	/// </summary>
	virtual void Draw() = 0;

private: // メンバ変数

};