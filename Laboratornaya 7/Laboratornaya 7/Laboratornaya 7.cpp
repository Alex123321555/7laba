#include <iostream>
#include <string>

using namespace std;
// 13.Найти минимум из сумм элементов строк

int main()
{
    int A[100][100];
    int n;
    int m;
    int min = 99999999;

    cout << "Vvedite kol-vo strok" << endl;
    cin >> n;
    cout << "Vvedite kol-vo stolbcov" << endl;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        cout << "Vvedite elementy " << i + 1 << " stroki" << endl;
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }


    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += A[i][j];
        }

        if (sum < min)
            min = sum;
    }
    cout << "Minimum = " << min << endl;

    system("pause");
}

