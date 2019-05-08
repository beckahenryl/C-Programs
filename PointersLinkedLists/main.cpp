/*
command: g++ PlaylistNode.cpp main.cpp -Wall -o a.out

*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "PlaylistNode.h"
//#include "PlaylistNode.cpp"

using namespace std;

void PrintMenu(string playlistTitle){
	char userPrompt;
	string id, nameSong, nameArtist;
	int lengthSong = 0;

	PlaylistNode* headList = NULL;
	PlaylistNode* tailList = NULL;
	PlaylistNode* currList = NULL;
	PlaylistNode* prevList = NULL;


	PlaylistNode* thisIsTheNode  = NULL;		//pointer to the node being moved
    PlaylistNode* wasBeforeTheNode = NULL;
    PlaylistNode* wasAfterTheNode = NULL;		//pointer to the next position
    PlaylistNode* theNewBefore = NULL;			//node pointing to the new position
    PlaylistNode* theNewAfter = NULL;			//what comes after

	int currentPosition = 0;
    int newPosition = 0;
    

	do{

		/*
		a - Add song
		d - Remove song
		c - Change position of song
		s - Output songs by specific artist
		t - Output total time of playlist (in seconds)
		o - Output full playlist
		q - Quit
		*/

		cout << playlistTitle << " PLAYLIST MENU\n" << "a - Add song\n" << "d - Remove song\n" << "c - Change position of song\n" <<
		"s - Output songs by specific artist\n" << "t - Output total time of playlist (in seconds)\n" <<
		"o - Output full playlist\n" << "q - Quit\n";

		cout << endl;

		cout << "Choose an option:" << endl;
		cin >> userPrompt;

		switch(userPrompt){
			/*

			ADD SONG
			Enter song's unique ID:
			SD123
			Enter song's name:
			Peg
			Enter artist's name:
			Steely Dan
			Enter song's length (in seconds):
			237

			*/
			case 'a'://complete
			{

				cout << "ADD SONG" << endl;

				cin.ignore();
				cout << "Enter song's unique ID:" << endl;
				getline(cin, id);

				cout << "Enter song's name:" << endl;
				getline(cin, nameSong);

				cout << "Enter artist's name:" << endl;
				getline(cin, nameArtist);

				cout << "Enter song's length (in seconds):" << endl;
				cin >> lengthSong;
				cout << endl;

   				if(headList == NULL) {
               		headList = new PlaylistNode(id, nameSong, nameArtist, lengthSong);
               		tailList = headList;
           		}
           		else {
           			currList = new PlaylistNode(id, nameSong, nameArtist, lengthSong);
               		tailList->InsertAfter(currList);
					tailList = currList;
           		}
           		currList = headList;

			}
			break;

			/*
			REMOVE SONG
			Enter song's unique ID:
			JJ234
			"All For You" removed
			*/

			case 'd'://complete

			{
				cout << "REMOVE SONG" << endl;
				cin.ignore();

				cout << "Enter song's unique ID:" << endl;
				getline(cin, id);


				currList = headList;
           		prevList = headList;

	           while (currList != NULL)
	           {
	               if (currList->GetID() == id){
	                   if (currList == headList) {
	                       headList = headList->GetNext();

	                       if (currList == tailList){
	                           tailList = NULL;
	                       }
	                   }
	                   else if (tailList == currList) {
	                       tailList = prevList;
	                       tailList->SetNext(NULL);
	                   }
	                   else {
	                       prevList->SetNext(currList->GetNext());
	                   }
	                   break;
	               }
	               prevList = currList;
	               currList = currList->GetNext();
	               cout << "\"" << currList->GetSongName() << "\"" << " removed." << endl;
	           }

				cout << endl;

			}

			break;

			/*
			Implement the "Change position of song" menu option.
			Prompt the user for the current position of the song
			and the desired new position. (Complete)

			Valid new positions are 1 - n
			(the number of nodes).

			If the user enters a new position that
			is less than 1, move the node to the position 1 (the head).

			If the user enters a new position greater than n, move the node
			to position n (the tail).

			6 cases will be tested:

				Moving the head node (1 pt)
				Moving the tail node (1 pt)
				Moving a node to the head (1 pt)
				Moving a node to the tail (1 pt)
				Moving a node up the list (1 pt)
				Moving a node down the list (1 pt)
			*/

			case 'c':
			{
				cout << "CHANGE POSITION OF SONG" << endl;
				cout << "Enter song's current position:" << endl;
				cin >> currentPosition;
				cout << "Enter new position for song:" << endl;
				cin >> newPosition;

				tailList = headList;
              	currList = headList->GetNext();

              	int songNumber = 1;

              	while (currList->GetNext() != NULL) {

                  if (songNumber == currentPosition){
                      wasBeforeTheNode = tailList;
                      thisIsTheNode = currList;
                      wasAfterTheNode = currList->GetNext();
                  }

                  if ((currentPosition > newPosition) && (songNumber == newPosition - 1)) {
                      theNewBefore = currList;
                      theNewAfter  = currList->GetNext();
                  }

                  if ((currentPosition < newPosition) && (songNumber == newPosition)) {
                      theNewBefore = currList;
                      if (currList->GetNext() != NULL) {
                          theNewAfter  = currList->GetNext();
                      }
                  }

                  tailList = currList;
                  currList = currList->GetNext();
                  songNumber++;
              }

              	thisIsTheNode->GetNext();
              	thisIsTheNode = theNewAfter;

              	theNewBefore->GetNext();
              	theNewBefore = thisIsTheNode;

              	wasBeforeTheNode->GetNext();
              	wasBeforeTheNode = wasAfterTheNode;


				cout << "\"" << thisIsTheNode-> GetSongName() << "\"" << " moved to position " << newPosition << endl;
				cout << endl;

            }

			break;

			case 's'://complete
			{
				cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
				cin.ignore();
				cout << "Enter artist's name:" << endl;
           		getline(cin, nameArtist);
           		cout << endl;

           		currList = headList;
		   		int position = 1;

		   		while (currList != NULL) {
				if (currList->GetArtistName() == nameArtist) {
					cout << position << "." << endl;
                    cout << "Unique ID: " << currList->GetID() << endl;
					cout << "Song Name: " << currList->GetSongName() << endl;
					cout << "Artist Name: " << currList->GetArtistName() << endl;
					cout << "Song Length (in seconds): " << currList->GetSongLength() << endl;
					cout << endl;
				}
				currList = currList->GetNext();
				position++;
			}

			}

			break;

			case 't'://complete

			/*
			OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)
			Total time: 1461 seconds
			*/
			{
				cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;

				int totalLength = 0;
				currList = headList;
				  while (currList != NULL) {
					totalLength += currList->GetSongLength();
					currList = currList->GetNext();
					}

				cout << "Total time: " << totalLength << " seconds" << endl;
				cout << endl;

			}
			break;

			case 'o'://complete
			{

				cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
				int i = 1;
				currList = headList;
				if (currList == NULL){
					cout << "Playlist is empty" << endl;
					cout << endl;
				}
				else{
					while (currList != NULL){
					cout << i++ << "." << endl;
					currList->PrintPlaylistNode();
					currList = currList->GetNext();
					}
				}


			}
			break;

			case 'q':
			{
				exit(0);
			}
            break;

		}

	}
	while(userPrompt!= 'q');

}


int main(){

	string playlistTitle;
	cout << "Enter playlist's title:" << endl;
	getline(cin, playlistTitle);
	cout << endl;
	PrintMenu(playlistTitle);

	return 0;
}
