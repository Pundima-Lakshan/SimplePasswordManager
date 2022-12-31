#include "Functional_TxtFileManager.h"

#include "Functional_EncryptionDecryption.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

#include <iostream>
#include <fstream>

Functional_TxtFileManager::Functional_TxtFileManager() {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n Constructor");
}

Functional_TxtFileManager::~Functional_TxtFileManager() {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n Destructor");
}

//void Functional_TxtFileManager::set_UsersMap(std::map<std::string, Functional_User> m) {
//    if (RuntimeData_ApplicationData::isEducationMode)
//        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n set_UsersMap");
//
//    usersMap = m;
//}
//
//void Functional_TxtFileManager::set_loggedInUsersPasswordMap(std::map<std::string, Functional_PasswordEntry> m ) {
//    if (RuntimeData_ApplicationData::isEducationMode)
//        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n set_loggedInUsersPasswordMap");
//
//    loggedInUsersPasswordMap = m;
//}
//
//std::map<std::string, Functional_User> Functional_TxtFileManager::get_UsersMap() {
//    if (RuntimeData_ApplicationData::isEducationMode)
//        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n initializeUsersMap");
//
//    std::map<std::string, Functional_User> theMap = std::map<std::string, Functional_User>();
//    return theMap;
//}
//
//std::map<std::string, Functional_PasswordEntry> Functional_TxtFileManager::get_loggedInUsersPasswordMap() {
//    if (RuntimeData_ApplicationData::isEducationMode)
//        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n initializePasswordMap");
//
//    std::map<std::string, Functional_PasswordEntry> theMap = std::map<std::string, Functional_PasswordEntry>();
//    return theMap;
//}

std::map<std::string, Functional_User> Functional_TxtFileManager::readUserTxtFile() {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n readingUsersFiles");

    std::map<std::string, Functional_User> usersMap;

    std::fstream userList;
    userList.open(RuntimeData_ApplicationData::usersFile.c_str(), std::ios::in);

    if (userList.is_open()) {
        std::string line;
        std::string username;
        int counter = 0;
        // Reading loop
        while (getline(userList, line)) {
            // Store data to variable according to line
            switch (counter) {
            case 0:
                username = line;
                usersMap[username].username = username;
                counter++;
                break;

            case 1:
                usersMap[username].password = Functional_EncryptionDecryption::decrypt(line, "5673");
                //usersMap[username].password = line;
                counter++;
                break;

            case 2:
                usersMap[username].encryptionKey = Functional_EncryptionDecryption::decrypt(line, "5673");
                //usersMap[username].encryptionKey = line;
                counter++;
                break;

            case 3:
                counter = 0;
                break;

            default:
                break;
            }
        }
        userList.close();
    }
    return usersMap;
}

std::map<std::string, Functional_PasswordEntry> Functional_TxtFileManager::readPasswordTxtFileOf(std::string username, std::string enryptionKey) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n readingPasswordFiles");

    std::map<std::string, Functional_PasswordEntry> passwordMap;

    std::string filename = RuntimeData_ApplicationData::directory + username + RuntimeData_ApplicationData::fileFormat;

    std::fstream passList; // File object
    passList.open(filename.c_str(), std::ios::in);

    if (passList.is_open()) {
        std::string line;
        std::string link;
        Functional_PasswordEntry var;

        int counter = 0;
        // Reading loop
        while (getline(passList, line)) {

            // Store data to variable according to line
            switch (counter) {
            case 0:
                link = line;
                counter++;
                break;

            case 1:
                var.websiteURL = line;
                counter++;
                break;

            case 2:
                var.username = line;
                counter++;
                break;

            case 3:
                var.password = Functional_EncryptionDecryption::decrypt(line, enryptionKey);
                //var.password = line;
                passwordMap[link] = var;
                counter++;
                break;

            case 4:
                counter = 0;
                break;

            default:
                break;
            }
        }
        passList.close();
    }
    return passwordMap;
}

std::map<std::string, Functional_PasswordEntry> Functional_TxtFileManager::readPasswordTxtFileOf(std::string fileNameWithPath, std::string enryptionKey, bool t) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n readingPasswordFiles");

    std::map<std::string, Functional_PasswordEntry> passwordMap;

    std::string filename = fileNameWithPath;

    std::fstream passList; // File object
    passList.open(filename.c_str(), std::ios::in);

    if (passList.is_open()) {
        std::string line;
        std::string link;
        Functional_PasswordEntry var;

        int counter = 0;
        // Reading loop
        while (getline(passList, line)) {

            // Store data to variable according to line
            switch (counter) {
            case 0:
                link = line;
                counter++;
                break;

            case 1:
                var.websiteURL = line;
                counter++;
                break;

            case 2:
                var.username = line;
                counter++;
                break;

            case 3:
                var.password = Functional_EncryptionDecryption::decrypt(line, enryptionKey);
                //var.password = line;
                passwordMap[link] = var;
                counter++;
                break;

            case 4:
                counter = 0;
                break;

            default:
                break;
            }
        }
        passList.close();
    }
    return passwordMap;
}

