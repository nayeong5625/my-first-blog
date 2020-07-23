#include "Line.h"

#include <iostream>
using namespace std;
#include <Windows.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <conio.h>

void Square(int x, int y, int w, int h);
void Pokemon_Info_IF(string poke_no);
void drawUI();

int main() {
	string poke_no;
	cin >> poke_no;
	Pokemon_Info_IF(poke_no);
	while (1) {};
}

void Square(int x, int y, int w, int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			gotoxy(x + j, y + i);
			if ((i == 0) && (j == 0))
				cout << "¦®";
			else if ((i == 0) && (j == w - 1))
				cout << "¦¯";
			else if ((i == h - 1) && (j == 0))
				cout << "¦±";
			else if ((i == h - 1) && (j == w - 1))
				cout << "¦°";
			else if ((i == h - 1) || (i == 0) || ((j == 0) && (j == w - 1)))
				cout << "¦¬";
			else if (((i > 0) || (i < h - 1)) && ((j == 0) || (j == w - 1)))
				cout << "¦­";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void Pokemon_Info_IF(string poke_no) {
	drawUI();
	poke_no = poke_no + ".txt";
	string arr[12];
	ifstream file(poke_no);
	for (int i = 0; i < 12; i++) {
		getline(file, arr[i]);
	}

	gotoxy(11, 5);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(11, 6);
	cout << "¦¢  " << arr[0] << " ¦¢" << endl;
	gotoxy(22, 6);
	cout << "¦¢" << endl;
	gotoxy(11, 7);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	gotoxy(19, 5);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(19, 6);
	cout << "¦¢";
	cout << setw(9 + arr[1].size()/2) << arr[1];
	gotoxy(37, 6);
	cout << "¦¢" << endl;
	gotoxy(19, 7);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	gotoxy(11, 8);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(11, 9);
	cout << "¦¢";
	cout << setw(13 + arr[2].size() / 2) << arr[2] << endl;
	gotoxy(37, 9);
	cout << "¦¢" << endl;
	gotoxy(11, 10);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	gotoxy(11, 11);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(11, 12);
	cout << "¦¢";
	cout << setw(6 + arr[3].size() / 2) << arr[3] << endl;
	gotoxy(23, 12);
	cout << "¦¢" << endl;
	gotoxy(11, 13);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	if (arr[4] != "") {
		gotoxy(25, 11);
		cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		gotoxy(25, 12);
		cout << "¦¢";
		cout << setw(6 + arr[4].size() / 2) << arr[4] << endl;
		gotoxy(37, 12);
		cout << "¦¢" << endl;
		gotoxy(25, 13);
		cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	}

	gotoxy(48, 8);
	cout << "¢¸ ÀÌÀü ¹øÈ£ (Q) : " << arr[5];
	gotoxy(50, 11);
	cout << " ´ÙÀ½ ¹øÈ£ (E) : " << arr[6] << " ¢º" << endl;

	gotoxy(11, 14);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(11, 15);
	cout << "¦¢";
	cout << setw(38 + arr[7].size() / 2) << arr[7] << endl;
	gotoxy(88, 15);
	cout << "¦¢" << endl;
	gotoxy(11, 16);
	cout << "¦¢                                                                            ¦¢" << endl;
	gotoxy(11, 17);
	cout << "¦¢";
	cout << setw(38 + arr[8].size() / 2) << arr[8] << endl;
	gotoxy(88, 17);
	cout << "¦¢" << endl;
	gotoxy(11, 18);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	gotoxy(11, 19);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(11, 20);
	cout << "¦¢       ¦¢";
	cout << setw(35 + arr[9].size() / 2) << arr[9];
	gotoxy(88, 20);
	cout << "¦¢" << endl;
	gotoxy(11, 21);
	cout << "¦¢  ¼³¸í ¦¢" << endl;
	gotoxy(88, 21);
	cout << "¦¢" << endl;
	gotoxy(11, 22);
	cout << "¦¢       ¦¢";
	cout << setw(35 + arr[10].size() / 2)<< arr[10];
	gotoxy(88, 22);
	cout << "¦¢" << endl;
	gotoxy(11, 23);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	gotoxy(11, 24);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(11, 25);
	cout << "¦¢       ¦¢                                                                    ¦¢" << endl;
	gotoxy(11, 26);
	cout << "¦¢  ÁøÈ­ ¦¢";
	cout << setw(35 + arr[11].size() / 2) << arr[11] << endl;
	gotoxy(88, 26);
	cout << "¦¢" << endl;
	gotoxy(11, 27);
	cout << "¦¢       ¦¢                                                                    ¦¢" << endl;
	gotoxy(11, 28);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	while (1) {
		char input;
		input = _getch();
		if (input == 'Q' || input == 'q') {
			string prev_no = arr[5].substr(0, 3);
			Pokemon_Info_IF(prev_no);
		}
		else if (input == 'E' || input == 'e') {
			string next_no = arr[6].substr(0, 3);
			Pokemon_Info_IF(next_no);
		}
		else
			continue;
	}
};

void drawUI() {
	init();
	gotoxy(40, 1);
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	gotoxy(40, 2);
	cout << "¦¢   Æ÷ÄÏ¸ó  µµ°¨  ¦¢" << endl;
	gotoxy(40, 3);
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	for (int i = 0; i < 25; i++) {
		cout << "¦¢";
		for (int j = 0; j < 97; j++) cout << " ";
		cout << "¦¢" << endl;
	}
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;

	cout << endl << endl;

	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "¦¢";
		for (int j = 0; j < 97; j++) cout << " ";
		cout << "¦¢" << endl;
	}
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}