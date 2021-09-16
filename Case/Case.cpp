#include<iostream>
using namespace std;
void case1();
void case5();
void case6();
void case3();
void case16();
int main() {
	case3();
}
void case1() {
	int day;
	cout << "Enter the number of the day(1-7):";
	cin >> day;
	switch (day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tueasday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;

	default:
		break;
	}
}
void case5() {
	float A, B;
	char action;
	cout << "Enter two numbers:";
	cin >> A >> B;
	cout << "Enter the action(+,-,*,/)";
	cin >> action;
	switch (action)
	{
	case '+':
		cout << A + B;
		break;
	case'-':
		cout << A - B;
		break;
	case'*':
		cout << A * B;
		break;
	case'/':
		cout << A / B;
	default:
		break;
	}

}
void case6() {
	float length;
	int choose;
	cout << "Enter the length:";
	cin >> length;
	cout << "Enter the unit of measurement(1-dm;2-km;3-m;4-mm;5-sm):";
	cin >> choose;
	switch (choose) {
	case 1:
		cout << length / 10 << "m";
		break;
	case 2:
		cout << length * 1000 << "m";
		break;
	case 3:
		cout << length << "m";
		break;
	case 4:
		cout << length / 1000 << "m";
		break;
	case 5:
		cout << length / 100;
		break;
	default:
		break;
	}

}
void case16() {
	int year;
	int help;
	cout << "Enter the age:";
	cin >> year;
	help = year % 10;
	switch (help)
	{
	case 1:
		cout << year << "god";
		break;
	case 0:
		cout << year << "let";
	case 2:
		cout << year << "goda";
		break;
	case 3:
		cout << year << "goda";
		break;
	case 4:
		cout << year << "goda";
		break;
	case 5:
		cout << year << "let";
		break;
	case 6:
		cout << year << "let";
		break;
	case 7:
		cout << year << "let";
		break;
	case 8:
		cout << year << "let";
		break;
	case 9:
		cout << year << "let";
		break;
	default:
		break;
	}
}
void case3() {
	int number;
	cout << "Enter the number of the month:";
	cin >> number;
	switch (number)
	{
	case 1:
		cout << "Zima";
		break;
	case 2:
		cout << "Zima";
		break;
	case 3:
		cout << "Vesna";
		break;
	case 4:
		cout << "Vesna";
		break;
	case 5:
		cout << "Vesna";
		break;
	case 6:
		cout << "Lito";
		break;
	case 7:
		cout << "Lito";
		break;
	case 8:
		cout << "Lito";
		break;
	case 9:
		cout << "Osin";
		break;
	case 10:
		cout << "Osin";
		break;
	case 11:
		cout << "Osin";
		break;
	case 12:
		cout << "Zima";
		break;
	default:
		break;
	}
}