#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

int main() {

    setlocale(0, "");
    srand(time(NULL));

    string text = { "If you can keep your head when all about you\nAre losing theirsand blaming it on you;" };
    text += {"If you can trust yourself when all men doubt you,\nBut make allowance for their doubting too :\n"};
    text += {"If you can wait and not be tired by waiting,\nOr, being lied about, don't deal in lies,\n"};
    text += {"Or being hated don't give way to hating,\nAnd yet don't look too good, nor talk too wise;"};

    int j = 0;

    int ans = 0;
    cout << "Выберите режим:\n[1] - без изменения регистра\n[2] - с изменением регистра\n";
    cin >> ans;
    string h = text;
    switch (ans) {
    case 1:
        for (int i = 0; i < text.size(); i++) {
            if (text.find("and", text.find("and") + j) < text.find("and", text.find("and") + i)) {
                cout << text.find("and", i) << " ";
                j = i;
            }
        }
        break;
    case 2:
        
        for (int i = 0; i < text.size(); i++)
        {
            text[i] = tolower(text[i]);
        }
        for (int i = 0; i < text.size(); i++) {
            if (text.find("and", text.find("and") + j) < text.find("and", text.find("and") + i)) {
                cout << text.find("and", i) << " ";
                j = i;
            }
        }
        text = h;
        break;
    default:
        for (int i = 0; i < text.size(); i++) {
            if (text.find("and", text.find("and") + j) < text.find("and", text.find("and") + i)) {
                cout << text.find("and", i) << " ";
                j = i;
            }
        }
        break;
    }
    
    
    

}
