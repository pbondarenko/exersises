#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
	printf("signed char %d %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char %d\n", UCHAR_MAX);
	printf("signed short int %d %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short %d\n", USHRT_MAX);
	printf("signed int %d %d\n", INT_MIN, INT_MAX);
	printf("unsigned int %lld\n", UINT_MAX);
	printf("signed long int %lld %lld\n", LLONG_MIN, LLONG_MAX);
	printf("float %f %f\n", FLT_MIN, FLT_MAX);
	printf("double %f %f\n", DBL_MIN, DBL_MAX);
	printf("long double %f %f\n", LDBL_MIN, LDBL_MAX);
	return 0;
}
