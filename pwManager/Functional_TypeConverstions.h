#pragma once

#include <string>

class Functional_TypeConverstions {
public:
	Functional_TypeConverstions();
	~Functional_TypeConverstions();

public:
	static std::string systemStringToStdString(System::String^ toConvert);
	static System::String^ intToSystemString(int toConvert);
	static System::String^ stdStringToSystemString(std::string toConvert);
};
