#include <stdio.h>

/// <summary>
/// 引数の値二つを比較し、小さい値を表示する関数
/// </summary>
/// <typeparam name="T">引数の型</typeparam>
/// <param name="a">引数1(数字以外は不可)</param>
/// <param name="b">引数1(数字以外は不可)</param>
/// <returns>2つのうちの小さい値</returns>
template <typename T>
T Min(T a, T b) {
	// 引数の比較をして小さい方を返す
	return a < b ? a : b;
}
// char型が代入されている場合は入力不可なことを示す
template<>
char Min<char>(char a, char b) {
	// 数字以外は代入できない
	printf("数字以外は代入出来ません");
	return '\0';
}

// メイン関数
int main() {
	// int型
	printf("%d\n", Min<int>(1, 5));
	// float型
	printf("%f\n", Min<float>(1.2f, 5.4f));
	// double型
	printf("%lf\n", Min<double>(1.8f, 9.4f));
	// char型
	Min<char>('i', 'o');
	return 0;
}