#include "validation.hpp"


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

bool doesPasswordsMatch(std::string firstPassword, std::string secondPassword){
    return firstPassword == secondPassword;
}