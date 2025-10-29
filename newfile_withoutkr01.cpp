#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//???
//int summa2();
//int main()
//{
//	summa2();
//}
//void summa2()
//{
//	int x, y, z;
//	int s;
//	cin >> x >> y >> z;
//	s = x + y + z;
//	cout << s;
//}

//int summa1()
//{
//	int x, y, z;
//	cin >> x >> y >> z;
//	return x + y + z;
//}
//int main()
//{
//	cout << summa1();
//}

//int summa(int &x, int &y, int &z)
//{
//	return x + y + z;
//}
//int main()
//{
//	int x, y, z;
//	cin >> x >> y >> z;
//	cout << summa(x, y, z);
//}

//int summa(int a, int b, int c)
//{
//	return a + b + c;
//}
//int main()
//{
//	int x, y, z;
//	cin >> x >> y >> z;
//	cout << summa(x, y, z);
//}

//bool Prost(int x)
//{
//	int i;
//	for (i = 2; i < x; i++)
//		if (x % i == 0 && x > 2) return 1;
//	return 0;
//}
//int main()
//{
//	int a[3][3] = { {1,2,3},{4,5,6,},{7,8,9} }, i, j, n, s = 0;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			cin >> a[i][j];
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			if (i < j && Prost(a[i][j]) == 0) s++;
//	cout << s;
//}

//int Uno(int x)
//{
//	int k = 0;
//	while (x != 0)
//	{
//		if (x % 10 == 1) k++;
//		x /= 10;
//	}
//	return k;
//}
//int main()
//{
//	int a[3][3] = { {1,2,13},{4,5,6},{17,8,9} }, i, j, n = 3, s = 0;
//	for (i = 0; i < n; i++)
//		if (Uno(a[i][n - (i + 1)]) == 1) s += a[i][n-(i+1)];
//	cout << s;
//}

int Pass(int x)
{
	int k = 0;
	while (x != 0)
	{
		if (x%3==0) k++;
		x /= 10;
	}
	return k;
}
int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} }, i, j, n = 3, s = 0;
	for (i = 0; i < n; i++)
		if (Pass(a[i][n - (i + 1)]) == 1) s += a[i][n - (i + 1)];
	cout << s;
}