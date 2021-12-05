#include "helper.h"
#include <bits/stdc++.h>

string passGenerator()
{
    // generating a password according to recommended requirements
    int length = 12;
    char password[length];
    for (int i = 0; i < length; i++)
    {
        if (i >= 0 && i < 5)
        {
            password[i] = (rand() % 26) + 65;
        }
        else if (i >= 5 && i < 8)
        {
            password[i] = (rand() % 26) + 97;
        }
        else if (i >= 8 && i < 10)
        {
            password[i] = (rand() % 15) + 33;
        }
        else if (i >= 10 && i < 12)
        {
            password[i] = (rand() % 10) + 48;
        }
    }
    random_shuffle(password, password + length);
    return password;
}