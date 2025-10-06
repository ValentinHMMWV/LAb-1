#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	//Begin 26.���� �������� ����� � ������� ��� V �� / ���, 
	// �������� ����� ���� U �� / ��� (U < V).
	//��� ���� ����� �� ����� T1 ��/���, � �� ���� (����� �����) - T2 ��/���.
	//��������� ���� S, ��������� ������(���� = ��� � ��������).
	//���������, �� ��� ��� ����� ����� �������� ����� ���������� �� �������� �������� �����.

	//���������� ������
	double V, U, T1, T2;
	cout << "\n_____Begin 26_____" << endl;

	//���� ����� V
	cout << "Enter V (boat sped in still water, km/h)= ";
	cin >> V;

	//���� ����� U
	cout << "Enter U (current speed , km/h) =";
	cin >> U;

	//���� ����� T1
	cout << "Enter T1 (time on lake, hours) =";
	cin >> T1;

	cout << "Enter T2 (time on river against current, hours) =";
	cin >> T2;

	if (U >= V)
	{
		cerr << "Error: current speed U must be less than boat speed V." << endl;
		return 1;
	}

	if (V<0 || U<0 || T1<0 || T2<0)
	{ 
		cerr << "Error: speeds and times must be non-negative." << endl;
		return 1;
	}
		//����������
		double S1 = V * T1;				//distance on lake
		double S2 = (V - U) * T2;		//distance on river against current
		double S = S1 + S2;				//total distance

		//���� ����������
		cout << fixed << setprecision(3);
		cout << "distance on lake S1 =" << S1 << "km" << endl;
		cout << "distance on river against current S2 =" << S2 << "km" << endl;
		cout << "total distance S =" << S << "km" << endl;
		return 0;
	}