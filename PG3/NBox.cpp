#include "NBox.h"

void NBox::Initialize()
{
	carClass_ = "ワゴン";
	carName_ = "NBOX";
	speed_ = 140.0f;

	// 派生名の配列に追加
	derivativeName_.push_back("NBOX SLASH");
	derivativeName_.push_back("NBOX JOY");
}

void NBox::ShowInfo()
{
	// 基底クラスの関数を実行
	BaseCar::ShowInfo();

	printf("この車の派生型は ... ");
	// 配列内の情報を繰り返し表示
	for (std::string name : derivativeName_) {
		printf("%s, ", name.c_str());
	}
	printf("です。\n");
}
