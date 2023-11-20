#pragma once
#include "BaseCar.h"
#include <vector>

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

	/// <summary>
	/// メンバ変数の情報を表示する関数
	/// </summary>
	void ShowInfo() override;

private: // メンバ変数

	std::vector<std::string> derivativeName_;

};

