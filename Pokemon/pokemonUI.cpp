#include <iostream>
using namespace std;

#include <conio.h>
#include <iomanip>
#include "Line.h"


// 창크기 : 143 * 52

class pokelistUI {
private:
	char name[10][20];
public:
	pokelistUI();
	//~pokelistUI();
	void drawUI();
	void keyPress();
	void listShow(int);
	// 검색함수
	// 정렬함수
	// 리스트 선택 함수
	// 정보 출력 함수
};
// ─ │┌ ┐┘├ ┬ ┤┳ └
pokelistUI::pokelistUI() {
	drawUI();
	listShow(0);
}

void pokelistUI::drawUI() {
	gotoxy(40, 1);
	cout << "┌─────────────────┐" << endl;
	gotoxy(40, 2);
	cout << "│   포켓몬  도감  │" << endl;
	gotoxy(40, 3);
	cout << "└─────────────────┘" << endl;

	cout << "┌─────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
	for (int i = 0; i < 25; i++) {
		cout << "│";
		for (int j = 0; j < 97; j++) cout << " ";
		cout << "│" << endl;
	}
	cout << "└─────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

	cout << endl << endl;

	cout << "┌─────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "│";
		for (int j = 0; j < 97; j++) cout << " ";
		cout << "│" << endl;
	}
	cout << "└─────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

	/*gotoxy(2, 5);
	cout << "◆ 포켓몬 검색 (Press F)";
	makingBox(2, 6, 50, 3);
	makingBox(2, 10, 50, 20);
	makingBox(54, 6, 44, 24);
	gotoxy(0, 70);*/
}

/*void pokelistUI::listShow(int page) {
	for (int i = 0; i < 18; i++) {
		gotoxy(6, 11 + i);
		cout << setw(3) << setfill('0') << i;
		cout << "      " << "이름 없음    ";
		cout << "      " << "특성 없음";
		cout << endl;
	}
}*/

void pokelistUI::keyPress() {
	char temp = _getche();

	switch (temp) {
	case 'w':

		break;
	case 'a':

		break;
	case 's':

		break;
	case 'd':

		break;
	case 'f': // 검색

		break;
	default:

		break;
	}
}

int main() {
	init();
	pokelistUI list;
	//setColor();
}

