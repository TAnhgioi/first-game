#include <iostream>
#include<stdexcept>
#include<vector>
#include<algorithm>
#include<ctime>

#include  "play.h"
#include "render.h"

using namespace std;

int main(){
    // In ra anh
    // In ra tu
    // In ra
    srand((int)time(0));
    string libPath = "data/Rand.txt";
    int tries = 7;
    int unmasked;
    vector <string> wordLib;
    try {
        wordLib = accessLib(libPath);
    } catch (domain_error) {
        cout << endl << "Error: in reading vocabulary file: " << libPath << endl;
        return 1;
    }

    string guessed;
    string hidden = summonWord(wordLib);
    string maskedWord;
    createMaskedWord (hidden, unmasked, maskedWord);
    while (tries > 0 && unmasked > 0){
        char guess = getInputCharacter();
        process (guess, hidden, maskedWord, unmasked, guessed);
        showUpdated (maskedWord, guessed);
        tries--;
    }
    // ket qua win or lose
    showResult (unmasked, hidden);

}
