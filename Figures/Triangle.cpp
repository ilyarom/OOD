#include "stdafx.h"
#include "Triangle.h"
#include <cmath>

CTriangle::CTriangle(CMyPoint point1, CMyPoint point2, CMyPoint point3)
	: m_point1(point1), m_point2(point2), m_point3(point3) {
	m_trianglePointsDifference.a = sqrt(pow((m_point1.GetDifferenceX(m_point2)), 2) + pow(m_point1.GetDifferenceY(m_point2), 2));
	m_trianglePointsDifference.b = sqrt(pow(m_point2.GetDifferenceX(m_point3), 2) + pow(m_point2.GetDifferenceY(m_point3), 2));
	m_trianglePointsDifference.c = sqrt(pow(m_point1.GetDifferenceX(m_point3), 2) + pow(m_point1.GetDifferenceY(m_point3), 2));
}

size_t CTriangle::GetArea() const {
	size_t halfPerimeter = GetPerimeter() / 2;
	return sqrt((m_trianglePointsDifference.a * m_trianglePointsDifference.b * m_trianglePointsDifference.c) * halfPerimeter);
}
size_t CTriangle::GetPerimeter() const {
	return m_trianglePointsDifference.a + m_trianglePointsDifference.b + m_trianglePointsDifference.c;
}
CMyPoint CTriangle::GetPoint1() const {
	return m_point1;
}
CMyPoint CTriangle::GetPoint2() const {
	return m_point2;
}
CMyPoint CTriangle::GetPoint3() const {
	return m_point3;
}
