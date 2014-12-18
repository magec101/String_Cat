#include <cxxtest/TestSuite.h>


extern void string_CatMain(int argc, const char** argv, char result[]);

class String_CatTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
		void test_Unit_Test_2(){
             const char *largv[] = {"1", "HELLO", "-WORLD"};
	         char result[100];

	        string_CatMain(3, largv, result);
		
	
		    TS_ASSERT_EQUALS("HELLO-WORLD", result);

	}
	
}; 