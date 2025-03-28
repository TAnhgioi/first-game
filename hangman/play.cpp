#include "play.h"

#include<vector>
#include<iostream>
#include<cstdlib>
using namespace std;

//lay mot tu ngau nhien trong kho tu
string spawnWords(const vector <string>& summonWord){
    int gacha = rand() % 1;
    string hidden = summonWord[gacha];
    return hidden;
}

/*for (int i = 0; i < hidden.size(); i++){
    maskedWord = "-";
}*/

//
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

// tao mat na cho tu bi mat
void createMaskedWord(const string& hidden, int& unmasked, string& maskedWord){
    unmasked = hidden.size();
    for (int i = 0; i < unmasked; i++){
        maskedWord += "-";
    }
}

// cap nhat mat na sau khi doan dua tren
void updateWord (const char& guess, const string& hidden, string& maskedWord, int& unmasked){
    /**if (isGuessFit(guess, hidden)){
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
    cout << maskedWord << endl;**/
    for (int i = 0; i < hidden.size(); i++){
        if (guess == hidden[i]){
            maskedWord[i] = guess;
            unmasked--;
        }
    }
}

// dieu kien dung tro choi
bool isTimeUp (int& tries, int unmasked){
    if (tries == 0 || unmasked == 0){
        return true;
    }
    return false;
}

// hien nhung tu da doan truoc do
void updateGuessedLetters (const char& guess, string& guessed){
    guessed += guess;
}

// render

void showUpdated (const string& maskedWord, const string& guessed){
    cout << maskedWord << "     Previous guesses : " << guessed;

}

void showResult (const int& unmasked){
    if (unmasked == 0){
        cout << "Win";
    }
    else {
        cout << "Lose";
    }
}
