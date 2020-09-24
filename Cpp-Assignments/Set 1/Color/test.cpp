#include "pch.h"
#include <type_traits>
TEST(Color, defConst) {
	Color a1;													//rgb as with 0. 
	std::string zeroExpectation = "0,0,0";
	testing::internal::CaptureStdout();
	a1.display();
	std::string zeroReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(zeroExpectation.c_str(), zeroReality.c_str());
}
TEST(Color, paramConstWithRgbHex) {
	Color a1(0xFF0000, 0x00FF00, 0x0000FF);						//rgb hex values
	std::string hexExpectation = "16711680,65280,255";
	testing::internal::CaptureStdout();
	a1.display();
	std::string hexReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(hexExpectation.c_str(), hexReality.c_str());
}
TEST(Color, paramConstWithWhiteHex) {
	Color a1(0xFFFFFF);											//white 
	std::string hexExpectation = "16777215,16777215,16777215";
	testing::internal::CaptureStdout();
	a1.display();
	std::string hexReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(hexExpectation.c_str(), hexReality.c_str());
}
TEST(Color, invertTest) {
	Color a1(0xFF0000, 0x00FF00, 0x0000FF);								
	std::string hexExpectation = "16711680,65280,255";
	testing::internal::CaptureStdout();
	a1.display();                                               //r,g,b before inverting

	std::string hexReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(hexExpectation.c_str(), hexReality.c_str());
	a1.invert();

	std::string hexExpectationInvert = "65280,255,16711680";
	testing::internal::CaptureStdout();
	a1.display();                                               //r->g, g->b, b->r i.e after inverting

	std::string hexRealityInvert = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(hexExpectationInvert.c_str(), hexRealityInvert.c_str());
}



