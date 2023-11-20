#include "HiJet.h"

void HiJet::Initialize() {
	carClass_ = "トラック";
	carName_ = "HiJetトラック";
	speed_ = 120.0f;

	
	platFormHeight_ = 1940.0f;
	platFormWidth_ = 1410.0f;
}

void HiJet::ShowInfo()
{
	// 基底クラスの関数を実行
	BaseCar::ShowInfo();

	// 荷台の情報表示
	printf("荷台の広さは ... ");
	printf("縦 %4.2fmm , 横 %4.2fmm です\n", platFormHeight_, platFormWidth_);
}
