#include <iostream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество пассажирова на автовокзале: " << endl;
	cin >> n;
	n = n % 50;
	cout << "В последнем автобусе будет " << 50 - n << " свободных мест(а).";
	return 0;
}
