#include <iostream>
#include <ctime>
using namespace std;
int n;
main()
{
	cin >> n;
	double **m = new double*[n];
	for (int i = 0; i < n; i++)
		m[i] = new double[n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			cout << "m[" << i << "][" << j << "]=";
			cin >> m[i][j];
		}
	}
}
