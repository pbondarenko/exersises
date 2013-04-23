#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	printf("signed char %c %c\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char %u\n", UCHAR_MAX);
	printf("signed short int %d %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short %u\n", USHRT_MAX);
	printf("signed int %d %d\n", INT_MIN, INT_MAX);
	printf("unsigned int %u\n", UINT_MAX);
	printf("signed long int %lld %lld\n", LLONG_MIN, LLONG_MAX);
	printf("float %f %f\n", FLT_MIN, FLT_MAX);
	printf("double %lf %lf\n", DBL_MIN, DBL_MAX);
	printf("long double %Lf %Lf\n", LDBL_MIN, LDBL_MAX);
	return 0;
}
