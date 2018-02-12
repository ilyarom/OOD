#include "stdafx.h"
#include "Rectangle.h"
#include <cmath>


CRectangle::CRectangle(CMyPoint point1, CMyPoint point2)
: m_point1(point1), m_point2(point2) {
}
size_t CRectangle::GetArea() const {
	return (m_point2.GetDifferenceX(m_point1) * m_point2.GetDifferenceY(m_point1));
}
size_t CRectangle::GetPerimeter() const {
	return (2 * m_point2.GetDifferenceX(m_point1)) + (2 * m_point2.GetDifferenceY(m_point1));
}
CMyPoint CRectangle::GetPoint1() const {
	return m_point1;
}
CMyPoint CRectangle::GetPoint2() const {
	return m_point2;
}
