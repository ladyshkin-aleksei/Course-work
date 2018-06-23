#define CTEST_MAIN

#include <ctest.h>
#include <Nachalo.h>
#include <Vvod.h>

CTEST(live, Correct) 
{
	int result = 6;
	int expected = 6;
	ASSERT_EQUAL(expected, result);
}

CTEST(live, Incorrect) 
{
    	int result = 6;
	int expected = 7; 
	ASSERT_EQUAL(expected, result);
}


int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
