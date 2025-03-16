#include <iostream>
#include  "play.h"
using namespace std;

string w[] = {"abc", "eg"};

int main(){
    // In ra anh
    // In ra tu
    // In ra
    char guess;
    int tries = 7;
    string hidden = spawnWords(w);
    string maskedWord = createMaskedWord(hidden);
    while (tries > 0){
        cin >> guess;
        normalizeLetter(guess);
        updateWord (guess, hidden, maskedWord, tries);
    }
}
