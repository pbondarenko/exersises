#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define NMAX 200
extern void get_line(char[]);
double atof(char[]);
int main() {
	char a[NMAX];
	get_line(a);

	printf("%f\n", atof(a));
	return 0;
}
double atof(char a[]) {
	int i = 0;
	int len = strlen(a);
	for (;i < len && (a[i] == ' ' || a[i] == '\t' || a[i] == '\n'); ++i) {}

	int sign = (a[i] == '-')?(-1):(1);
	if (a[i] == '-' || a[i] == '+') {
		++i;
	}
	double val;
	for (val = 0.0; i < len && isdigit(a[i]); ++i) {
		val = 10.0 * val + a[i] -'0';
	}
	if (i < len && a[i] == '.') {
		++i;
	}
	double power;
	for (power = 1.0; i < len && isdigit(a[i]); ++i, power *= 10.0) {
		val = val * 10.0 + a[i] - '0';
	}
	int st_sign = 0;
	int exp = 0;
	if (i < len && (a[i] == 'e' || a[i] == 'E')) {
		++i;

		if (i < len) {
			st_sign = (a[i] == '-')?(-1):(1);
			if (a[i] == '-' || a[i] == '+') {
				++i;
			}
		}
		for (;i < len && isdigit(a[i]); ++i) {
			exp = 10 * exp + a[i] - '0';
		}
	}

	exp *= st_sign;
	double exp_val = 1;
	for (;exp != 0; --exp) {
		(st_sign < 0) ? (exp_val /= 10.0) : (exp_val *= 10.0);
	}

	return sign * val / power * exp_val;
}

