#pragma once
#include <stdio.h>
#include <Windows.h>

/// <summary>
/// 敵クラス
/// </summary>
class Enemy
{
private: // サブクラス

	// 行動列挙子
	enum Phase {
		PhaseAttack, // 近接
		PhaseShot, // 射撃
		PhaseLeave // 離脱
	};

public: // メンバ関数

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy();

	/// <summary>
	/// 初期化関数
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新関数
	/// </summary>
	void Update();

	/// <summary>
	/// 近接攻撃関数
	/// </summary>
	void Attack();

	/// <summary>
	/// 射撃関数
	/// </summary>
	void Shot();

	/// <summary>
	/// 離脱関数
	/// </summary>
	void Leave();

private: // メンバ関数テーブル

	/// <summary>
	/// 敵の行動関数テーブル
	/// </summary>
	static void(Enemy::* enemyFuncTable[])();

private: // メンバ関数

	// 現在の行動フェーズ
	Phase phase_;

};
