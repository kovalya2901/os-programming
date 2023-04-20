#include <iostream>
#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
    string s;
    cout << "¬ведите возраст членов группы: ";
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
        cout << "—умма за всю группу равна(скидка): " << (i * 10. - (i * 10. * min) / 100.);
    }
    else
    {
        cout << "—умма за всю группу равна: " << i * 10;
    }
}
