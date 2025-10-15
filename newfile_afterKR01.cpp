#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	const int n = 10;
//	int k[n][n];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i = j) cout << "0" << " ";
//			k[i][j] = char(0xFF);
//		}
//		cout << endl;
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

int main()
{
	setlocale(LC_ALL, "Rus");

	const int n=7;
	int k[n][n];
	int a1 = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i < n / 2)-1 && j >= n / 2 && j >= n - i - 1 && j >= i && i >= n - j - 1)
			//if (i < n / 2 && j >= n / 2 && i >= n - j - 1)
			if (((i < n / 2) + 1 && j >= n / 2 && j >= n - i - 1 && j >= i) || ((i >= n / 2) && (j <= n / 2)+1 && (j <= n - i - 1) && (j>=i)+1))
			{
				cout << "0" << " ";
			}
			else
			{
				k[i][j] = char(0xFF);
				cout << char(0xFF) << " ";
			}
		}
		cout << endl;
	}
}