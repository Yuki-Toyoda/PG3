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

	/// <summary>
	/// メンバ変数の情報を表示する関数
	/// </summary>
	void ShowInfo() override;

private: // メンバ変数

	// 荷台の幅
	float platFormWidth_;  // 横
	float platFormHeight_; // 縦

};