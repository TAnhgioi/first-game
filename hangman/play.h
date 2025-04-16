#ifndef PLAY_H
#define PLAY_H

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

vector <string> accessLib (const string libPath);
string summonWord(const vector <string>& summon); // sinh tu
void updateWord(const char& guess, const string& hidden, string& masked, int& unmasked);
char getInputCharacter();
void createMaskedWord(const string& hidden, int& unmasked, string& maskedWord);
void updateGuessedLetters(const char& guess, string& guessed);
void process (const char& guess, const string& hidden, string& maskedWord, int& unmasked, string& guessed);



#endif // PLAY_H
