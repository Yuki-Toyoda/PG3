#pragma once
#include "BaseCar.h"

/// <summary>
///	HiJet トラック
/// </summary>
class HiJet : public BaseCar
{
public: // メンバ関数

	// デストラクタ
	~HiJet() {};

	/// <summary>
	/// 初期化関数
	/// </summary>
	void Initialize()override;

};