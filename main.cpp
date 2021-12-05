#include "helper.h"

bool validate(char *password, int length);
int main()
{
    cout << "-----WELCOME TO THE PASSWORD GENERATOR/VALIDATOR-----" << endl;
    char password[25];
    int passwordLength;
    char decision;
    do
    {
        int userChoice;
        cout << "PRESS 1 TO GENARATE THE PASSWORD" << endl
             << "PRESS 2 TO VALIDATE THE PASSWORD" << endl
             << "PRESS 0 TO QUIT" << endl;
        cin >> userChoice;

        switch (userChoice)
        {
        case 1:
            cout << "Generated password: " << passGenerator() << endl;
            break;
        case 2:
            cout << "THE LENGTH OF YOUR PASSWORD MUST BE 8 ATLEAST AND MAXIMUN 25 CHARACTERS" << endl
                 << "Atleast 1 digit, 1 uppercaseLetter, 1 SpecialCharacter, and 1 LowercaseLetter" << endl
                 << "Enter your Password: ";

            cin >> password;
            passwordLength = sizeof(password) / sizeof(password[0]);
            if (validate(password, passwordLength) == true)
                cout << "PASSWORD IS VALID!!!" << endl;
            else
                cout << "PASSWORD IS INVALID:((" << endl;

            break;
        case 0:
            return 0;
        default:
            cout << "PLEASE ENTER A VALID KEY" << endl;
        }
        cout << "PRESS 'Y' TO CONTINUE" << endl;
        cin >> decision;
    } while (decision == 'y' || decision == 'y');

    return 0;
}
