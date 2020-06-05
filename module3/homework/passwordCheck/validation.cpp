#include "validation.hpp"

#include <algorithm>

std::string getErrorMessage(ErrorCode errorCode) {
    std::string result{};
    switch (errorCode) {
    case ErrorCode::Ok:
        result = "OK";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        result = "Password Needs At Least Nine Characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        result = "Password Needs At Least One Number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        result = "Password Needs At Least One Special Character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        result = "Password Needs At Least One Uppercase Letter";
        break;
    case ErrorCode::PasswordsDoesNotMatch:
        result = "Passwords Does Not Match";
        break;
    default:
        result = "Unknow Error Code";
        break;
    }
    return result;
}

bool doesPasswordsMatch(const std::string& firstPassword, const std::string& secondPassword) {
    return (firstPassword == secondPassword);
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.length() < MIN_LENGTH) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) { return std::ispunct(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) { return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword) {
    if (!doesPasswordsMatch(firstPassword, secondPassword)) {
        return ErrorCode::PasswordsDoesNotMatch;
    }
    return checkPasswordRules(firstPassword);
}
