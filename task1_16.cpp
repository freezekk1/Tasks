#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, d, x, R;
	cout << "Enter 3 numbers (a, b, c, d, x, R): " << endl;
	cin >> a >> b >> c >> d >> x >> R;

	double ex_a = a / (b * c);
	double ex_b = (a * b) / c;
	double ex_c = (a * c) * b;
	double ex_d = a + (b/c);
	double ex_g = (a + b) / c;
	double ex_z = a + b / (b + c);
	double ex_i = (a + b) / (b + c); 
	double ex_k = a / sin(b);
	double ex_l = 0.5 * a * b * sin(x);
	double ex_m = (2 * b * c * cos(a/2)) / (b + c);
	double ex_n = 4 * R * sin(a/2) * sin(b/2) * sin(c/2);
	double ex_e = (a * x + b) / (c * x + d);
	double ex_f = 2 * sin((a + b) / 2) * cos((a-b) / 2);
	double ex_s = abs(2 * sin(-3 * abs(x / 2)));


	cout << "a) " << ex_a << endl;
	cout << "б) " << ex_b << endl;
	cout << "в) " << ex_c << endl;
	cout << "г) " << ex_d << endl;
	cout << "ж) " << ex_g << endl;
	cout << "д) " << ex_z << endl;
	cout << "з) " << ex_i << endl;
	cout << "и) " << ex_k << endl;
	cout << "к) " << ex_l << endl;
	cout << "л) " << ex_m << endl;
	cout << "м) " << ex_n << endl;
	cout << "н) " << ex_e << endl;
	cout << "e) " << ex_f << endl;
	cout << "o) " << ex_s << endl;
	
	return 0;
}