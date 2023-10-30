#include <stdio.h>
#include "Calc.h"

// メイン関数
int main() {

	// int
	Calc<int, int> intCalc(1, 5); // int int
	Calc<int, float> intToFloatCalc(10, 5.0f); // int float
	Calc<int, double> intToDoubleCalc(8, 25.0); // int double

	// float
	Calc<float, float> floatCalc(10.0f, 5.0f); // float float
	Calc<float, int> floatToIntCalc(3.25f, 5); // float int
	Calc<float, double> floatToDoubleCalc(10.5f, 25.5); // float double

	// double
	Calc<double, double> doubleCalc(11.11, 5.55); // double double
	Calc<double, int> doubleToIntCalc(3.0, 5); // double int
	Calc<double, float> doubleToFloatCalc(12.85, 25.0f); // double float

	// int型
	printf("比較する値 : int %d, int %d, 最小値 = %d\n", intCalc.a, intCalc.b, intCalc.Min());
	printf("比較する値 : int %d, float %4.2f, 最小値 = %d\n", intToFloatCalc.a, intToFloatCalc.b, intToFloatCalc.Min());
	printf("比較する値 : int %d, double %lf, 最小値 = %d\n\n", intToDoubleCalc.a, intToDoubleCalc.b, intToDoubleCalc.Min());
	// float型
	printf("比較する値 : float %4.2f, float %4.2f, 最小値 = %4.2f\n", floatCalc.a, floatCalc.b, floatCalc.Min());
	printf("比較する値 : float %4.2f, int %d, 最小値 = %4.2f\n", floatToIntCalc.a, floatToIntCalc.b, floatToIntCalc.Min());
	printf("比較する値 : float %4.2f, double %lf, 最小値 = %4.2f\n\n", floatToDoubleCalc.a, floatToDoubleCalc.b, floatToDoubleCalc.Min());
	// double型
	printf("比較する値 : double %lf, double %lf, 最小値 = %lf\n", doubleCalc.a, doubleCalc.b, doubleCalc.Min());
	printf("比較する値 : double %lf, int %d, 最小値 = %lf\n", doubleToIntCalc.a, doubleToIntCalc.b, doubleToIntCalc.Min());
	printf("比較する値 : double %lf, float %4.2f, 最小値 = %lf\n", doubleToFloatCalc.a, doubleToFloatCalc.b, doubleToFloatCalc.Min());

	return 0;
}