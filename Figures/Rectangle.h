#pragma once
#include "MyPoint.h"
#include "Shape.h"
class CRectangle : public CShape
{
public:
	CRectangle(CMyPoint point1, CMyPoint point2);
	size_t GetArea() const override;
	size_t GetPerimeter() const override;
	CMyPoint GetPoint1() const;
	CMyPoint GetPoint2() const;
private:
	CMyPoint m_point1;
	CMyPoint m_point2;
};