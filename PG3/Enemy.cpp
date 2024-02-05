#include "Enemy.h"

Enemy::~Enemy() {}

void Enemy::Initialize()
{
	// フェーズ初期化
	phase_ = PhaseAttack;
}

void Enemy::Update()
{
	// 現在の行動関数を呼び出す
	(this->*enemyFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::Attack()
{
	printf("近接攻撃！\n");
	Sleep(1000);
	// 次のフェーズへ
	phase_ = PhaseShot;
}

void Enemy::Shot()
{
	printf("射撃！\n");
	Sleep(1000);
	// 次のフェーズへ
	phase_ = PhaseLeave;
}

void Enemy::Leave()
{
	printf("離脱！\n");
	Sleep(1000);
	// 次のフェーズへ
	phase_ = PhaseAttack;
}

// 静的なメンバ変数の実体を宣言
void (Enemy::* Enemy::enemyFuncTable[])() = {
	&Enemy::Attack, // 近接攻撃
	&Enemy::Shot, // 射撃
	&Enemy::Leave, // 離脱
};