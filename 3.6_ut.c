#include "check_ext.h"
#include "my_lib.h"


START_TEST(positive_smaller) {
	int x = 12345;
	int len = 10;
	int ans;
	char * res = itoa_window(x, len);
	fail_if(strcmp(res, "     12345") != 0);
}
END_TEST

START_TEST(negative_smaller) {
        int x = -54321;
        int len = 10;
        int ans;
        char * res = itoa_window(x, len);
        fail_if(strcmp(res, "    -54321") != 0);
}
END_TEST

START_TEST(positive_bigger) {
        int x = 12345;
        int len = 2;
        int ans;
        char * res = itoa_window(x, len);
        fail_if(strcmp(res,"12345") != 0);
}
END_TEST

START_TEST(negative_bigger) {
        int x = -12345;
        int len = 5;
        int ans;
        char * res = itoa_window(x, len);
        fail_if(strcmp(res, "-12345") != 0);
}
END_TEST

START_TEST(positive_equal) {
        int x = 12345;
        int len = 5;
        int ans;
        char * res = itoa_window(x, len);
        fail_if(strcmp(res, "12345") != 0);
}
END_TEST

START_TEST(negative_equal) {
        int x = -12345;
        int len = 6;
        int ans;
        char * res = itoa_window(x, len);
        fail_if(strcmp(res, "-12345") != 0);
}
END_TEST

START_TEST(positive_biggest) {
        int x = INT_MAX;
        int len = 5;
        int ans;
        char * res = itoa_window(x, len);
        fail_if(strcmp(res, "2147483647") != 0);
}
END_TEST

START_TEST(negative_biggest) {
        int x = INT_MIN;
        int len = 5;
        int ans;
        char * res = itoa_window(x, len);
        fail_if(strcmp(res, "-2147483648") != 0);
}
END_TEST

int main() {

	return run_suite(
                START_SUITE(test_itoa){
                        ADD_CASE(
                                START_CASE(test_window){
                                    ADD_TEST(positive_smaller);
                                    ADD_TEST(positive_bigger);
                                    ADD_TEST(positive_equal);
                                    ADD_TEST(positive_biggest);
                                    ADD_TEST(negative_smaller);
                                    ADD_TEST(negative_bigger);
                                    ADD_TEST(negative_equal);
                                    ADD_TEST(negative_biggest);

				}END_CASE
                        );
                }END_SUITE
        );
}


