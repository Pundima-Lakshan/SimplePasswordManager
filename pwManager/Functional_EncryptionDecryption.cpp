#include "Functional_EncryptionDecryption.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

Functional_EncryptionDecryption::Functional_EncryptionDecryption() {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_EncryptionDecryption \r\n Constructor");
}

Functional_EncryptionDecryption::~Functional_EncryptionDecryption() {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_EncryptionDecryption \r\n Destructor");
}

std::string Functional_EncryptionDecryption::encrypt(std::string dataToEncrypt, std::string encryptionKey) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_EncryptionDecryption \r\n encrypt");

    std::string result(dataToEncrypt.size(), ' ');
    for (size_t i = 0; i < dataToEncrypt.size(); ++i) {
        result[i] = dataToEncrypt[i] ^ encryptionKey[i % encryptionKey.size()];
        result[i] += 33;
    }
    return result;
}

std::string Functional_EncryptionDecryption::decrypt(std::string dataToEncrypt, std::string encryptionKey) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_EncryptionDecryption \r\n decrypt");

    std::string result(dataToEncrypt.size(), ' ');
    for (size_t i = 0; i < dataToEncrypt.size(); ++i) {
        result[i] = (dataToEncrypt[i] - 33) ^ encryptionKey[i % encryptionKey.size()];
    }
    return result;
}
