#include <stdio.h>

int main(){
	int lower, upper, step;
	float fahr, cel;
	
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenhight\t\t Celsius\n");
	while (fahr <= upper){
		cel = (5.0 / 9.0) * (fahr - 32);

		printf("%.1f \t\t %.3f\n", fahr, cel);
		fahr = fahr + step;
	}
}
