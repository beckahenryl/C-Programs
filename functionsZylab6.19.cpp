#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {
   return usrStr.length();
   
}

string OutputWithoutWhiteSpace (string& whiteSpace){
   
  unsigned int i;
   
   for (i = 0; i < whiteSpace.length(); i++){
      
      if (whiteSpace[i]== ' ' || whiteSpace[i] == '\t' || whiteSpace[i] == '\n' || whiteSpace[i] == '\v' || whiteSpace[i] == '\f' || whiteSpace[i] == '\r'){
         whiteSpace.erase(i,1);
         
         }
      }
      
     return whiteSpace;
   }

int main() {

   string numChars;
   cout << "Enter a sentence or phrase:" << endl;
   getline(cin, numChars);
   
   cout << endl;
   
   cout << "You entered: " << numChars << endl;
   cout << endl;
   
   cout << "Number of characters: " << GetNumOfCharacters(numChars) << endl;
   
  
   cout << "String with no whitespace: " <<  OutputWithoutWhiteSpace(numChars) << endl;
      

   return 0;
}
