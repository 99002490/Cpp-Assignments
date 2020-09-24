//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
Color::Color() :
	m_r(0), m_g(0), m_b(0) {}
Color::Color(int r,int g,int b) :
	m_r(r),m_g(g),m_b(b) {}
Color::Color(int color) :
	m_r(color),m_g(color),m_b(color){}
Color::Color(std::string clr) :
	m_r(atoi(clr.c_str())), m_g(atoi(clr.c_str())), m_b(atoi(clr.c_str())) {}
Color::Color(color_t) :
	m_r(RED),m_g(GREEN),m_b(BLUE){}
void Color::invert() {
	int initialColor = m_r;
	m_r = m_g;
	m_g = m_b;
	m_b = initialColor;
}
void Color::display() const {
	std::cout << m_r <<","<< m_g <<","<< m_b;
}