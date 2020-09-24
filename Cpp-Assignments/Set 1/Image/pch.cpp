//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
Image::Image() :m_x(0), m_y(0), m_width(0), m_height(0) {}
Image::Image(int xPos, int yPos, int width, int height) {
	m_x = xPos;
	m_y = yPos;
	m_width = width;
	m_height = height;
}
Image::Image(const Image& ref) {
	m_x = ref.m_x;
	m_y = ref.m_y;
	m_width = ref.m_width;
	m_height = ref.m_height;
}
void Image::move(int xPos, int yPos, int width, int height) {
	m_x = xPos;
	m_y = yPos;
	m_width = width;
	m_height = height;
}
void Image::scale(int xPos, int yPos) {
	m_x = xPos;
	m_y = yPos;
}
void Image::resize(int width, int height) {
	m_width = width;
	m_height = height;
}
void Image::display() {
	std::cout << m_x << "," << m_y << "," << m_width << "," << m_height;
}
