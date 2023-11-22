#include <iostream>

using namespace std;

void transition(int x, int y, int x1, int y1)
{
    int matrix1[3][3] = {{1, 0, x1}, {0, 1, y1}, {0, 0, 1}};

    int matrix2[3] = {x, y, 1};

    int hasil[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Translasi\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix1[i][j];
        }
        cout << "\n";
    }

    cout << "\nMatrix Awal\n";

    for (int i = 0; i < 3; ++i)
    {
        cout << matrix2[i] << endl;
    }

    cout << "\nMatrix Hasil\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << hasil[i] << endl;
    }
}

void rotate()
{
}

void scale()
{
}

int main()
{
    int x, y, x1, y1;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;

    cout << "Masukkan nilai Translasi x : ";
    cin >> x1;
    cout << "Masukkan nilai Translasi y : ";
    cin >> y1;

    transition(x, y, x1, y1);

    return 0;
}