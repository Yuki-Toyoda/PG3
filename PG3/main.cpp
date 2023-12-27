#include <stdio.h>
#include <Windows.h>
#include <list>

// メイン関数
int main() {
	
	// 1970年の山手線の駅名リスト
	std::list<const char*> stationName_ = {
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	//　1970年の駅リスト
	printf("1970年 - 山手線\n");
	int count = 1;
	for (const char* c : stationName_) {
		// 駅番号を表示
		printf("JY%d ", count);
		// 要素を表示
		printf("%s\n", c);

		// カウントインクリメント
		count++;
	}
	// 改行
	printf("\n");

	// 田端の前に西日暮里を追加
	for (std::list<const char*>::iterator itr = stationName_.begin(); itr != stationName_.end(); itr++) {
		if (*itr == "Tabata") {
			itr = stationName_.insert(itr, "Nishi-Nippori");
			break;
		}
	}

	//　2019年の駅リスト
	printf("2019年 - 山手線\n");
	count = 1;
	for (const char* c : stationName_) {
		// 駅番号を表示
		printf("JY%d ", count);
		// 要素を表示
		printf("%s\n", c);

		// カウントインクリメント
		count++;
	}
	// 改行
	printf("\n");

	// 田端の前に西日暮里を追加
	for (std::list<const char*>::iterator itr = stationName_.begin(); itr != stationName_.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = stationName_.insert(itr, "Takanawa-Gateway");
			break;
		}
	}

	//　2022年の駅リスト
	printf("2022年 - 山手線\n");
	count = 1;
	for (const char* c : stationName_) {
		// 駅番号を表示
		printf("JY%d ", count);
		// 要素を表示
		printf("%s\n", c);

		// カウントインクリメント
		count++;
	}
	// 改行
	printf("\n");

	// 終了
	return 0;
}