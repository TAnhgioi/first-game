#ifndef PLAY_H
#define PLAY_H

#include<iostream>
#include<vector>
using namespace std;

string spawnWords(const vector <string>& summon); // sinh tu
void updateWord(const char& guess, const string &hidden, string& masked, int& unmasked);
void normalizeLetter (char& guess); // chuan hoa ki tu
bool isGuessFit (char guess, const string& hidden);
void createMaskedWord(const string& hidden, int& unmasked, string& maskedWord);
void updateGuessedLetters(const char& guess, string& guessed);


void showUpdated (const string& maskedWord, const string& guessed);
void showResult (const int& unmasked);

#endif // PLAY_H
