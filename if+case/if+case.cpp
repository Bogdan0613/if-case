#include<iostream>
using namespace std;
void if5();
void if10();
void if17();
void if22();
void if28();
int main() {
	if5();
	cout << endl;
	if10();
	cout << endl;
	if17();
	cout << endl;
	if22();
	cout << endl;
	if28();
}
void if5() {
	int num1, num2, num3, count1 = 0, count2 = 0;
	cout << "Enter three numbers:";
	cin >> num1 >> num2 >> num3;
	if (num1 > 0) count1++;
	if (num2 > 0) count1++;
	if (num3 > 0) count1++;
	if (num1 < 0) count2++;
	if (num2 < 0) count2++;
	if (num3 < 0) count2++;
	cout << "The number of positive numbers:" << count1 << endl << "The number of negative numbers:" << count2;
}
void if10() {
	int A, B;
	cout << "Enter two numbers:";
	cin >> A >> B;
	if (A != B) {
		A = B = A + B;
		cout << "A=B=A+B=" << A;
	}
	else {
		A = B = 0;
		cout << "A=B=" << A;
	}
}
void if17() {
	int A, B, C;
	cout << "Enter three numbers:";
	cin >> A >> B >> C;
	if ((A > B && B > C) || (A < B && B < C)) {
		cout << 2 * A << endl << 2 * B << endl << 2 * C;
	}
	else {
		cout << -A << endl << -B << endl << -C;
	}
}
void if22() {
	int x, y;
	cout << "Enter the coordinates of the point(x,y):" << endl << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;
	if (x > 0 && y > 0) {
		cout << "The point is located on the first coordinate quarter";
	}
	else {
		if (x < 0 && y < 0) {
			cout << "The point is located on the third coordinate quarter";
		}
		else {
			if (x > 0 && y < 0) {
				cout << "The point is located on the fourth coordinate quarter";
			}
			else {
				if (x < 0 && y>0) {
					cout << "The point is located on the second coordinate quarter";
				}
			}
		}
	}
	
	
}
void if28() {
	int year;
	cout << "Enter the year:";
	cin >> year;
	if (	((year % 4 == 0) && (year % 100 != 0))	||	((year%100==0)&&(year%400==0))	) {
		cout << "Leap year";
	}
	else {
		cout << "Usual year";
	}
}