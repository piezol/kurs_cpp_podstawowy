#include "validation.hpp"

std::string getErrorMessage(ErrorCode errorCode) {
    std::string result{};
    switch (errorCode) {
    case (ErrorCode::Ok):
        result = "OK";
        break;
    case (ErrorCode::PasswordNeedsAtLeastNineCharacters):
        result = "Password Needs At Least Nine Characters";
        break;
    case (ErrorCode::PasswordNeedsAtLeastOneNumber):
        result = "Password Needs At Least One Number";
        break;
    case (ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter):
        result = "Password Needs At Least One Special Character";
        break;
    case (ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter):
        result = "Password Needs At Least One Uppercase Letter";
        break;
    case (ErrorCode::PasswordsDoesNotMatch):
        result = "Passwords Does Not Match";
        break;
    default:
        result = "Unknow Error Code";
        break;
    }
    return result;
}
bool doesPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    return (firstPassword == secondPassword);  
}

ErrorCode checkPasswordRules(std::string password) {

    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstPassword, std::string secondPassword) {
    if(!doesPasswordsMatch(firstPassword, secondPassword)) {
        return ErrorCode::PasswordsDoesNotMatch;
    }
    // tu wywolac checkPasswordRules
    return ErrorCode::Ok;
}