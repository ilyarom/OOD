#pragma once
class CMyPoint
{
public:
	CMyPoint(size_t x, size_t y);
	size_t GetX() const;
	size_t GetY() const;
	size_t GetDifferenceX(const CMyPoint &rhs) const;
	size_t GetDifferenceY(const CMyPoint &rhs) const;
private:
	size_t m_x;
	size_t m_y;
};

