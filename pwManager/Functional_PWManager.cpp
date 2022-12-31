#include "Functional_PWManager.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

Functional_PWManager::Functional_PWManager() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_PWManager \r\n Constructor");
}

Functional_PWManager::~Functional_PWManager() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_PWManager \r\n Destructor");
}
