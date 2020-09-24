#include "pch.h"

TEST(Box, DefConst) {
	Box b;
	EXPECT_EQ(0, b.length());
	EXPECT_EQ(0, b.breadth());
	EXPECT_EQ(0, b.height());
}
TEST(Box, ParamConstWith3Params) {     //If the box is a cuboid(i.e length,breadth and height are diffent values)
	Box b(30,15,10);
	EXPECT_EQ(30, b.length());
	EXPECT_EQ(15, b.breadth());
	EXPECT_EQ(10, b.height());
	EXPECT_EQ(4500, b.volume());
}
TEST(Box, ParamConstWith1Param) {     //If the box is a cube(i.e length,breadth and height are equal)
	Box b(30);
	EXPECT_EQ(30, b.length());
	EXPECT_EQ(30, b.breadth());
	EXPECT_EQ(30, b.height());
	EXPECT_EQ(27000, b.volume());
}
TEST(Box, DisplayTest) {     
	Box b(30,15,10);
	std::string cuboidExpectation = "4500";
	testing::internal::CaptureStdout();
	b.displayForCuboid();
	std::string cuboidReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(cuboidExpectation.c_str(), cuboidReality.c_str());
	Box b1(30);
	std::string cubeExpectation = "27000";
	testing::internal::CaptureStdout();
	b.displayForCube();
	std::string cubeReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(cubeExpectation.c_str(), cubeReality.c_str());
}