#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char Alphabet;
	int vowel = 0, consonants = 0;

	cout << "�����ڸ� �Է��ϰ� Ctrl+Z�� ġ����" << endl;

	while (cin >> Alphabet) {
		cin >> Alphabet;
		switch (Alphabet) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vowel++;
			break;
		default:
			consonants++;
			break;
		}
	}
	cout << "���� : " << vowel << endl;
	cout << "���� : " << consonants << endl;
}
