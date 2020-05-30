#include "validation.hpp"
#include <algorithm>
#include <array>
#include <utility>



std::string getErrorMessage(ErrorCode errorCode) {
    switch(errorCode)
    {
        case ErrorCode::Ok:
            return "OK";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs at least one uppercase letter";
        case ErrorCode::PasswordsDoesNotMatch:
            return "Passwords don't match";
        default:
            return "Unrecognized error code";
    }

}


typedef std::pair<char, char> charRange;

bool strHasDecimalDigits(std::string str) {
    return std::any_of(str.begin(), str.end(), [](char c) { return c >= '0' and c <= '9';});
}

bool strHasUppercaseLetters(std::string str) {
    return std::any_of(str.begin(), str.end(), [](char c) { return c >= 'A' and c <= 'Z';});
}

bool strHasSpecialCharacters(std::string str) {
    static constexpr const std::array<charRange, 3> specialRanges =
    {
        charRange('!', '/'),
        charRange(':', '@'),
        charRange('[', '`')
    };

    return std::any_of(specialRanges.begin(), specialRanges.end(), [&str](charRange range) {
        return std::any_of(str.begin(), str.end(), [&range](char c) {
            return c >= range.first and c <= range.second;
        });
    });

}

bool doesPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    return firstPassword == secondPassword;
}

ErrorCode checkPasswordRules(std::string password) {

    if(password.length() < MIN_PASSWORD_LENGTH){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    if(!strHasDecimalDigits(password)){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    if(!strHasUppercaseLetters(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    if(!strHasSpecialCharacters(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstPassword, std::string secondPassword){
    if(!doesPasswordsMatch(firstPassword, secondPassword)){
        return ErrorCode::PasswordsDoesNotMatch;
    }

    return checkPasswordRules(secondPassword); // by now we know that first and second are equal
}