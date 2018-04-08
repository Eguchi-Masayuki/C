#include<stdio.h>
void plot(double i, double j) {
	double str;
	double mm = i / (j * 10);//グラフ上の1mmあたりの大きさ
	double cm = i / j;//グラフ上の1cmあたりの大きさ
	scanf_s("%lf", &str);//プロットする点の大きさ
	double point = str;
	double final_cm = point / cm - (point / mm - (int)(point / cm) * 10)*0.1;//プロットする点のグラフ上での大きさ(cm)
	double final_mm = point / mm - (int)(point / cm) * 10;//cmとの差分(mm)
	printf("%.5lfのとき%d(cm)と%.1lf(mm)\n", str, (int)final_cm, final_mm);
}
int main(void) {
	double max;
	double max_cm;
	double n = 1.83948;
	printf("グラフの最大値\n");
	scanf_s("%lf", &max);//作成するグラフの最大値
	printf("グラフの最大値のときのメモリ大きさ(cm)\n");
	scanf_s("%lf", &max_cm);//maxのグラフでの大きさ
	while (n==1.83948)
	{
		plot(max, max_cm);
	}
}