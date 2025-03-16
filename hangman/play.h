#ifndef PLAY_H
#define PLAY_H

#include<iostream>
using namespace std;

string spawnWords(string summon[]); // sinh tu
void updateWord(char guess, const string &hidden, string& masked, int& tries);
void normalizeLetter (char& guess); // chuan hoa ki tu
bool isGuessFit (char guess, const string& hidden);
string createMaskedWord(const string& hidden);

#endif // PLAY_H
