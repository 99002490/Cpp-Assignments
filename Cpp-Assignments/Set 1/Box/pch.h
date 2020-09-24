//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#ifndef __BOX_H
#define __BOX_H

class Box {
	int m_length;
	int m_breadth;
	int m_height;
public:
	Box();
	Box(int, int, int);
	Box(int);
	Box(const Box&);
	int length() const;
	int breadth() const;
	int height() const;
	int volume() const;
	void displayForCube() const;
	void displayForCuboid() const;
};

#endif

