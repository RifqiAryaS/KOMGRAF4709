#include <iostream>

using namespace std;

void pertambahan(int matrix1[2][2], int matrix2[2][2])
{
    int hasil[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

void perkurangan(int matrix1[2][2], int matrix2[2][2])
{
    int hasil[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

void perkalianInput(int matrix1[2][2])
{
    int input[2][2];
    int hasil[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> input[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                hasil[i][j] += matrix1[i][k] * input[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

void perkalian(int matrix1[2][2], int matrix2[2][2])
{
    int hasil[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                hasil[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

int main()
{
    int matrix1[2][2] = {{1, 3}, {2, 4}};
    int matrix2[2][2] = {{1, 1}, {0, 0}};

    // perkurangan(matrix1, matrix2);
    // perkalianInput(matrix1);
    perkalian(matrix1, matrix2);
    return 0;
}