#include<stdio.h>
void plot(double i, double j) {
	double str;
	double mm = i / (j * 10);//�O���t���1mm������̑傫��
	double cm = i / j;//�O���t���1cm������̑傫��
	scanf_s("%lf", &str);//�v���b�g����_�̑傫��
	double point = str;
	double final_cm = point / cm - (point / mm - (int)(point / cm) * 10)*0.1;//�v���b�g����_�̃O���t��ł̑傫��(cm)
	double final_mm = point / mm - (int)(point / cm) * 10;//cm�Ƃ̍���(mm)
	printf("%.5lf�̂Ƃ�%d(cm)��%.1lf(mm)\n", str, (int)final_cm, final_mm);
}
int main(void) {
	double max;
	double max_cm;
	double n = 1.83948;
	printf("�O���t�̍ő�l\n");
	scanf_s("%lf", &max);//�쐬����O���t�̍ő�l
	printf("�O���t�̍ő�l�̂Ƃ��̃������傫��(cm)\n");
	scanf_s("%lf", &max_cm);//max�̃O���t�ł̑傫��
	while (n==1.83948)
	{
		plot(max, max_cm);
	}
}