/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_String_CatTest_init = false;
#include "/var/www/html/codeit/workspace/String_Cat/src/String_CatTest.h"

static String_CatTest suite_String_CatTest;

static CxxTest::List Tests_String_CatTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_String_CatTest( "/var/www/html/codeit/workspace/String_Cat/src/String_CatTest.h", 6, "String_CatTest", suite_String_CatTest, Tests_String_CatTest );

static class TestDescription_suite_String_CatTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_String_CatTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_String_CatTest, suiteDescription_String_CatTest, 16, "test_Unit_Test_1" ) {}
 void runTest() { suite_String_CatTest.test_Unit_Test_1(); }
} testDescription_suite_String_CatTest_test_Unit_Test_1;

static class TestDescription_suite_String_CatTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_String_CatTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_String_CatTest, suiteDescription_String_CatTest, 20, "test_Unit_Test_2" ) {}
 void runTest() { suite_String_CatTest.test_Unit_Test_2(); }
} testDescription_suite_String_CatTest_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
