#pragma once
#include <vector>
class CLongDigit final
{
public:

private:
	std::vector<char> m_digit;
};

CLongDigit const operator+(const CLongDigit &first, const CLongDigit &second);
CLongDigit const operator-(const CLongDigit &first, const CLongDigit &second);
CLongDigit const operator*(const CLongDigit &first, const CLongDigit &second);
CLongDigit const operator/(const CLongDigit &first, const CLongDigit &second);

