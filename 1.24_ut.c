#include "check_ext.h"

#include "my_lib.h"

void test(char * name, char * answer){
        FILE * in = fopen(name, "r");
        fail_if(in == NULL);
        int sz_line = 0;
        char * line;
        int len = 16;
        line = (char*)malloc(len);
        while (!feof(in)) {
                char c;
                fscanf(in, "%c", &c);
                line[sz_line++] = c;
                if(sz_line == len) {
                        len <<= 1;
                        line = (char *) realloc(line, len);
                }
        }
        fclose(in);
        char * result = good_c(line);

        fail_if(strcmp(result, answer));
        free(line);
	printf("passed %s file\n", name);
}
START_TEST(good_programm_1_24) {
	test("1.24.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_18) {
	test("1.18.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_2) {
        test("1.2.c",  "error in escape-sequence");
}
END_TEST

START_TEST(good_programm_1_3) {
        test("1.3.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_4) {
        test("1.4.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_5) {
        test("1.5.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_6) {
        test("1.6.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_7) {
        test("1.7.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_8) {
        test("1.8.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_9) {
        test("1.9.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_10) {
        test("1.10.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_11) {
        test("1.11.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_12) {
        test("1.12.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_13) {
        test("1.13.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_14) {
        test("1.14.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_15) {
        test("1.15.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_16) {
        test("1.16.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_17) {
        test("1.17.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_19) {
        test("1.19.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_20) {
        test("1.20.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_21) {
        test("1.21.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_22) {
        test("1.22.c", "that's c-programm without stupid errors");
}
END_TEST

START_TEST(good_programm_1_23) {
        test("1.23.c", "that's c-programm without stupid errors");
}
END_TEST


int main() {

	return run_suite(
                START_SUITE(test1){
                        ADD_CASE(
                                START_CASE(c_programm){
					
					ADD_TEST(good_programm_1_2);
					ADD_TEST(good_programm_1_3);
					ADD_TEST(good_programm_1_4);
					ADD_TEST(good_programm_1_5);
					ADD_TEST(good_programm_1_6);
					ADD_TEST(good_programm_1_7);
					ADD_TEST(good_programm_1_8);
					ADD_TEST(good_programm_1_9);
					ADD_TEST(good_programm_1_10);
					ADD_TEST(good_programm_1_11);
					ADD_TEST(good_programm_1_12);
					ADD_TEST(good_programm_1_13);
					ADD_TEST(good_programm_1_14);
					ADD_TEST(good_programm_1_15);
                                        ADD_TEST(good_programm_1_16);
					ADD_TEST(good_programm_1_17);
					ADD_TEST(good_programm_1_18);
					ADD_TEST(good_programm_1_19);
					ADD_TEST(good_programm_1_20);
					ADD_TEST(good_programm_1_21);
					ADD_TEST(good_programm_1_22);
					ADD_TEST(good_programm_1_23);
					ADD_TEST(good_programm_1_24);
                                }END_CASE
                        );
                }END_SUITE
        );

	return 0;
}


