#include <iostream>
using namespace std;

bool isPalindrome(int num) {
int reverse_num = 0, temp_num = num;
while(temp_num > 0) {
reverse_num = reverse_num*10 + temp_num%10;
temp_num /= 10;
}
return reverse_num == num;
}

int main() {
int num;
cout << "������� �����: ";
cin >> num;
if(isPalindrome(num))
cout << num << " - ��� ������������ �����";
else
cout << num << " - ��� �� ������������ �����";
return 0;
}
