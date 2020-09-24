//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
Box::Box():
	m_length(0),m_breadth(0),m_height(0){}
Box::Box(int x,int y,int z):
	m_length(x),m_breadth(y),m_height(z){}
Box::Box(int x):
	m_length(x),m_breadth(x),m_height(x){}
Box::Box(const Box &b):
	m_length(b.m_length), m_breadth(b.m_breadth), m_height(b.m_height) {}
int Box::length() const {
	return m_length;
}
int Box::breadth() const {
	return m_breadth;
}
int Box::height() const {
	return m_height;
}
int Box::volume() const {
	return m_length*m_breadth*m_height;
}
void Box::displayForCube() const {
	std::cout << m_length*m_length*m_length;
}
void Box::displayForCuboid() const {
	std::cout <<volume();
}
