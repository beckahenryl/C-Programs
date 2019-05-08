/*

command: g++ PlaylistNode.cpp main.cpp -Wall -o a.out

Default constructor (1 pt)
Parameterized constructor (1 pt)

Public member functions
InsertAfter() - Mutator (1 pt)
SetNext() - Mutator (1 pt)

GetID() - Accessor
GetSongName() - Accessor
GetArtistName() - Accessor
GetSongLength() - Accessor
GetNext() - Accessor
PrintPlaylistNode()

Private data members
string uniqueID - Initialized to "none" in default constructor
string songName - Initialized to "none" in default constructor
string artistName - Initialized to "none" in default constructor
int songLength - Initialized to 0 in default constructor
PlaylistNode* nextNodePtr - Initialized to 0 in default constructor

*/

#ifndef PlaylistNode_H
#define PlaylistNode_H


#include <iostream>
#include <string>

using namespace std;

class PlaylistNode{
	public:
		//default constructor
		PlaylistNode();

		//parameterized constructor
		PlaylistNode(string id, string nameSong, string nameArtist, int lengthSong);

		//mutators
		void InsertAfter(PlaylistNode* nextNode);
		void SetNext(PlaylistNode* nextlocation);


		//accessors
		string GetID() const;
		string GetSongName() const;
		string GetArtistName() const;
		int GetSongLength() const;

		PlaylistNode* GetNext() const;

		void PrintPlaylistNode();

		/*
		Unique ID: S123
		Song Name: Peg
		Artist Name: Steely Dan
		Song Length (in seconds): 237
		*/


	private:
		string uniqueID;
		string songName;
		string artistName;
		int songLength;
		PlaylistNode* nextNodePtr;
		

};

#endif
