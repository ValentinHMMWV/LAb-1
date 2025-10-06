#include <iostream>
using namespace std;
#include <cmath>
int main()
{ 
	//задача begin 5
	//декларація змінних
	float  V, S, a ;
	cout << "\n___begin___5" << endl;

	//ввод змінної a
	cout << "Enter a=";
	cin >> a;

	//розрахунок результату
	V = pow(a,3);			//об'єм куба
	S = 6 * pow(a,2) ;			//площа поверхні

	//вивід результату
	cout << "volume cube" << V << std::endl;
	cout << "area cube" << S << std::endl;



	//задача begin 10
	//декларація змінних
	float R1, R2, S1, S2, S3;
	cout << "\n___begin 10___" << endl;

	R1 > R2;

	//ввод зміноої R1
	cout << "Enter R1=";
	cin >> R1;

	//ввод змінної R2
	cout << "Enter R2=";
	cin >> R2;

	const double pi = 3.14;

	//розрахунок результату
	S1 = pi * pow(R1, 2);		// area 1
	S2 = pi * pow(R2, 2);		// area 2
	S3 = S1 - S2;				// are 3

	//вивід результату
	cout << "area 1=" << S1 << endl;
	cout << "area 2=" << S2 << endl;
	cout << "area 3=" << S3 << endl;

	return 0;
}
