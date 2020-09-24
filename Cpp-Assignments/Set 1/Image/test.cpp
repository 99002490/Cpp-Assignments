#include "pch.h"

TEST(Image, display) {
	Image a1(0, 50, 650, 650);
	std::string ExpectedOut = "0,50,650,650";
	testing::internal::CaptureStdout();
	a1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}