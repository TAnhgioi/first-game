#include <iostream>
#include  "play.h"
using namespace std;

vector <string> w = {"abc", "eg"};

int main(){
    // In ra anh
    // In ra tu
    // In ra
    int tries = 7;
    int unmasked;
    string guessed;
    string hidden = spawnWords(w);
    string maskedWord;
    createMaskedWord (hidden, unmasked, maskedWord);
    while (tries > 0 && unmasked > 0){
        char guess;
        cin >> guess;
        normalizeLetter(guess);
        updateWord (guess, hidden, maskedWord, unmasked);
        updateGuessedLetters (guess, guessed);
        showUpdated (maskedWord, guessed);
        tries--;
    }
    // ket qua win or lose
    showResult (unmasked);

}
