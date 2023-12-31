#include <iostream>
#include <cmath>

using namespace std;

void transition()
{
    int x, y, x1, y1;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;

    cout << "Masukkan nilai x1 : ";
    cin >> x1;
    cout << "Masukkan nilai y1 : ";
    cin >> y1;

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
    int x, y;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;

    double teta;
    cout << "Masukan nilai teta: ";
    cin >> teta;

    teta = teta * 3.14159265358979323846 / 180.0;

    int matrix1[3][3] = {{cos(teta), -sin(teta), 0}, {sin(teta), cos(teta), 0}, {0, 0, 1}};

    int matrix2[3] = {x, y, 1};

    int hasil[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Rotasi\n";

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

void scale()
{
    int x, y, x1, y1;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;

    cout << "Masukkan nilai x1 : ";
    cin >> x1;
    cout << "Masukkan nilai y1 : ";
    cin >> y1;

    int matrix1[3][3] = {{x1, 0, 0}, {0, y1, 0}, {0, 0, 1}};

    int matrix2[3] = {x, y, 1};

    int hasil[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Skala\n";

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

int main()
{

    // cout << "Masukkan nilai awal x : ";
    // cin >> x;
    // cout << "Masukkan nilai awal y : ";
    // cin >> y;

    // cout << "Masukkan nilai x1 : ";
    // cin >> x1;
    // cout << "Masukkan nilai y1 : ";
    // cin >> y1;

    int pilih;
    char pilihan;

menu:
    cout << "Silahkan pilih menu : " << endl;
    cout << "1. transition" << endl;
    cout << "2. rotate" << endl;
    cout << "3. scale" << endl;
    cout << "Pilihanmu (1-3) = ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        transition();
        break;
    case 2:
        rotate();
        break;
    case 3:
        scale();
        break;
    default:
        cout << "Pilihan tidak valid. Coba lagi." << endl;
    }

    cout << "Ingin coba lagi (y/t)?" << endl;
    cin >> pilihan;

    if (pilihan == 'y')
    {
        goto menu;
    }

    return 0;
}
