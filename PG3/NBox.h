#pragma once
#include "BaseCar.h"

/// <summary>
/// ホンダ NBox
/// </summary>
class NBox : public BaseCar
{
public: // メンバ関数

	// デストラクタ
	~NBox() {};

	/// <summary>
	/// 初期化関数
	/// </summary>
	void Initialize()override;

};

