#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

void WelcPag(), PrimSel();
void StatSel(), EquaSel(), AaCSel(), SeqcSel(), CoodSel(), SolTrSel();
void LiI1U(), LiI2U(), QuI1U();
void Varc(), Aver(), Medn(), StdD(), Mode();
void Arrg(), Comb();
void APS(), GPSn(), GPSna();

void OutputSample() {
	//居中点                      |
	cout <<"┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout <<"┃              CaculatorKit               ┃\n";
	cout <<"┃                                         ┃\n";
	cout <<"┃                                         ┃\n";
	cout <<"┃                                         ┃\n";
	cout <<"┃                                         ┃\n";
	cout <<"┃                                         ┃\n";
	cout <<"┃                                         ┃\n";
	cout <<"┃                                         ┃\n";
	cout <<"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		OutputSample();
	else if (option == 2)
		OutputSample();
	else if (option == 3)
		OutputSample();
	else if (option == 4)
		OutputSample();
	else if (option == 5)
		OutputSample();
	else if (option == 6)
		OutputSample();
	else OutputSample();
	OutputSample();
}

int main() {
	WelcPag();
	return 0;
}

void WelcPag() {
	system("cls");
	//居中点                      |
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃              CaculatorKit               ┃\n";
	cout << "┃                   Copyright(c)ZhengYujie┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃       使用Ctrl+滚轮调整界面大小         ┃\n";
	cout << "┃       按下任意键继续                    ┃\n";
	cout << "┃       输入Ｑ退出程序                    ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	if (getchar() == 'Q')
		return;
	PrimSel();
	return;
}

void PrimSel() {
	system("cls");
	//居中点                      |
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃              CaculatorKit               ┃\n";
	cout << "┃  输入１进入方程计算器                   ┃\n";
	cout << "┃  输入２进入统计学计算器                 ┃\n";
	cout << "┃  输入３进入排列组合计算器               ┃\n";
	cout << "┃  输入４进入数列计算器                   ┃\n";
	cout << "┃  输入５进入坐标系计算器                 ┃\n";
	cout << "┃  输入６进入解三角形计算器               ┃\n";
	cout << "┃  输入０退出程序                         ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		EquaSel();
	else if (option == 2)
		StatSel();
	else if (option == 3)
		AaCSel();
	else if (option == 4)
		SeqcSel();
	else if (option == 5)
		CoodSel();
	else if (option == 6)
		SolTrSel();
	else PrimSel();
	PrimSel();
}

void EquaSel() {
	system("cls");
	//居中点                      |
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃              CaculatorKit               ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃  输入１进入一元一次方程计算器           ┃\n";
	cout << "┃  输入２进入二元一次方程计算器           ┃\n";
	cout << "┃  输入３进入一元二次方程计算器           ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃  输入０退回上一级                       ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		LiI1U();
	else if (option == 2)
		LiI2U();
	else if (option == 3)
		QuI1U();
	else EquaSel();
	EquaSel();
	return;
}

void LiI1U(){
	system("cls");
	cout << "               一元一次方程计算器\n";
	cout << "请依次输入ax+b=c中a、b、c的值（用空格隔开，输入后按下回车）：\n";
	double a, b, c, res;
	cin >> a >> b >> c;
	res = (c - b) / a;
	cout << "x="<< res << "\n";
	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			LiI1U();
		else continue; break;
	}
	return;
}

void LiI2U() {
	system("cls");
	cout << "       二元一次方程计算器\n";
	cout << "请依次输入\n";
	cout << "ax + by = c\n";
	cout << "dx + ey = f\n";
	cout << "中a、b、c、d、e、f的值（用空格隔开，输入后按下回车）：\n";
	double a, b, c, d, e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f; 
	a *= d; b *= d; c *= d;
	d *= a; e *= a; f *= d;
	y = (c - f) / b - e;
	x = (c - b * y) / a;
	printf("x=%lf, y=%lf", x, y);
	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			LiI2U();
		else continue; break;
	}
	return;
}

void QuI1U() {
	system("cls");
	cout << "       一元二次方程计算器\n";
	cout << "请依次输入ax^2+bx+c=0中a、b、c的值（用空格隔开，输入后按下回车）：\n";
	double a, b, c, delta;
	cin >> a >> b >> c;
	delta = b * b - 4 * a * c;
	if (delta < 0)
		cout << "函数无解";
	else if (delta == 0)
		cout << "x1=x2=" << -b / (2 * a);
	else if (delta > 0)
		cout << "x1=" << (-b + sqrt(delta)) / (2 * a) << ", x2=" << (-b - sqrt(delta)) / (2 * a);
	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			QuI1U();
		else continue; break;
	}
	return;
}

