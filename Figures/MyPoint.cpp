#include "stdafx.h"
#include "MyPoint.h"


CMyPoint::CMyPoint(size_t x, size_t y)
	: m_x(x) , m_y(y) {
}

size_t CMyPoint::GetX() const {
	return m_x;
}

size_t CMyPoint::GetY() const {
	return m_y;
}

size_t CMyPoint::GetDifferenceX(const CMyPoint &rhs) const {
	return GetX() - rhs.GetX();
}

size_t CMyPoint::GetDifferenceY(const CMyPoint &rhs) const {
	return GetY() - rhs.GetY();
}
