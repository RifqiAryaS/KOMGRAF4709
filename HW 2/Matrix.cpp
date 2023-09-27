#include <iostream>

using namespace std;

void pertambahan()
{
}
int main()
{
    int matrix1[2][2] = {{1, 3}, {2, 4}};
    int matrix2[2][2] = {{1, 0}, {1, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "matrix1[" << i << "][" << j << "]"
                 << " = " << matrix1[i][j] << " \n";
        }
    }

    return 0;
}