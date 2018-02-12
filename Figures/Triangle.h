#pragma once
#include "MyPoint.h"
#include "Shape.h"

struct TrianglePointsDifference {
	size_t a;
	size_t b;
	size_t c;
};

class CTriangle: public CShape
{
public:
	CTriangle(CMyPoint point1, CMyPoint point2, CMyPoint point3);
	size_t GetArea() const override;
	size_t GetPerimeter() const override;
	CMyPoint GetPoint1() const;
	CMyPoint GetPoint2() const;
	CMyPoint GetPoint3() const;
private:
	CMyPoint m_point1;
	CMyPoint m_point2;
	CMyPoint m_point3;
	TrianglePointsDifference m_trianglePointsDifference;;
};

