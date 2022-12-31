#include "RuntimeData_EducationModeOutputData.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

RuntimeData_EducationModeOutputData::RuntimeData_EducationModeOutputData() {
}

RuntimeData_EducationModeOutputData::~RuntimeData_EducationModeOutputData() {
}

void RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string(std::string text) {
	EducationModeOutputData_string += text + "\r\n\r\n";
}

std::string RuntimeData_EducationModeOutputData::get_EducationModeOutputData_string() {
	return EducationModeOutputData_string;
}

System::String^ RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString() {
	System::String^ text = gcnew System::String(EducationModeOutputData_string.data());
	return text;
}

/*static System::String^ get_EducationModeOutputData_Text(std::string text) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("RuntimeData_EducationModeOutputData \r\n get_EducationModeOutputData_Text");

	append_EducationModeOutputData_string(text);
	return get_EducationModeOutputData_SystemString();
}*/