void StatSel() {
	system("cls");
	system("cls");
	//居中点                      |
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃              CaculatorKit               ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃  输入１进入平均数计算器                 ┃\n";
	cout << "┃  输入２进入中位数计算器                 ┃\n";
	cout << "┃  输入３进入方差计算器                   ┃\n";
	cout << "┃  输入４进入标准差计算器                 ┃\n";
	cout << "┃  输入５进入众数计算器                   ┃\n";
	cout << "┃  输入０退回上一级                       ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		Aver();
	else if (option == 2)
		Medn();
	else if (option == 3)
		Varc();
	else if (option == 4)
		StdD();
	else if (option == 5)
		Mode();
	else StatSel();
	StatSel();
	return;
}

void Aver() {
	system("cls");
	double N, res, temp;
	res = 0;
	cout << "               平均数计算器\n";
	cout << "请输入样本容量：";
	cin >> N;
	cout << "\n请依次输入数据（用空格隔开，输入后按下回车）：\n";
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		res += temp;
	}
	res /= N;
	cout << "平均数为" << res << "\n";

	for (;;) {
		cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			Aver();
		else continue;
		break;
	}
	return;
}

void Medn() {
	system("cls");
	int N;
	double num[500]{};
	cout << "              中位数计算器\n";
	cout << "请输入样本容量：";
	cin >> N;
	cout << "\n请依次输入数据（用空格隔开，输入后按下回车）：\n";
	for (int i = 1; i <= N; i++)
		cin >> num[i];
	for (int j = N; j >= 2; j--) {
		for (int k = 1; k <= j - 1; k++) {
			if (num[k] > num[k + 1])
				swap(num[k], num[k + 1]);
		}
	}
	if (N % 2 == 0)
		num[0] = (num[N / 2] + num[N / 2 + 1]) / 2;
	else num[0] = num[N / 2 + 1];
	cout << "中位数为" << num[0] << "\n";

	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			Medn();
		else continue;
		break;
	}
	return;
}

void Varc() {
	system("cls");
	int amt = 1;
	double num[500], total = 0, avg = 0, result = 0;
	num[0] = 0;
	cout << "         方差计算器"; 
	cout << "请输入样本容量：";
	cin >> amt;
	cout << "\n请输入数据（用空格隔开，输入后按下回车 ）：\n";
	for (int i = 1; i <= amt; i++) {
		cin >> num[i];
		total += num[i];
		num[0] += num[i] * num[i];
	}
	avg = total / amt;
	num[0] /= amt;
	result = num[0] - avg * avg;
	cout << "方差为" << result << "\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			Varc();
		else continue;
		break;
	}
	return;
}

void StdD() {
	system("cls");
	int amt = 1;
	double num[500], total = 0, avg = 0, result = 0;
	num[0] = 0;
	cout << "         标准差计算器";
	cout << "请输入样本容量：";
	cin >> amt;
	cout << "\n请输入数据（用空格隔开，输入后按下回车 ）：\n";
	for (int i = 1; i <= amt; i++) {
		cin >> num[i];
		total += num[i];
		num[0] += num[i] * num[i];
	}
	avg = total / amt;
	num[0] /= amt;
	result = num[0] - avg * avg;
	result = sqrt(result);
	cout << "标准差为" << result << "\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			StdD();
		else continue;
		break;
	}
	return;
}

void Mode() {
	system("cls");

	int N, res, temp, frq[500]{}, num[500]{};
	cout << "           众数计算器\n";
	cout << "请输入样本容量：";
	cin >> N;
	temp = 0;
	res = 0;
	cout << "\n请依次输入数据（用空格隔开，输入后按下回车）：\n";

	for (int i = 1; i <= N; i++) {
		cin >> temp;
		if (temp == 0)
			frq[0]++;
		else {
			for (int j = 1; j <= N; j++) {
				if (frq[j] == 0) {
					num[j] = temp;
					frq[j]++;
					num[0]++;
					break;
				}
				if (num[j] == temp) {
					frq[j]++;
					break;
				}
			}
		}
	}

	for (int j = num[0]; j >= 1; j--) {
		for (int k = 0; k <= j - 1; k++) {
			if (num[k] > num[k + 1]) {
				swap(num[k], num[k + 1]);
				swap(frq[k], frq[k + 1]);
			}
		}
	}

	cout << "众数为" << num[num[0]];
	for (int h = num[0] - 1; h >= 0; h--) {
		if (frq[h] == frq[num[0]])
			cout << ", " << num[h];
	}
	cout << "\n";

	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			Mode();
		else continue;
		break;
	}
	return;
}

