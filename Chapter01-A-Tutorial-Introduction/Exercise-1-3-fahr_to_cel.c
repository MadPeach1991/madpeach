#include<stdio.h>
/* 当fahr = 0，20，40，……，300时，分别
	打印华氏温度与摄氏温度对照表 */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("%s\n","-------------------------------------------");
	printf("%s %s %s\n","|","华氏温度与摄氏温度对照表（0～300华氏度）","|");
	printf("%s\n","-------------------------------------------");
	printf("%s %s %s\n","华氏度       ","｜","      摄氏度      ");
	fahr = lower;
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%5.0f %s %12.1f\n", fahr, "       |",celsius);
		fahr = fahr + step;
	}
}