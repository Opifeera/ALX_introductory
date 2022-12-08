#include <stdio.h>

#define		LOWER	0
#define		UPPER	300
#define		STEP	20

int main(){
	float fahr;
	
	printf("Fahrenheit \t\t Celsius\n");
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%.1f \t\t %.2f \n", fahr, (5.0 / 9.0)*(fahr - 32.0));
	}
}
