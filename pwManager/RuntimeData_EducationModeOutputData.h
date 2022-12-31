#pragma once

#include <string>

struct RuntimeData_EducationModeOutputData
{
public:
	RuntimeData_EducationModeOutputData();
	~RuntimeData_EducationModeOutputData();

public:
	static std::string EducationModeOutputData_string;

	static void append_EducationModeOutputData_string(std::string text);
	static std::string get_EducationModeOutputData_string();
	static System::String^ get_EducationModeOutputData_SystemString();
	
	//static System::String^ get_EducationModeOutputData_Text(std::string text);
};

