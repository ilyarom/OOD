#include "stdafx.h"
#include "Controller.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


CController::CController(std::ifstream &input, std::ofstream &output)
	:m_input(input), m_output(output) {
}

std::vector<std::string> CController::SplitString(const std::string &line, const std::string &specSymbols) {
	std::vector<std::string> tokens;
	std::string buffer = "";
	for (size_t i = 0; i < line.size(); ++i) {
		if (std::find(specSymbols.begin(), specSymbols.end(), line[i]) != specSymbols.end()) {
			tokens.push_back(buffer);
			buffer = "";
		}
		else if (i == line.size() - 1) {
			buffer += line[i];
			tokens.push_back(buffer);
			buffer = "";
		}
		else {
			buffer += line[i];
		}
	}
	return tokens;
}

void CController::Handle() {
	std::string command;
	while (getline(m_input, command)) {
		std::transform(command.begin(), command.end(), command.begin(), ::toupper);
		/*TODO: Refactor with singltone and factory method*/
		std::vector<std::string> tokens = SplitString(command, ":,;=");
		if (tokens[0] == "CIRCLE") {
			CMyPoint point(std::atoi(tokens[2].c_str()), std::atoi(tokens[3].c_str()));
			CCircle circle(point, std::atoi(tokens[5].c_str()));
			std::cout << std::atoi(tokens[2].c_str()) << " : " << std::atoi(tokens[3].c_str()) << " : " << std::atoi(tokens[5].c_str()) << std::endl;
			m_output << tokens[0] << ":P=" << circle.GetPerimeter() << ";S=" << circle.GetArea() << std::endl;
		}
		else if (tokens[0] == "RECTANGLE") {
			CMyPoint point1(std::atoi(tokens[2].c_str()), std::atoi(tokens[3].c_str()));
			CMyPoint point2(std::atoi(tokens[5].c_str()), std::atoi(tokens[6].c_str()));
			CRectangle rectangle(point1, point2);
			m_output << tokens[0] << ":P=" << rectangle.GetPerimeter() << ";S=" << rectangle.GetArea() << std::endl;
		}
		else if (tokens[0] == "TRIANGLE") {
			CMyPoint point1(std::atoi(tokens[2].c_str()), std::atoi(tokens[3].c_str()));
			CMyPoint point2(std::atoi(tokens[5].c_str()), std::atoi(tokens[6].c_str()));
			CMyPoint point3(std::atoi(tokens[8].c_str()), std::atoi(tokens[9].c_str()));
			CTriangle triangle(point1, point2, point3);
			m_output << tokens[0] << ":P=" << triangle.GetPerimeter() << ";S=" << triangle.GetArea() << std::endl;
		}
		else {
			throw std::invalid_argument("Invalid shape type");
		}
		/*end TODO*/
	}
}