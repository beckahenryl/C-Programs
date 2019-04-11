#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tinyPuterSelection, number;

    string exitMessage = "Thanks for playing, come back and play again!";
    string errorMessage = "Provided input is not valid, please play again. Exiting...";

    string alligator = "ALLIGATOR";
    string elephant = "ELEPHANT";
    string ostrich = "OSTRICH";
    string iguana = "IGUANA";
    string urchin = "URCHIN";
    string yak = "YAK";

    string no = "no";
    string one = "one";
    string ones = "ones";
    string tens = "tens";
    string hundreds = "hundreds";
    string thousands = "thousands";
    string millions = "millions";
    string many = "many";

    char vowel;


    cout << "Greetings TinyPuter. Select an option.\n\n";
    cout << "\tPress 1 to play with letters." << endl;
    cout << "\tPress 2 to play with numbers." << endl;
    cin >> tinyPuterSelection;

    switch (tinyPuterSelection){
    case 1:
        cout << "Press a vowel key ..." << endl;
        cin >> vowel;
        if (vowel == 'A' || vowel == 'a'){
            cout << "You pressed " << vowel << ", " << alligator << " starts with " << vowel << "." << endl;
            cout << exitMessage << endl;
        }
        else if (vowel == 'E' || vowel == 'e'){
            cout << "You pressed " << vowel << ", " << elephant << " starts with " << vowel << "." << endl;
            cout << exitMessage << endl;
        }

        else if (vowel == 'I' || vowel == 'i'){
            cout << "You pressed " << vowel << ", " << iguana << " starts with " << vowel << "." << endl;
            cout << exitMessage << endl;
        }

        else if (vowel == 'O' || vowel == 'o'){
            cout << "You pressed " << vowel << ", " << ostrich << " starts with " << vowel << "." << endl;
            cout << exitMessage << endl;
        }

        else if (vowel == 'U' || vowel == 'u'){
            cout << "You pressed " << vowel << ", " << urchin << " starts with " << vowel << "." << endl;
            cout << exitMessage << endl;
        }

        else if (vowel == 'Y' || vowel == 'y'){
            cout << "You pressed " << vowel << ", " << yak << " starts with " << vowel << "." << endl;
            cout << exitMessage << endl;
        }

        else {
            cout << errorMessage << endl;
            return 1;
        }
        break;

    case 2:
        cout << "Enter a number of rhinos ..." << endl;
        cin >> number;
        if (number == 0){
            cout << "There are " << no << " rhinos" << endl;
            cout << exitMessage << endl;
        }
        else if (number == 1){
            cout << "There is " << one << " rhino" << endl;
            cout << exitMessage << endl;
        }

        else if (number >= 2 && number <= 9){
            cout << "There are " << ones << " of rhinos" << endl;
            cout << exitMessage << endl;
        }
        else if (number >= 10 && number <= 99){
            cout << "There are " << tens << " of rhinos" << endl;
            cout << exitMessage << endl;
        }
        else if (number >= 100 && number <= 999){
            cout << "There are " << hundreds << " of rhinos" << endl;
            cout << exitMessage << endl;
        }

        else if (number >= 1000 && number <= 999999){
            cout << "There are " << thousands << " of rhinos" << endl;
            cout << exitMessage << endl;
        }

        else if (number >= 1000000 && number <= 999999999){
            cout << "There are " << millions << " of rhinos" << endl;
            cout << exitMessage << endl;
        }

        else if (number >= 1000000000){
            cout << "There may be too " << many << " rhinos to count with 32 bits" << endl;
            cout << exitMessage << endl;
        }

        else {
            cout << errorMessage << endl;
            return 1;
        }
        break;
    default:
        cout << errorMessage << endl;
        return 1;
        break;
    }
    return 0;
}
