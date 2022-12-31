#include "RuntimeData_ApplicationData.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

RuntimeData_ApplicationData::RuntimeData_ApplicationData::RuntimeData_ApplicationData() {
}

RuntimeData_ApplicationData::RuntimeData_ApplicationData::~RuntimeData_ApplicationData() {
}

void RuntimeData_ApplicationData::set_isEducationMode(bool t) {
	isEducationMode = t;
}

bool RuntimeData_ApplicationData::get_isEducationMode() {
	return isEducationMode;
}

void RuntimeData_ApplicationData::set_isModeSelectorSuccess(bool t) {
	isModeSelectorSuccess = t;
}

bool RuntimeData_ApplicationData::get_isModeSelectorSuccess() {
	return isModeSelectorSuccess;
}

void RuntimeData_ApplicationData::set_isLoginSuccess(bool t) {
	isLoginSuccess = t;
}

bool RuntimeData_ApplicationData::get_isLoginSuccess() {
	return isLoginSuccess;
}

void RuntimeData_ApplicationData::set_isToEditEntryInEntryView(bool t) {
	isModeSelectorSuccess = t;
}

bool RuntimeData_ApplicationData::get_isToEditEntryInEntryView() {
	return isModeSelectorSuccess;
}

void RuntimeData_ApplicationData::set_currentlyEditingPasswordID(std::string t) {
	currentlyEditingPasswordID = t;
}

std::string RuntimeData_ApplicationData::get_currentlyEditingPasswordID() {
	return currentlyEditingPasswordID;
}

void RuntimeData_ApplicationData::set_currentlyLoggedUsername(std::string t) {
	currentlyLoggedUsername = t;
}

std::string RuntimeData_ApplicationData::get_currentlyLoggedUsername() {
	return currentlyLoggedUsername;
}

//void RuntimeData_ApplicationData::set_currentlyLoggedUser(Functional_User u) {
//	currentlyLoggedUser = u;
//}
//Functional_User RuntimeData_ApplicationData::get_currentlyLoggedUser() {
//	return currentlyLoggedUser;
//}

/*
/MyClass.h
class MyClass {
public:
	  typedef std::map<std::string, int> OpMap;
	  static OpMap opMap_;
private:
	  static OpMap init_map() {
		  OpMap some_map;
		  some_map["x"] = 1;
		  return some_map;
	  }
};

//MyClass.cpp
MyClass::OpMap MyClass::opMap_ = init_map();
*/
