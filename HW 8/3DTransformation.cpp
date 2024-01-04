#include <iostream>
#include <cmath>

using namespace std;

void transition()
{
    int x, y, z, x1, y1, z1;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;
    cout << "Masukkan nilai awal z : ";
    cin >> z;

    cout << "Masukkan nilai x1 : ";
    cin >> x1;
    cout << "Masukkan nilai y1 : ";
    cin >> y1;
    cout << "Masukkan nilai z1 : ";
    cin >> z1;

    int matrix1[4][4] = {{1, 0, 0, x1}, {0, 1, 0, y1}, {0, 0, 1, z1}, {0, 0, 0, 1}};

    int matrix2[4] = {x, y, z, 1};

    int hasil[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Translasi\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix1[i][j];
        }
        cout << "\n";
    }

    cout << "\nMatrix Awal\n";

    for (int i = 0; i < 4; ++i)
    {
        cout << matrix2[i] << endl;
    }

    cout << "\nMatrix Hasil\n";
    for (int i = 0; i < 4; ++i)
    {
        cout << hasil[i] << endl;
    }
}

void rotatex()
{
    int x, y, z;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;
    cout << "Masukkan nilai awal z : ";
    cin >> z;

    double teta;
    cout << "Masukan nilai teta: ";
    cin >> teta;

    teta = teta * 3.14159265358979323846 / 180.0;

    int matrix1[4][4] = {{1, 0, 0, 0}, {0, cos(teta), -sin(teta), 0}, {0, sin(teta), cos(teta), 0}, {0, 0, 0, 1}};

    int matrix2[4] = {x, y, z, 1};

    int hasil[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Rotasi\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix1[i][j];
        }
        cout << "\n";
    }

    cout << "\nMatrix Awal\n";

    for (int i = 0; i < 4; ++i)
    {
        cout << matrix2[i] << endl;
    }

    cout << "\nMatrix Hasil\n";
    for (int i = 0; i < 4; ++i)
    {
        cout << hasil[i] << endl;
    }
}

void rotatey()
{
    int x, y, z;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;
    cout << "Masukkan nilai awal z : ";
    cin >> z;

    double teta;
    cout << "Masukan nilai teta: ";
    cin >> teta;

    teta = teta * 3.14159265358979323846 / 180.0;

    int matrix1[4][4] = {{cos(teta), 0, sin(teta), 0}, {0, 1, 0, 0}, {-sin(teta), 0, cos(teta), 0}, {0, 0, 0, 1}};

    int matrix2[4] = {x, y, z, 1};

    int hasil[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Rotasi\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix1[i][j];
        }
        cout << "\n";
    }

    cout << "\nMatrix Awal\n";

    for (int i = 0; i < 4; ++i)
    {
        cout << matrix2[i] << endl;
    }

    cout << "\nMatrix Hasil\n";
    for (int i = 0; i < 4; ++i)
    {
        cout << hasil[i] << endl;
    }
}

void rotatez()
{
    int x, y, z;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;
    cout << "Masukkan nilai awal z : ";
    cin >> z;

    double teta;
    cout << "Masukan nilai teta: ";
    cin >> teta;

    teta = teta * 3.14159265358979323846 / 180.0;

    int matrix1[4][4] = {{cos(teta), -sin(teta), 0, 0}, {sin(teta), cos(teta), 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};

    int matrix2[4] = {x, y, z, 1};

    int hasil[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Rotasi\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix1[i][j];
        }
        cout << "\n";
    }

    cout << "\nMatrix Awal\n";

    for (int i = 0; i < 4; ++i)
    {
        cout << matrix2[i] << endl;
    }

    cout << "\nMatrix Hasil\n";
    for (int i = 0; i < 4; ++i)
    {
        cout << hasil[i] << endl;
    }
}
void scale()
{
    int x, y, z, x1, y1, z1;

    cout << "Masukkan nilai awal x : ";
    cin >> x;
    cout << "Masukkan nilai awal y : ";
    cin >> y;
    cout << "Masukkan nilai awal z : ";
    cin >> z;

    cout << "Masukkan nilai x1 : ";
    cin >> x1;
    cout << "Masukkan nilai y1 : ";
    cin >> y1;
    cout << "Masukkan nilai z1 : ";
    cin >> z1;

    int matrix1[4][4] = {{x1, 0, 0, 0}, {0, y1, 0, 0}, {0, 0, z1, 0}, {0, 0, 0, 1}};

    int matrix2[4] = {x, y, z, 1};

    int hasil[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hasil[i] += matrix1[i][j] * matrix2[j];
        }
    }

    cout << "Matrix Skala\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix1[i][j];
        }
        cout << "\n";
    }

    cout << "\nMatrix Awal\n";

    for (int i = 0; i < 4; ++i)
    {
        cout << matrix2[i] << endl;
    }

    cout << "\nMatrix Hasil\n";
    for (int i = 0; i < 4; ++i)
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
    cout << "2. rotate X" << endl;
    cout << "3. rotate Y" << endl;
    cout << "4. rotate Z" << endl;
    cout << "5. scale" << endl;
    cout << "Pilihanmu (1-5) = ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        transition();
        break;
    case 2:
        rotatex();
        break;
    case 3:
        rotatey();
        break;
    case 4:
        rotatez();
        break;
    case 5:
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