void Functional_TxtFileManager::writeUsersToUserTxtFileFrom(std::map<std::string, Functional_User> userMap) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n writeUsersToFile");

    std::fstream userFile;
    userFile.open(RuntimeData_ApplicationData::usersFile.c_str(), std::ios::out);

    if (userFile.is_open()) {
        bool cond = false;
        for (const auto& keyValue : userMap) {
            if (cond == false) {
                userFile << keyValue.first << std::endl;
                userFile << Functional_EncryptionDecryption::encrypt(keyValue.second.password, "5673") << std::endl;
                userFile << Functional_EncryptionDecryption::encrypt(keyValue.second.encryptionKey, "5673") << std::endl;
                //userFile << keyValue.second.password << std::endl;
                //userFile << keyValue.second.encryptionKey << std::endl;
                cond = true;
            }
            else {
                userFile << std::endl << keyValue.first << std::endl;
                userFile << Functional_EncryptionDecryption::encrypt(keyValue.second.password, "5673") << std::endl;
                userFile << Functional_EncryptionDecryption::encrypt(keyValue.second.encryptionKey, "5673") << std::endl;
                //userFile << keyValue.second.password << std::endl;
                //userFile << keyValue.second.encryptionKey << std::endl;
            }
        }
        userFile.close();
    }
    else {
        MessageBox::Show("File Not Found", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
    }
}

void Functional_TxtFileManager::writePasswordsToUserPasswordTxtFileFrom(std::map<std::string, Functional_PasswordEntry> passMap, std::string username, std::string encryptionKey) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n writingPasswordsToFile");

    std::string filename = RuntimeData_ApplicationData::directory + username + RuntimeData_ApplicationData::fileFormat;

    std::fstream passFile;
    passFile.open(filename.c_str(), std::ios::out);

    if (passFile.is_open()) {
        bool cond = false;
        for (const auto& keyValue : passMap) {
            if (cond == false) {
                passFile << keyValue.first << std::endl;
                passFile << keyValue.second.websiteURL << std::endl;
                passFile << keyValue.second.username << std::endl;
                passFile << Functional_EncryptionDecryption::encrypt(keyValue.second.password, encryptionKey) << std::endl;
                //passFile << keyValue.second.password << std::endl;
                cond = true;
            }
            else {
                passFile << std::endl << keyValue.first << std::endl;
                passFile << keyValue.second.websiteURL << std::endl;
                passFile << keyValue.second.username << std::endl;
                passFile << Functional_EncryptionDecryption::encrypt(keyValue.second.password, encryptionKey) << std::endl;
                //passFile << keyValue.second.password << std::endl;
            }
        }
        passFile.close();
    }
    else {
        MessageBox::Show("File Error", "File didn't open", MessageBoxButtons::OK);
    }
}

void Functional_TxtFileManager::createFile(std::string username) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n createFile");

    std::string fname = RuntimeData_ApplicationData::directory + username + RuntimeData_ApplicationData::fileFormat;

    std::fstream newone;
    newone.open(fname, std::ios::out);
    
    if (newone.is_open())
        newone.close();
    else
        MessageBox::Show("File Error", "File didn't open", MessageBoxButtons::OK);
}

void Functional_TxtFileManager::deleteFile(std::string filename) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n deleteFile");

    std::string fname = RuntimeData_ApplicationData::directory + filename + RuntimeData_ApplicationData::fileFormat;

    remove(fname.c_str());
}

void Functional_TxtFileManager::renameFile(std::string oldUsername, std::string newUsername) {
    if (RuntimeData_ApplicationData::isEducationMode)
        RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_TxtFileManager \r\n renameFile");

    std::string newFname = RuntimeData_ApplicationData::directory + newUsername + RuntimeData_ApplicationData::fileFormat;
    std::string oldFname = RuntimeData_ApplicationData::directory + oldUsername + RuntimeData_ApplicationData::fileFormat;

    rename(oldFname.c_str(), newFname.c_str());
}
