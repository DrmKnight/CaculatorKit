#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void WelPag(), PriSel(), StatSel(), EquaSel(), Varc(), Aver(), LiI1U(), LiI2U();

int main() {
	WelPag();
	return 0;
}

void WelPag() {
	cout << "�����������Q�˳�\n";
	if (getchar() == 'Q')
		return;
	PriSel();
	WelPag();
}

void PriSel() {
	system("cls");
	printf("1ͳ��ѧ\t2����\t3����ϵ\t0����\n");
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		StatSel();
	else if (option == 2)
		EquaSel();
	else PriSel();
	PriSel();
	return;
}

void StatSel() {
	system("cls");
	printf("1����\t2ƽ����\t0����\n");
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		Varc();
	else if (option == 2)
		Aver();
	else StatSel();
	StatSel();
	return;
}

void EquaSel() {
	system("cls");
	printf("1һԪһ��\t2һԪ����\t0����\n");
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		LiI1U();
	else if (option == 2)
		LiI2U();
	else EquaSel();
	return;
}

void Varc(){
	system("cls");
	cout << "����\n1����\n";
	int m;
	cin >> m;
	if (m == 1) Varc();
	else cout << "Result\n";
	cout << "Back/Resume\n";
	for (;;) {
		char option;
		cin >> option;
		if (option == 'B')
			return;
		else if (option == 'R')
			Varc();
		else continue;
	}
	return;
}

void Aver()
{
	system("cls");
	cout << "ƽ����\n1����\n";
	int m;
	cin >> m;
	if (m == 1) Aver();
	else cout << "Result\n";
	cout << "Back/Resume\n";
	for (;;) {
		char option;
		cin >> option;
		if (option == 'B')
			return;
		else if (option == 'R')
			Aver();
		else continue;
	}
	return;
}

void LiI1U()
{
	system("cls");
	cout << "һԪһ��\n1����\n";
	int m;
	cin >> m;
	if (m == 1) LiI1U();
	else cout << "Result\n";
	cout << "Back/Resume\n";
	for (;;) {
		char option;
		cin >> option;
		if (option == 'B')
			return;
		else if (option == 'R')
			LiI1U();
		else continue;
	}
	return;
}

void LiI2U()
{
	system("cls");
	cout << "һԪ����\n1����\n";
	int m;
	cin >> m;
	if (m == 1) LiI2U();
	else cout << "Result\n";
	cout << "Back/Resume\n";
	for (;;) {
		char option;
		cin >> option;
		if (option == 'B')
			return;
		else if (option == 'R')
			LiI2U();
		else continue;
	}
	return;
}
