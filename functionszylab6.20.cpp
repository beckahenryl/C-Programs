#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/*
 Implement the GetNumOfNonWSCharacters() function.
 GetNumOfNonWSCharacters() has a constant string as a
 parameter and returns the number of characters in the string,
 excluding all whitespace. Call GetNumOfNonWSCharacters() in
 the PrintMenu() function. (4 pts)
 */

 int GetNumofNonWSCharacters(string nonWhiteSpace){

 unsigned int i;

   for (i = 0; i < nonWhiteSpace.length(); i++){

      if (nonWhiteSpace[i]== ' ' || nonWhiteSpace[i] == '\t' || nonWhiteSpace[i] == '\n' || nonWhiteSpace[i] == '\v' || nonWhiteSpace[i] == '\f' || nonWhiteSpace[i] == '\r'){
            nonWhiteSpace.erase(i,1);
      }
      if (nonWhiteSpace[i] == ',' || nonWhiteSpace[i] == '!' || nonWhiteSpace[i] == '.'){
        nonWhiteSpace.erase(i,1);
      }
    }
         return nonWhiteSpace.length();
}

/*
 Implement the GetNumOfWords() function.
 GetNumOfWords() has a constant string as a parameter
 and returns the number of words in the string.
 Hint: Words end when a space is reached except for the
 last word in a sentence. Call GetNumOfWords() in the PrintMenu() function. (3 pts)
*/

int GetNumOfWords(const string usrStr){
  string String = usrStr;
  string newString;
  int index;
  int numWords = 1;

  if (String.size() == 0){
    return 0;

  }
  while(true) {

   index = String.find(" ");
   if (index == -1) {
     break;
   }

   newString = String.substr(0, index);
   String.replace(0, index + 1, newString);

   if (String.at(index) != ' '){
     numWords++;
   }
  }

  return numWords;
}

/*
Implement the FindText() function, which has two strings as parameters.
The first parameter is the text to be found in the user provided sample text,
and the second parameter is the user provided sample text.
The function returns the number of instances a word or phrase is found in the string.
In the PrintMenu() function, prompt the user for a word or phrase to be found and
then call FindText() in the PrintMenu() function. Before the prompt, call cin.ignore()
to allow the user to input a new string. (3 pts)
*/

int FindText(string usrStr, string words){

  string newString;
  int index;
  int timesFound = 0;

  while(true) {

   index = words.find(usrStr);
   if (index == -1) {
     break;
   }

   timesFound++;

   newString = words.substr(0, index);
   words.replace(0, index + 1, newString);

  }
  return timesFound;
}

/*
Implement the ReplaceExclamation() function.
ReplaceExclamation() has a string parameter and
updates the string by replacing each '!' character
in the string with a '.' character. ReplaceExclamation()
DOES NOT output the string. Call ReplaceExclamation() in
the PrintMenu() function, and then output the edited string. (3 pts)
*/

void ReplaceExclamation(string& words){
  int index;

  while(true){

    index = words.find("!");
    if (index == -1){
      break;
    }

    words.at(index) = '.';
  }
  return;
}

/*
Implement the ShortenSpace() function.
ShortenSpace() has a string parameter and
updates the string by replacing all sequences
of 2 or more spaces with a single space.
ShortenSpace() DOES NOT output the string.
Call ShortenSpace() in the PrintMenu() function,
and then output the edited string. (3 pt)
*/

void ShortenSpace(string& words){
  string newString;
  int index;

  while(true) {

   index = words.find("  ");
   if (index == -1) {
     break;
   }

   newString = words.substr(0, index);
   words.replace(0, index + 1, newString);
  }

  return;
}

/*
 Implement a PrintMenu() function, which has a string as a parameter---> done

 outputs a menu of user options for analyzing/editing the string, ---> done
 and returns the user's entered menu option. ---> done (displayed it)
 Each option is represented by a single character. ---> done

If an invalid character is entered, continue to prompt for a valid choice.
 Hint: Implement Quit before implementing other options. Call PrintMenu() in the main() function.
 Continue to call PrintMenu() until the user enters q to Quit. (3 pts)
*/

string PrintMenu(string sentence){
    char option;
    string wordFound;

    cout << "MENU\n" << "c - Number of non-whitespace characters\n" << "w - Number of words\n" << "f - Find text\n";
    cout << "r - Replace all !'s\n" << "s - Shorten spaces\n" << "q - Quit\n";
    cout << endl;
    cout << "Choose an option:" << endl;
    cin >> option;
    cin.ignore();

    switch (option){
        case 'q':
            exit(0);
            break;
        case 'c':
            cout << "Number of non-whitespace characters: " << GetNumofNonWSCharacters(sentence) << endl;
            cout << endl;
            break;
        case 'w':
            cout << "Number of words: " << GetNumOfWords(sentence) << endl;
            cout << endl;
            break;
        case 'f':
            cout << "Enter a word or phrase to be found:" << endl;
            cin >> wordFound;
            cin.ignore();
            cout << "\"" << wordFound <<  "\"" << " instances: " << FindText(wordFound, sentence) << endl;
            cout << endl;
            break;
        case 'r':
            ReplaceExclamation(sentence);
            cout << "Edited text: " << sentence << endl;
            cout << endl;
            break;
        case 's':
            ShortenSpace(sentence);
            cout << "Edited text: " << sentence << endl;
            cout << endl;
            break;
        default:
            cout << "Choose an option:" << endl;
            cin >> option;
            cin.ignore();
            cout << endl;
            break;
        }

        return sentence;
    }

int main()
{
    string userSentence;
    char response;

    cout << "Enter a sample text:" << endl;
    getline(cin, userSentence);
    cout << endl;

    cout << "You entered: " << userSentence << endl;
    cout << endl;

    do {
        PrintMenu(userSentence);
    }
    while (response != 'q');

    return 0;
}
