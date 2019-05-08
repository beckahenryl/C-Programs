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

#include <iostream>
#include <string>
#include <vector>
#include "PlaylistNode.h"

using namespace std;

PlaylistNode::PlaylistNode(){
	uniqueID = "none";
	songName = "none";
	artistName = "none";
	songLength = 0;
	nextNodePtr = NULL;

}

PlaylistNode::PlaylistNode(string id, string nameSong, string nameArtist, int lengthSong){
	uniqueID = id;
	songName = nameSong;
	artistName = nameArtist;
	songLength = lengthSong;
	this->nextNodePtr = NULL;
}

//code for mutators here

void PlaylistNode::InsertAfter(PlaylistNode* nextNode){
	PlaylistNode* tmpNext = 0;
	
	tmpNext = this->nextNodePtr;
	this->nextNodePtr = nextNode;
	nextNode->nextNodePtr = tmpNext;
}

void PlaylistNode::SetNext(PlaylistNode* nextlocation){
	 this->nextNodePtr = nextlocation;
}

//code for accessors here
string PlaylistNode::GetID() const{
	return uniqueID;
}

string PlaylistNode::GetSongName() const{
	return songName;
}

string PlaylistNode::GetArtistName() const{
	return artistName;
}

int PlaylistNode::GetSongLength() const{
	return songLength;
}

PlaylistNode* PlaylistNode::GetNext() const{
	return this->nextNodePtr;
}

/*
Unique ID: S123
Song Name: Peg
Artist Name: Steely Dan
Song Length (in seconds): 237
*/


void PlaylistNode::PrintPlaylistNode() {
   cout << "Unique ID: " << this->uniqueID << endl;
   cout << "Song Name: " << this->songName << endl;
   cout << "Artist Name: " << this->artistName << endl;
   cout << "Song Length (in seconds): " << this->songLength << endl;
   cout << endl;
   return;
}





