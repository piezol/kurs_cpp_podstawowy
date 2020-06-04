#pragma once

#include <string>

constexpr unsigned int MIN_LENGTH = 9;

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoesNotMatch
};

std::string getErrorMessage(ErrorCode errorCode);
bool doesPasswordsMatch(const std::string& firstPassword, const std::string& secondPassword);
ErrorCode checkPasswordRules(const std::string& password);
ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword);
