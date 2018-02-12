#include "stdafx.h"
#include "Circle.h"
#include <cmath> 

CCircle::CCircle(CMyPoint centerPoint, size_t radius)
	:m_centerPoint(centerPoint), m_radius(radius) {
}

size_t CCircle::GetArea() const {
	return M_PI * pow((GetRadius()), 2);
}
size_t CCircle::GetPerimeter() const {
	return 2 * M_PI * GetRadius();
};
CMyPoint CCircle::GetCenterPoint() const {
	return m_centerPoint;
};
size_t CCircle::GetRadius() const {
	return m_radius;
};

