#include "Functional_TypeConverstions.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

Functional_TypeConverstions::Functional_TypeConverstions() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TypeConverstions \r\n Constructor");
}

Functional_TypeConverstions::~Functional_TypeConverstions() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TypeConverstions \r\n Destructor");
}

std::string Functional_TypeConverstions::systemStringToStdString(System::String^ toConvert) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TypeConverstions \r\n systemStringToStdString");

	using namespace System;
	using namespace System::Runtime::InteropServices;

	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(toConvert)).ToPointer();
	std::string converted = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return converted;
}

System::String^ Functional_TypeConverstions::intToSystemString(int toConvert) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TypeConverstions \r\n intToSystemString");

	return toConvert.ToString();
}

System::String^ Functional_TypeConverstions::stdStringToSystemString(std::string toConvert) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TypeConverstions \r\n stdStringToSystemString");

	System::String^ converted = gcnew System::String(toConvert.c_str());
	return converted;
}


/*
// convert_system_string.cpp
// compile with: /clr
#include <string>
#include <iostream>
using namespace std;
using namespace System;

void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String^ s, wstring& os) {
	using namespace Runtime::InteropServices;
	const wchar_t* chars =
		(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

int main() {
	string a = "test";
	wstring b = L"test2";
	String^ c = gcnew String("abcd");

	cout << a << endl;
	MarshalString(c, a);
	c = "efgh";
	MarshalString(c, b);
	cout << a << endl;
	wcout << b << endl;
}
*/
