#include "play.h"

#include<vector>
#include<iostream>
#include<cstdlib>
using namespace std;

string spawnWords(string summonWord[]){
    int gacha = rand() % 1;
    string hidden = summonWord[gacha];
    return hidden;
}

/*for (int i = 0; i < hidden.size(); i++){
    maskedWord = "-";
}*/

void normalizeLetter(char& guess){
    if ( guess < 'A' || guess >'z' || (guess > 'Z' && guess < 'a') ){
        cout << "Oops, this sign is fatal.";
    }
    else if (guess >= 'A' && guess <= 'Z'){
        guess = guess + 32;
    }
}

bool isGuessFit (char guess, const string& hidden){
    for (int i = 0; i < hidden.size(); i++){
        if (guess == hidden[i]){
            return 1;
        }
    }
    return 0;
}

string createMaskedWord(const string& hidden){
    string maskedWord;
    for (int i = 0; i < hidden.size(); i++){
        maskedWord += "-";
    }
    return maskedWord;
}

void updateWord (char guess, const string& hidden, string& maskedWord, int& tries){
    if (isGuessFit(guess, hidden)){
        for (int i = 0; i < hidden.size(); i++){
            if (guess == hidden[i]){
                maskedWord[i] = guess;
            }
        }
    }
    else {
        cout << "Wrong" << endl;
        tries--;
    }
    cout << maskedWord << endl;
}
