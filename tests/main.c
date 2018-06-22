#define CTEST_MAIN

#include <Nachalo.c>
#include <Vvod.c>
#include <main.c>
#include <ctest.h>

CTEST(Menu_move, Correct) 
{
	int result = checkmenu(20);
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(Menu_move, Incorrect) 
{
    	int result = input_check(10); 
	int expected = 0; 
	ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}



