#include <string>

const int MIN_PASSWORD_LENGTH = 9;

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoesNotMatch
};

std::string getErrorMessage(ErrorCode errorCode);
bool doesPasswordsMatch(std::string firstPassword, std::string secondPassword);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string firstPassword, std::string secondPassword);