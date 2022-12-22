#include<stdio.h>
/* 当cel = -30，-20，-10，……，200时，分别
	打印摄氏温度与华氏温度对照表 */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -30;
	upper = 200;
	step = 10;

	printf("%s\n","------------------------------------------");
	printf("%s %s %s\n","|","摄氏温度与华氏温度对照表（-30～200摄氏度）","|");
	printf("%s\n","------------------------------------------");
	printf("%s %s %s\n","   摄氏度     ","｜","       华氏度      ");
	celsius = lower;
	while(celsius <= upper){
		fahr = (9.0/5.0) * celsius +32;
		printf("%5.0f %s %12.1f\n", celsius, "        |",fahr);
		celsius = celsius + step;
	}
}