#include <iostream>
#include <cmath>

using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a[2][3], n, m;
//	int b[3]; //сумма
//	cin >> n >> m;
//	cout << "Числа" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int k = 0;
//	for (int i = 0; i < n; i++)
//	{
//		k = 0;
//		for (int j = 0; j < m; j++)
//		{
//			//if (j % 2 != 0 && a[i][j] % 2 == 0) k++;
//			//cout << a[i][j] << endl;
//			//cout << a[j][i] << endl;
//			k = k + a[i][j];
//		}
//	}
//	cout << k << endl;
//}

//int main() что-то не функционирует
//{
//	setlocale(LC_ALL, "Rus");
//	int a[3][3], n, m;
//	int b[3]; //сумма
//	int mx = a[0][0];
//	int k = 0;
//	cin >> n >> m;
//	cout << "Числа" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j]) k++;
//		}
//	}
//	//int k = 0;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	k = 0;
//	//	for (int j = 0; j < m; j++)
//	//	{
//	//		if (i = j) k++;
//	//	}
//	//}
//	cout << k << endl;
//}

//int  main()
//{
//	setlocale(LC_ALL, "Rus");
//	
//	const int n = 8;
//	int k[n][n];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			//k[i][j] = (i + j) % 2;
//			//if ((i + j) % 2 == 0) cout << " ";
//			//else
//				//cout << char(219);
//				k[i][j]=char(0xFF);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << k[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

int  main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 8;
	int k[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//k[i][j] = (i + j) % 2;
			if (i=j) cout << "0";
			//else
				//cout << char(219);
			k[i][j] = char(219);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << k[i][j] << " ";
		}
		cout << endl;
	}
}