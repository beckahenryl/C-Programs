#include<fstream>
#include <sstream>
#include "utils.hpp"

/*
In this lab you will code up a function
that takes the name of a file and a string
as output.

The function will open the file and
concatenate all the words that start with a capitol
letter into a sentence.

The sentence is the capitol
words concatenated together with a single space.

Having a trailing space is ok.

The sentence is placed in the output
string.
*/

using namespace std;

bool getAndConcatCapitols(const string& file_name, string& output)
{

	ifstream inFS;
	string toParse;
	inFS.open(file_name);

	if (!inFS.is_open()){
		cout << "could not open file." << endl;
		return false;
	}


    //read the file
	while (inFS >> output){

        //take the output and put it in a string stream
        istringstream ss(output);
       //parse it
        ss >> toParse;

       //checking if it is uppercase
       for (unsigned int i = 0; i < toParse.size(); ++i){
            if (isupper(toParse.at(i))){
                while(getline(ss, output, ' ')){
                    output += toParse + ' ';
                }
                cout << endl << output << endl;
            }
       }

	}


	//done using the file stream
	inFS.close();

	 return true;
}

