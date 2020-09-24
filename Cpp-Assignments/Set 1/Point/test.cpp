#include "pch.h"

TEST(Point, distFromOriginCheck) {
	Point p(4, 3);
	EXPECT_EQ(5, p.distanceFromOrigin());
	//EXPECT_STREQ("Q1", P1.quadrant());
	//EXPECT_STREQ("NO", P1.isOrigin());
	//EXPECT_STREQ("NO", P1.isOnXaxis());
}
TEST(Point, quadrantCheck) {
	Point p(4, 3);
	std::string quadrantExpectation = "Q1";
	testing::internal::CaptureStdout();
	p.quadrant();
	std::string quadrantReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(quadrantExpectation.c_str(), quadrantReality.c_str());
}
TEST(Point, originCheck) {
	Point p(4, 3);
	std::string quadrantExpectation = "NO";
	testing::internal::CaptureStdout();
	p.isOrigin();
	std::string quadrantReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(quadrantExpectation.c_str(), quadrantReality.c_str());
}
