#include <iostream>
#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
    string s;
    cout << "������� ������� ������ ������: ";
    getline(cin, s);
    istringstream is(s);
    int n = 0, min = 1000, i = 0;
    while (is >> n)
    {
        i++;
        min = n < min ? n : min;
    }
    if (i >= 5)
    {
        cout << "����� �� ��� ������ �����(������): " << (i * 10. - (i * 10. * min) / 100.);
    }
    else
    {
        cout << "����� �� ��� ������ �����: " << i * 10;
    }
}
