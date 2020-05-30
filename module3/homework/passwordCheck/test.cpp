#include "gtest/gtest.h"
#include "validation.hpp"

std::string EMPTY_PASSWORD = "";
std::string PROPER_PASSWORD = "abcABC123!@#";
std::string TOO_SHORT_PASSWORD = "12345678";
std::string PASSWORD_WITHOUT_SPECIALS = "1234abcABC";
std::string PASSWORD_WITHOUT_UPPEPRCASE = "123abc!@#";
std::string PASSWORD_WITHOUT_DIGITS = "abcABC!@#";
auto MIN_ALLOWED_ERROR_CODE = ErrorCode::Ok;
auto MAX_ALLOWED_ERROR_CODE = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

TEST(DoesPasswordsMatchTests, returnsTrueForIdenticalPasswords) {
    EXPECT_TRUE(doesPasswordsMatch(EMPTY_PASSWORD, EMPTY_PASSWORD));
    EXPECT_TRUE(doesPasswordsMatch(PROPER_PASSWORD, PROPER_PASSWORD));
    EXPECT_TRUE(doesPasswordsMatch(TOO_SHORT_PASSWORD, TOO_SHORT_PASSWORD));
}

TEST(DoesPasswordsMatchTests, returnsFalseForDifferentPasswords) {
    EXPECT_FALSE(doesPasswordsMatch(EMPTY_PASSWORD, PROPER_PASSWORD));
    EXPECT_FALSE(doesPasswordsMatch(PROPER_PASSWORD, EMPTY_PASSWORD));
    EXPECT_FALSE(doesPasswordsMatch(PROPER_PASSWORD, TOO_SHORT_PASSWORD));
}

TEST(checkPasswordRulesTests, returnsValuesBetweenOkAndPasswordNeedsAtLeastOneUppercaseLetter) {
    EXPECT_GE(checkPasswordRules(EMPTY_PASSWORD), MIN_ALLOWED_ERROR_CODE);  // greater or equal >=
    EXPECT_LE(checkPasswordRules(EMPTY_PASSWORD), MAX_ALLOWED_ERROR_CODE);  // less or equal <=
    EXPECT_GE(checkPasswordRules(TOO_SHORT_PASSWORD), MIN_ALLOWED_ERROR_CODE);
    EXPECT_LE(checkPasswordRules(TOO_SHORT_PASSWORD), MAX_ALLOWED_ERROR_CODE);
}

TEST(checkPasswordTests, returnsValuesBetweenOkAndPasswordNeedsAtLeastOneUppercaseLetter) {
    EXPECT_GE(checkPassword(PROPER_PASSWORD, PROPER_PASSWORD), MIN_ALLOWED_ERROR_CODE);
    EXPECT_LE(checkPassword(PROPER_PASSWORD, PROPER_PASSWORD), MAX_ALLOWED_ERROR_CODE);
}

TEST(checkPasswordTests, returnsPasswordsDoesNotMatchForDifferentPasswords) {
    EXPECT_EQ(checkPassword(PROPER_PASSWORD, EMPTY_PASSWORD), ErrorCode::PasswordsDoesNotMatch); // equal ==
    EXPECT_EQ(checkPassword(EMPTY_PASSWORD, PROPER_PASSWORD), ErrorCode::PasswordsDoesNotMatch);
    EXPECT_EQ(checkPassword(TOO_SHORT_PASSWORD, PROPER_PASSWORD), ErrorCode::PasswordsDoesNotMatch); 
}

TEST(checkPaswordTests, passwordWithoutUppercaseLetterRecognized){
    EXPECT_EQ(checkPasswordRules(PASSWORD_WITHOUT_UPPEPRCASE), ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter);
    EXPECT_EQ(checkPasswordRules(PASSWORD_WITHOUT_UPPEPRCASE + "A"), ErrorCode::Ok);
}

TEST(checkPaswordTests, passwordWithoutDigitRecognized){
    EXPECT_EQ(checkPasswordRules(PASSWORD_WITHOUT_DIGITS), ErrorCode::PasswordNeedsAtLeastOneNumber);
    EXPECT_EQ(checkPasswordRules(PASSWORD_WITHOUT_DIGITS + "0"), ErrorCode::Ok);
}

TEST(checkPaswordTests, passwordWithoutSpecialCharactersRecognized){
    EXPECT_EQ(checkPasswordRules(PASSWORD_WITHOUT_SPECIALS), ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter);
    EXPECT_EQ(checkPasswordRules(PASSWORD_WITHOUT_SPECIALS + "!"), ErrorCode::Ok);
}

TEST(getErrorMessageTests, returnsErrorCodeAsString) {
    EXPECT_EQ(getErrorMessage(ErrorCode::Ok), "OK");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastNineCharacters), "Password needs at least nine characters");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneNumber), "Password needs at least one number");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter), "Password needs at least one special character");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter), "Password needs at least one uppercase letter");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordsDoesNotMatch), "Passwords don't match");
}