#include "check_ext.h"
#include <string.h>

extern void reverse(char *);

START_TEST(reverse_palindrome) {
	int len;
	for (len = 0; len < 10; ++len) {
		char * line = (char *) malloc(len+1);
		line[len] = '\0';
		int i;
		for (i = 0; i < len; ++i) {
			line[i] = line[len - i -1] = 'a'+i;
		}
		char * rline = (char *) malloc(len + 1);
		memcpy(rline, line, len + 1);
		reverse(rline);
		//fail_unless(strcmp(line, rline) != 0, "reverse palindrome is incorrect");
	}
}
END_TEST


int main() {

	return run_suite(
                START_SUITE(test1){
                        ADD_CASE(
                                START_CASE(reverse){
                                        ADD_TEST(reverse_palindrome);
                                }END_CASE
                        );
                }END_SUITE
        );

	return 0;
}


