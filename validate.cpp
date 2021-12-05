#include "helper.h"

bool validate(char *password, int length)
{
    int uppercaseCount = 0, lowercaseCount = 0, specialCharCount = 0, numberCount = 0;
    for (int i = 0; i < length; i++)
    {
        if (password[i] >= 65 && password[i] <= 90)
            uppercaseCount++;
        else if (password[i] >= 97 && password[i] <= 122)
            lowercaseCount++;
        else if (password[i] >= 33 && password[i] <= 47)
            specialCharCount++;
        else if (password[i] >= 48 && password[i] <= 57)
            numberCount++;
    }
    if (length >= 8 && uppercaseCount >= 1 && lowercaseCount >= 1 && specialCharCount >= 1 && numberCount >= 1)
        return true;
    else
        return false;
}