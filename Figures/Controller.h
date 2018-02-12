#pragma once
#include "Shape.h"
#include <fstream>
#include <memory>
#include <map>
#include <String>
class CController
{
public:
	CController(std::ifstream &input, std::ofstream &output);
	void Handle();
private:
	std::ifstream &m_input;
	std::ofstream &m_output;
	std::map<std::string, CShape*> shapes;
	std::vector <std::string> SplitString(const std::string &line, const std::string &specSymbols);
};

