#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

int Select000();
int Select001(), Select002();
int Select011(), Select012();
int Select021(), Select022();
int SampleFunction();

int main() {
	system("cls");
	printf("任意键继续或Q退出\n");
	if(getchar() == 'Q')
		return 0;
	Select000();
	return 0;
}

int Select000() {
	for (;;) {
		system("cls");
		printf("001,002\n");
		int option;
		cin >> option;
		if (option == 1) {
			for (;;) {
				if (Select001() == 1)
					break;
			}
		}
		else if (option == 2)
			for (;;) {
				if (Select002() == 1)
					break;
			}
		else continue;
	}
	return -1;
}

int Select001() {
	for (;;) {
		system("cls");
		printf("011,012,0\n");
		int option;
		cin >> option;
		if (option == 0)
			return 1;
		else if (option == 1) {
			for (;;) {
				if (Select011() == 1)
					break;
			}
		}
		else if (option == 2) {
			for (;;) {
				if (Select012() == 1)
					break;
			}
		}
		else continue;
	}
	return -1;
}

int Select002() {
	for (;;) {
		system("cls");
		printf("021,022,0\n");
		int option;
		cin >> option;
		if (option == 0)
			return 1;
		else if (option == 1) {
			for (;;) {
				if (Select022() == 1)
					break;
			}
		}
		else if (option == 2) {
			for (;;) {
				if (Select022() == 1)
					break;
			}
		}
		else continue;
	}
	return -1;
}

int Select011() {
	for (;;) {
		system("cls");
		printf("111,112,0\n");
		int option;
		cin >> option;
		if (option == 0)
			return 1;
		else if (option == 1) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else if (option == 2) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else continue;
	}
	return -1;
}

int Select012() {
	for (;;) {
		system("cls");
		printf("121,122,0\n");
		int option;
		cin >> option;
		if (option == 0)
			return 1;
		else if (option == 1) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else if (option == 2) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else continue;
	}
	return -1;
}

int Select021() {
	for (;;) {
		system("cls");
		printf("211,212,0\n");
		int option;
		cin >> option;
		if (option == 0)
			return 1;
		else if (option == 1) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else if (option == 2) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else continue;
	}
	return -1;
}

int Select022() {
	for (;;) {
		system("cls");
		printf("1,2,0\n");
		int option;
		cin >> option;
		if (option == 0)
			return 1;
		else if (option == 1) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else if (option == 2) {
			for (;;) {
				if (SampleFunction() == 1)
					break;
			}
		}
		else continue;
	}
	return -1;
}

int SampleFunction() {
	for (;;) {
		system("cls");
		cout << "Enter m & n\n";
		int m, n;
		cin >> m >> n;
		if (m > n ||m <= 0) {
			cout << "ERROR\n";
			system("pause");
			return 0;
		}
		else if (m > 0 && m < n) {
			int result = 1;
			for (int i = n; i >= n - m + 1; i--)
				result *= i;
			cout << "Answer is " << result << endl;
		}
		cout << "Back/Reenter\n";
		for (;;) {
			char option;
			cin >> option;
			if (option == 'B')
				return 1;
			else if (option == 'R')
				break;
			else continue;
		}
	}
}
