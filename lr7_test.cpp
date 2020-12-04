
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout <<"Введите символ"<<endl;
	char ch;
	cin >> ch;
	cout << "Выберете направление" << endl;
	cout << "-> - 1 \t" << "| - 2 \t" << endl;
	int line;
	cin >> line;
	cout << "Введите кол-во символов" << endl;
	int numb;
	cin >> numb;
	int a = 1;
	if (line == 1) {
		while (a <= numb) {
			cout << ch;
			a++;
		}
	}
	else {
		while (a <= numb) {
			cout << ch<<endl;
			a++;
		}
	}
}
