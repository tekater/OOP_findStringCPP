#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

void lower(string& text)
{
    for (int i = 0; i < text.size(); i++)
    {
        text[i] = tolower(text[i]);
    }
}


string avra(string word,string qord) {
    lower(word);
    int pos = -1;
    while (true)
    {
        pos = word.find(qord, pos + 1);
        if (pos == -1)
        {
            break;
        }
        word.insert(pos, "(");
        word.insert(pos + 3, ")"); pos++;
    }
    return word;
}

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
    //abcdefghijklmnopqrstuvwxyz
    string g = text;
    for (int i = 0; i < text.size(); i++)
    {
        text[i] = tolower(text[i]);
    }
    int str[26] = {};
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == 'a') {
            str[0]++;
        }
        if (text[i] == 'b') {
            str[1]++;
        }if (text[i] == 'c') {
            str[2]++;
        }if (text[i] == 'd') {
            str[3]++;
        }if (text[i] == 'e') {
            str[4]++;
        }if (text[i] == 'f') {
            str[5]++;
        }if (text[i] == 'g') {
            str[6]++;
        }if (text[i] == 'h') {
            str[7]++;
        }if (text[i] == 'i') {
            str[8]++;
        }if (text[i] == 'j') {
            str[9]++;
        }if (text[i] == 'k') {
            str[10]++;
        }if (text[i] == 'l') {
            str[11]++;
        }if (text[i] == 'm') {
            str[12]++;
        }if (text[i] == 'n') {
            str[13]++;
        }if (text[i] == 'o') {
            str[14]++;
        }if (text[i] == 'p') {
            str[15]++;
        }if (text[i] == 'q') {
            str[16]++;
        }if (text[i] == 'r') {
            str[17]++;
        }if (text[i] == 's') {
            str[18]++;
        }if (text[i] == 't') {
            str[19]++;
        }if (text[i] == 'u') {
            str[20]++;
        }if (text[i] == 'v') {
            str[21]++;
        }if (text[i] == 'w') {
            str[22]++;
        }if (text[i] == 'x') {
            str[23]++;
        }if (text[i] == 'y') {
            str[24]++;
        }if (text[i] == 'z') {
            str[25]++;
        }
    }
    text = g;
    cout << endl;
    //abcdefghijklmnopqrstuvwxyz
        if (str[0] == 0) {

        }
        else {
            cout << "Буква A встречалась - " << str[0] << " раз" << endl;
        }

        if (str[1] == 0) {

        }
        else {
            cout << "Буква B встречалась - " << str[1] << " раз" << endl;
        }

        if (str[2] == 0) {

        }
        else {
            cout << "Буква C встречалась - " << str[2] << " раз" << endl;
        }

        if (str[3] == 0) {

        }
        else {
            cout << "Буква D встречалась - " << str[3] << " раз" << endl;
        }
        if (str[4] == 0) {

        }
        else {
            cout << "Буква E встречалась - " << str[4] << " раз" << endl;
        }

        if (str[5] == 0) {

        }
        else {
            cout << "Буква F встречалась - " << str[5] << " раз" << endl;
        }

        if (str[6] == 0) {

        }
        else {
            cout << "Буква G встречалась - " << str[6] << " раз" << endl;
        }

        if (str[7] == 0) {

        }
        else {
            cout << "Буква H встречалась - " << str[7] << " раз" << endl;
        }

        if (str[8] == 0) {

        }
        else {
            cout << "Буква I встречалась - " << str[8] << " раз" << endl;
        }

        if (str[9] == 0) {

        }
        else {
            cout << "Буква J встречалась - " << str[9] << " раз" << endl;
        }

        if (str[10] == 0) {

        }
        else {
            cout << "Буква K встречалась - " << str[10] << " раз" << endl;
        }

        if (str[11] == 0) {

        }
        else {
            cout << "Буква L встречалась - " << str[11] << " раз" << endl;
        }

        if (str[12] == 0) {

        }
        else {
            cout << "Буква M встречалась - " << str[12] << " раз" << endl;
        }

        if (str[13] == 0) {

        }
        else {
            cout << "Буква N встречалась - " << str[13] << " раз" << endl;
        }

        if (str[14] == 0) {

        }
        else {
            cout << "Буква O встречалась - " << str[14] << " раз" << endl;
        }

        if (str[15] == 0) {

        }
        else {
            cout << "Буква P встречалась - " << str[15] << " раз" << endl;
        }

        if (str[16] == 0) {

        }
        else {
            cout << "Буква Q встречалась - " << str[16] << " раз" << endl;
        }

        if (str[17] == 0) {

        }
        else {
            cout << "Буква R встречалась - " << str[17] << " раз" << endl;
        }

        if (str[18] == 0) {

        }
        else {
            cout << "Буква S встречалась - " << str[18] << " раз" << endl;
        }
        
        if (str[19] == 0) {

        }
        else {
            cout << "Буква T встречалась - " << str[19] << " раз" << endl;
        }

        if (str[20] == 0) {

        }
        else {
            cout << "Буква U встречалась - " << str[20] << " раз" << endl;
        }

        if (str[21] == 0) {

        }
        else {
            cout << "Буква V встречалась - " << str[21] << " раз" << endl;
        }

        if (str[22] == 0) {

        }
        else {
            cout << "Буква W встречалась - " << str[22] << " раз" << endl;
        }

        if (str[23] == 0) {

        }
        else {
            cout << "Буква X встречалась - " << str[23] << " раз" << endl;
        }

        if (str[24] == 0) {

        }
        else {
            cout << "Буква Y встречалась - " << str[24] << " раз" << endl;
        }

        if (str[25] == 0) {

        }
        else {
            cout << "Буква Z встречалась - " << str[25] << " раз" << endl;
        }
        string abra = { "ababcadabra" };
        cout << avra(abra,"ab");

}
