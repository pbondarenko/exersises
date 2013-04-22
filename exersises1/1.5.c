#include <stdio.h>
#define STEP 20
#define LOWER 0
#define UPPER 300
int main (){
	float fahr, celsius;

	printf(" C    F   \n");
	for(celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
	}
	return 0;
}
