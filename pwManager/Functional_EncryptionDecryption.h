#pragma once

#include <string>

class Functional_EncryptionDecryption {
public:
	Functional_EncryptionDecryption();
	~Functional_EncryptionDecryption();

	static std::string encrypt(std::string dataToEncrypt, std::string encryptionKey);
	static std::string decrypt(std::string dataToDecrypt, std::string encryptionKey);
};