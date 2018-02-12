#pragma once
#include "MyPoint.h"
#include "Shape.h"
class CCircle : public CShape
{
public:
	CCircle(CMyPoint centerPoint, size_t radius);
	size_t GetArea() const override;
	size_t GetPerimeter() const override;
	CMyPoint GetCenterPoint() const;
	size_t GetRadius() const;
private:
	CMyPoint m_centerPoint;
	size_t m_radius;
};