//
// Created by mrozb on 09.01.2023.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Shiritori {
public:
    Shiritori() : words_{}, game_over_{false} {}

    vector<string> play(const string& word) {
        if (game_over_) {
            return {};
        }
        if (word.empty()) {
            game_over_ = true;
            return {};
        }
        if (!words_.empty() && word[0] != words_.back().back()) {
            cout << "your word has incorrect letter at the beginning! \n";
            game_over_ = true;
            return {};
        }
        for (const auto& w : words_) {
            if (w == word) {
                cout << "sorry but this word has already been used! \n";
                game_over_ = true;
                return {};
            }
        }
        words_.push_back(word);
        return words_;
    }

private:
    vector<string> words_;
    bool game_over_;
};

int main() {
    cout << "Welcome to Shiritori!\n";
    Shiritori game;
    string word;
    while (true) {
        cout << "Enter a word: ";
        cin >> word;
        vector<string> words = game.play(word);
        if (words.empty()) {
            cout << "Game over!\n";
            break;
        }
        cout << "Words played: ";
        for (const auto& w : words) {
            cout << w << ' ';
        }
        cout << '\n';
    }
    return 0;
}