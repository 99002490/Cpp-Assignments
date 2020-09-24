//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include<math.h>

Point::Point() :
	m_x(0), m_y(0) {}

Point::Point(int a, int b) :
	m_x(a), m_y(b) {}

Point::Point(const Point& ref) :
	m_x(ref.m_x), m_y(ref.m_y) {}

double Point::distanceFromOrigin() {
	int origin = pow(m_x, 2) + pow(m_y, 2);
	int distance = sqrt(origin);
	return distance;
}
void Point::quadrant() {
	if (m_x < 0 && m_y < 0) {
		std::cout << "Q4";
	}
	else if (m_x<0 && m_y>-1) {
		std::cout << "Q2";
	}
	else if (m_x > -1 && m_y < 0) {
		std::cout << "Q3";
	}
	else {
		std::cout << "Q1";
	}
}
void Point::isOrigin() {
	if (m_x == 0 && m_y == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
void Point::isOnXaxis() {
	if (m_y == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
void Point::isOnYaxis() {
	if (m_x == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
void Point::display() {
	std::cout << m_x << "," << m_y;
}
