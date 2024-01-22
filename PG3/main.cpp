#include <stdio.h>
#include <Windows.h>
#include <thread>
#include <string>

/// <summary>
/// 引数で指定した文字列を出力する関数
/// </summary>
/// <param name="name">表示する文字列</param>
void Display(const std::string& name) {
	// 指定した文字列の表示
	printf("%s\n", name.c_str());
}

// メイン関数
int main() {
	
	// スレッドを用いて表示
	std::thread th1(Display, "thread1");
	th1.join();
	// スレッドを用いて表示
	std::thread th2(Display, "thread2");
	th2.join();
	// スレッドを用いて表示
	std::thread th3(Display, "thread3");
	th3.join();

	// 終了
	return 0;
}