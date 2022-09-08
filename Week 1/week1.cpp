#include <iostream>
using namespace std;

int main()
{
	/*cout << "너비를 입력하세요 : ";
	int width, height;
	cin >> width;
	cout << "높이를 입력하세요 : ";
	cin >> height;
	cout << "면적은 " << width * height;*/

	/*cout << "변수 출력하기" << endl;
	int num;
	cout << "정수 출력하기 : ";
	cout << "정수형 사이즈 출력하기 : " << sizeof(num) << endl;

	cout << numeric_limits<int>::max() << " " << numeric_limits<int>::max() + 1 << endl;*/

	/*int8_t num0 = 1;
	int16_t num1 = 1;
	int32_t num2 = 1;
	cout << "정수형 사이즈 출력하기 : " << sizeof(num0) << endl;
	cout << "정수형 사이즈 출력하기 : " << sizeof(num1) << endl;
	cout << "정수형 사이즈 출력하기 : " << sizeof(num2) << endl;*/

	// unsigned int
	/*int i = 1;
	unsigned int ui = 1u;
	long int longnum = 1L;
	long long int longlongnum = 1LL;
	unsigned long long int ulonglongnum = 11uLL;*/

	//float f = 1.0f;
	//double d = 1.0;
	//long double ld = 1.0;

	/*int decimal = 11;
	int octal = 021;
	int hexa = 0x11;
	int binary = 0b11;
	cout << decimal << " " << octal << " " << hexa << " " << binary;*/

	/*cout.precision(16);
	cout << 4.0 / 3.0 << endl;*/

	/*float f1 = 0.1;
	float f2 = 0.02f * 5.0f;
	cout.precision(16);
	cout << f1 << endl;
	cout << f2 << endl;
	if (f1 == f2)
		cout << "equal" << endl;
	else cout << "Not equal" << endl;*/

/*	float f1 = 1.0;
	float f2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	if (f1 == f2)
		cout << "equal" << endl;
	else cout << "Not equal" << endl;*/ 

	/*double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;
	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << posinf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isinf(nan) << endl;
	cout << 1.0 << " " << std::isinf(1.0) << endl;*/

	//char ch1 = 'a';
	//char ch2 = 97;
	//cout << int(ch1) << endl;
	//cout << ch2 << endl;

	/*cout << "hello world";
	cout << '\n';
	cout << '\a';
	cout << "abc" << "\tdef" << endl;*/

	/*bool b = true;
	bool b2 = false;
	cout.setf(ios_base::boolalpha);
	cout << b << endl;
	cout << b2 << endl;*/

	//bool z;
	//cout.setf(ios_base::boolalpha);
	//cout << ((1 > 2) ? true : false) << endl;

	int num0 = 0, num1(1);
	cout << "num0=0,num=1 \n";
}