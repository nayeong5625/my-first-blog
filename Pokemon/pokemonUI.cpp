#include <iostream>
using namespace std;

#include <conio.h>
#include <iomanip>
#include "Line.h"


// âũ�� : 143 * 52

class pokelistUI {
private:
	char name[10][20];
public:
	pokelistUI();
	//~pokelistUI();
	void drawUI();
	void keyPress();
	void listShow(int);
	// �˻��Լ�
	// �����Լ�
	// ����Ʈ ���� �Լ�
	// ���� ��� �Լ�
};
// �� ���� ������ �� ���� ��
pokelistUI::pokelistUI() {
	drawUI();
	listShow(0);
}

void pokelistUI::drawUI() {
	gotoxy(40, 1);
	cout << "��������������������������������������" << endl;
	gotoxy(40, 2);
	cout << "��   ���ϸ�  ����  ��" << endl;
	gotoxy(40, 3);
	cout << "��������������������������������������" << endl;

	cout << "������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;
	for (int i = 0; i < 25; i++) {
		cout << "��";
		for (int j = 0; j < 97; j++) cout << " ";
		cout << "��" << endl;
	}
	cout << "������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;

	cout << endl << endl;

	cout << "������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "��";
		for (int j = 0; j < 97; j++) cout << " ";
		cout << "��" << endl;
	}
	cout << "������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;

	/*gotoxy(2, 5);
	cout << "�� ���ϸ� �˻� (Press F)";
	makingBox(2, 6, 50, 3);
	makingBox(2, 10, 50, 20);
	makingBox(54, 6, 44, 24);
	gotoxy(0, 70);*/
}

/*void pokelistUI::listShow(int page) {
	for (int i = 0; i < 18; i++) {
		gotoxy(6, 11 + i);
		cout << setw(3) << setfill('0') << i;
		cout << "      " << "�̸� ����    ";
		cout << "      " << "Ư�� ����";
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
	case 'f': // �˻�

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

