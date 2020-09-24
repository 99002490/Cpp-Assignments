//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"

class Point {
	int m_x;
	int m_y;
public:
	Point();
	Point(int, int);
	Point(const Point&);
	double distanceFromOrigin();
	void quadrant();
	void isOrigin();
	void isOnXaxis();
	void isOnYaxis();
	void display();
};