void AaCSel() {
	system("cls");
	//居中点                      |
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃              CaculatorKit               ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃  输入１进入排列数计算器   　　　　　   ┃\n";
	cout << "┃  输入２进入组合数计算器　　　　　      ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃  输入０退回上一级                       ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		Arrg();
	else if (option == 2)
		Comb();
	else AaCSel();
	AaCSel();
	return;
}

void Arrg() {
	system("cls");
	int m, n;
	cout << "          排列数计算器\n";
	cout << "请输入n、m的值：";
	cin >> n >> m;

	if (n >= m && m > 0) {
		long long res = 1;
		for (int i = n; i >= n - m + 1; i--)
			res *= i;
		cout << "排列数为" << res << "\n";
	}
	else {
		cout << "数据无效，请重新输入！\n";
		system("pause");
		Arrg();
	}

	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			Arrg();
		else continue;
		break;
	}
	return;
}

void Comb() {
	system("cls");
	int m, n;
	cout << "          组合数计算器\n";
	cout << "请输入n、m的值：";
	cin >> n >> m;

	if (m == 0)
		cout << "组合数为1\n";
	else if (n>=m&&m>=0) {
		long long res = 1;
		for (int i = n; i >= n - m + 1; i--)
			res *= i;
		for (int j = 1; j <= m; j++)
			res /= j;
		cout << "组合数为" << res << "\n";
	}
	else {
		cout << "数据无效，请重新输入！\n";
		system("pause");
		Comb();
	}

	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			Comb();
		else continue;
		break;
	}
	return;
}

void SeqcSel() {
	system("cls");
	//居中点                      |
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃              CaculatorKit               ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃  输入１进入等差数列前n项和计算器        ┃\n";
	cout << "┃  输入２进入等比数列第n项计算器   　 　  ┃\n";
	cout << "┃  输入３进入等比数列前n项和计算器　　　　┃\n";
	cout << "┃                                         ┃\n";
	cout << "┃  输入０退回上一级                       ┃\n";
	cout << "┃                                         ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	int option;
	cin >> option;
	if (option == 0)
		return;
	else if (option == 1)
		APS();
	else if (option == 2)
		GPSn();
	else if (option == 3)
		GPSna();
	else SeqcSel();
	SeqcSel();
	return;
}

void APS() {
	system("cls");
	int a1, d, n, res;
	cout << "          等差数列前n项和计算器\n";
	cout << "请输入首项、公差、n的值：\n";
	cin >> a1 >> d >> n;

	res = n * a1 + d * (n - 1);
	cout << "\n前n项和为" << res;

	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			APS();
		else continue;
		break;
	}
	return;
}

void GPSn() {
	system("cls");
	int a1, q, n;
	cout << "          等比数列第n项计算器\n";
	cout << "请输入首项、公比、n的值：\n";
	cin >> a1 >> q >> n;

	if (q != 0 && a1 != 0) {
		int res = a1;
		for (int i = 1; i <= n; i++)
			res *= q;
		cout << "\n第n项为" << res;
	}
	else {
		cout << "数据无效，请重新输入！\n";
		system("pause");
		GPSn();
	}

	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			GPSn();
		else continue;
		break;
	}
	return;
}

void GPSna() {
	system("cls");
	double a1, q;
	int n;
	cout << "          等比数列前n项和计算器\n";
	cout << "请输入首项、公比、n的值：\n";
	cin >> a1 >> q >> n;

	if (a1 != 0 && q != 0) {
		double res, qn = 1;
		for (int i = 1; i <= n; i++)
			qn *= q;
		res = a1 * (1 - qn) / (1 - q);
		cout << "前n项和为" << res;
	}
	else {
		cout << "数据无效，请重新输入！\n";
		system("pause");
		GPSna();
	}

	cout << "\n按Ｂ退回上一级\n按Ｒ重新输入数据\n";
	for (;;) {
		char option;
		cin >> option;
		cout << "\n";
		if (option == 'B')
			return;
		else if (option == 'R')
			GPSna();
		else continue;
		break;
	}
	return;
}

void CoodSel() {
}

void SolTrSel() {
}
