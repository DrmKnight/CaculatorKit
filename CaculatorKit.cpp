#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void WelPag(), PriSel(), StatSel(), EquaSel(), CoorSel(), PaCSel();
void Varc(), Aver(), LiI1U(), LiI2U();

int main() {
	WelPag();
	return 0;
}

void WelPag() {
	cout << "任意键继续，Q退出\n";
	printf("");
	if (getchar() == 'Q')
		return;
	PriSel();
	WelPag();
}

void PriSel() {
	system("cls");
	
	printf("输入1进入方程计算器\n");
	printf("输入2进入统计学计算器\n");
	printf("输入3进入坐标计算器\n");
	printf("输入4进入排列组合计算器\n");
	Printf("输入5进入计算器\n")
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		EquaSel();
	else if (option == 2)
		StatSel();
	else if (option == 3)
		CoorSel();
	else if (option == 4 )
		PaCSel();
	else PriSel();
	PriSel();
	return;
}

void StatSel() {
	system("cls");
	printf("1方差\t2平均数\t0返回\n");
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
	printf("1一元一次\t2一元二次\t0返回\n");
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
	cout << "方差\n1报错\n";
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
	cout << "平均数\n1报错\n";
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
	cout << "一元一次\n1报错\n";
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
	cout << "一元二次\n1报错\n";
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
