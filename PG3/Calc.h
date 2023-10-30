#pragma once
#include <stdio.h>
#include <stdlib.h>

// クラステンプレート定義
template <typename T1, typename T2>

/// <summary>
/// 計算クラス
/// </summary>
class Calc
{
public: // パブリックなメンバ変数

	// 計算用変数
	T1 a; // a
	T2 b; // b

public: // メンバ関数

	// コンストラクタ
	Calc(T1 a, T2 b) : a(a), b(b){}

	/// <summary>
	/// メンバ変数の値を比較する
	/// </summary>
	/// <returns>最小値</returns>
	T1 Min() {
		T1 castA = static_cast<T1> (a);
		T1 castB = static_cast<T1> (b);

		// 引数の比較をして小さい方を返す
		return castA < castB ? castA : castB;
	};
};
