#pragma once
#include <string>
#include <stdio.h>
#include <iostream>

/// <summary>
/// 車基底クラス
/// </summary>
class BaseCar
{
public: // メンバ関数

	// デストラクタ
	virtual ~BaseCar() {};

	/// <summary>
	/// 初期化関数
	/// </summary>
	virtual void Initialize() = 0;

	/// <summary>
	/// メンバ変数の情報を表示する関数
	/// </summary>
	void ShowInfo() 
	{
		printf("この車は ... ");
		printf("分類 %s : ", carClass_.c_str()); // 分類
		printf("名称 %s : ", carName_.c_str());	// 名称
		printf("速さ %4.2f です\n", speed_);		// 速さ
	};

protected: // 継承先メンバ変数

	// 車の分類
	std::string carClass_;
	// 車の名称
	std::string carName_;
	// 速さ
	float speed_;

};

