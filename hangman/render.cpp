
#include<iostream>
using namespace std;


void showUpdated (const string& maskedWord, const string& guessed){
    system("CLS");
    cout << maskedWord << "     Previous guesses : " << guessed << endl;

}

void showResult (const int& unmasked, const string& hidden){
    if (unmasked == 0){
        cout << "Win. The word is: " << hidden;
    }
    else {
        cout << "Lose. The word is: " << hidden;
    }
}

