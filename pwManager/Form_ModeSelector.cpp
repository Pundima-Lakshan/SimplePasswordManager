#include "Form_ModeSelector.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"

System::Void pwManager::Form_ModeSelector::CustomInitialize() {
	if(RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_ModeSelector \r\n Constructor");
}

System::Void pwManager::Form_ModeSelector::CustomRelease() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_ModeSelector \r\n Destructor");
}

System::Void pwManager::Form_ModeSelector::Form_ModeSelector_Button_RegularMode_Click(System::Object^ sender, System::EventArgs^ e) {
	RuntimeData_ApplicationData::set_isEducationMode(false);
	RuntimeData_ApplicationData::set_isModeSelectorSuccess(true);

	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_ModeSelector \r\n Form_ModeSelector_Button_RegularMode_Click");

	Close();
}

System::Void pwManager::Form_ModeSelector::Form_ModeSelector_Button_EducationalMode_Click(System::Object^ sender, System::EventArgs^ e) {
	RuntimeData_ApplicationData::set_isEducationMode(true);
	RuntimeData_ApplicationData::set_isModeSelectorSuccess(true);

	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_ModeSelector \r\n Form_ModeSelector_Button_EducationalMode_Click");

	Close();
}
