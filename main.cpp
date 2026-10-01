/****************************************************************************
Program......! MathTutorV2
Programmer(s)! Malachi Byrd, Md Mahbubur Rahman Siam
Section......! 3 (12:00 pm)
Date.........! 9/30/2026
Github Repo..! https://github.com/MalachiByrd/MathTutorV2
Description..! An easy math tutor for young children it displays
the program's intro, gets the user's name asks a simple question,
and then displays an end of program message.
*********************************************************************
New Features:
- <iostream> : Used for standard input/output stream (cin, cout)
- <string>   : Used to store text variables (username)
- <cstdlib>  : Used for random number generation (rand, srand)
- <ctime>    : Used to seed the random number generator (time)
*****************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string username = "";
    int l_num = 0;
    int r_num = 0;
    int mathType = 0;
    char mathSymbol = '?';
    int correctAnswer = 0;
    int userAnswer = 0;
    int temp = 0;
    int errorCode = 0;

    srand(time(0));

    cout << "***************************************" << endl;
    cout << R"( _   _      _ _       _
| | | |    | | |     | |
| |_| | ___| | | ___ | |
|  _  |/ _ \ | |/ _ \| |
| | | |  __/ | | (_) |_|
\_| |_/\___|_|_|\___/(_))" << endl;

    cout << " " << endl;

    cout << "***************************************" << endl;
    cout << "Welcome to the Silly Simple MathTutorV2" << endl;
    cout << "***************************************" << endl;
    cout << " " << endl;

    cout << "Math Fun Facts:" << endl;
    cout << " " << endl;

    cout << "**********************************************************" << endl;
    cout << "  *Math teachers have problems." << endl;
    cout << "  *Math is the only subject that counts." << endl;
    cout << "  *If it seems easy, your doing it wrong." << endl;
    cout << "  *It's all fun and games until someone divides by zero." << endl;
    cout << "**********************************************************" << endl;

    cout << "What is your name? ";
    getline(cin, username);

    l_num = rand() % 10 + 1;
    r_num = rand() % 10 + 1;
    mathType = rand() % 4 + 1;

    switch (mathType) {
        case 1:
            correctAnswer = l_num + r_num;
            mathSymbol = '+';
            break;

        case 2:
            if (l_num < r_num) {
                temp = l_num;
                l_num = r_num;
                r_num = temp;
            }
            correctAnswer = l_num - r_num;
            mathSymbol = '-';
            break;

        case 3:
            correctAnswer = l_num * r_num;
            mathSymbol = '*';
            break;

        case 4:
         
            correctAnswer = l_num;
            l_num *= r_num;
            mathSymbol = '/';
            break;

        default:

            cout << "Invalid question type: " << mathType << endl;
            cout << "Program ended with an error -1" << endl;
            cout << "Please report this error to Debbie Johnson." << endl;
            return -1;
    }

    cout << username << ", what is " << l_num << " " << mathSymbol << " " << r_num << " = ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct! Great job, " << username << "!" << endl;
    } else {
        cout << "Sorry, that's incorrect. The correct answer is "
             << correctAnswer << "." << endl;
    }

    cout << "End of the program." << endl << endl;

    return 0;
}
