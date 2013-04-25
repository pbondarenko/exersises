#include "check_ext.h"
#include "my_lib.h"


START_TEST(reverse_palindrome) {
	int len;
	for (len = 0; len < 10; ++len) {
		char * line = (char *) malloc(len+1);
		line[len] = '\0';
		int i;
		for (i = 0; i < len/2 + (len&1); ++i) {
			line[i] = line[len - i -1] = (char)('a'+i);
		}
		char * rline = reverse(line);
	        //printf("%s %s %d %d\n", line, rline, line, rline);	
		fail_if(strcmp(line, rline) != 0);
		
		free(line);
		free(rline);
	}
}
END_TEST


int main() {

	return run_suite(
                START_SUITE(test_reverse){
                        ADD_CASE(
                                START_CASE(reverse){
                                        ADD_TEST(reverse_palindrome);
                                }END_CASE
                        );
                }END_SUITE
        );

	return 0;
}


