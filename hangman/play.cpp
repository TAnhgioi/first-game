#include "play.h"

#include<vector>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//lay mot tu ngau nhien trong kho tu
vector<string> accessLib(const string libPath){
    vector<string> wordList;
    string word;
    ifstream wordFile (libPath);
    if (!wordFile.is_open()) {
        throw domain_error("Unable to open file");
    }
    //while ( getline (wordFile, word) ){  // Thong thuong doc tung line.
                                           // Chuong trinh nay cung chay.
    while (wordFile >> word) {  // Nhung voi chuong trinh nay, doc tung word cung duoc
                                // Tuc ca 2 cach doc deu chay.
        wordList.push_back(word);
        //cout << word << '\n';
    }
    wordFile.close();
    return wordList;
}

string summonWord(const vector <string>& summon){
    // Khởi tạo hạt giống ngẫu nhiên bằng thời gian hiện tại
    int quantity = summon.size();
    int gacha = rand() % quantity;
    string hidden = summon[gacha];
    return hidden;
}

/*for (int i = 0; i < hidden.size(); i++){
    maskedWord = "-";
}*/

//
char getInputCharacter() {
    char ch;
    cin >> ch;
    return tolower(ch);
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
    for (int i = 0; i < hidden.size(); i++){
        if (guess == hidden[i]){
            maskedWord[i] = guess;
            unmasked--;
        }
    }
}

void updateFail (int& failGuess){
    failGuess++;
}

void process(const char& guess, const string& hidden, string& maskedWord, int& unmasked, string& guessed){
    updateWord (guess, hidden, maskedWord, unmasked);
    updateGuessedLetters (guess, guessed);
}

// hien nhung tu da doan truoc do
void updateGuessedLetters (const char& guess, string& guessed){
    guessed += guess;
}

// render


/**void showStats (){
    showUpdated (maskedWord, guessed);

}**/
