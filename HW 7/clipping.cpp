#include <iostream>

// Ukuran Window
const int LEFT = 50;
const int RIGHT = 250;
const int BOTTOM = 50;
const int TOP = 150;

// Code Region
const int INSIDE = 0;
const int LEFT_EDGE = 1;
const int RIGHT_EDGE = 2;
const int BOTTOM_EDGE = 4;
const int TOP_EDGE = 8;

// Perhitungan Region
int computeRegionCode(int x, int y)
{
    int code = INSIDE;

    if (x < LEFT)
    {
        code |= LEFT_EDGE;
    }
    else if (x > RIGHT)
    {
        code |= RIGHT_EDGE;
    }

    if (y < BOTTOM)
    {
        code |= BOTTOM_EDGE;
    }
    else if (y > TOP)
    {
        code |= TOP_EDGE;
    }

    return code;
}

// Fungsi clip
void cohenSutherlandClip(int x1, int y1, int x2, int y2)
{
    int code1 = computeRegionCode(x1, y1);
    int code2 = computeRegionCode(x2, y2);

    while (code1 != INSIDE || code2 != INSIDE)
    {
        if (code1 & code2)
        {
            // Terletak diluar window
            std::cout << "Garis terletak di luar Viewport." << std::endl;
            return;
        }

        int codeOut;
        int x, y;

        if (code1 != INSIDE)
        {
            codeOut = code1;
        }
        else
        {
            codeOut = code2;
        }

        // Perpotongan
        if (codeOut & TOP_EDGE)
        {
            x = x1 + (x2 - x1) * (TOP - y1) / (y2 - y1);
            y = TOP;
        }
        else if (codeOut & BOTTOM_EDGE)
        {
            x = x1 + (x2 - x1) * (BOTTOM - y1) / (y2 - y1);
            y = BOTTOM;
        }
        else if (codeOut & RIGHT_EDGE)
        {
            y = y1 + (y2 - y1) * (RIGHT - x1) / (x2 - x1);
            x = RIGHT;
        }
        else if (codeOut & LEFT_EDGE)
        {
            y = y1 + (y2 - y1) * (LEFT - x1) / (x2 - x1);
            x = LEFT;
        }

        // Memberikan titik potong
        if (codeOut == code1)
        {
            x1 = x;
            y1 = y;
            code1 = computeRegionCode(x1, y1);
        }
        else
        {
            x2 = x;
            y2 = y;
            code2 = computeRegionCode(x2, y2);
        }
    }

    std::cout << "Clipped line: (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2 << ")" << std::endl;
}

int main()
{
    int x1, y1, x2, y2;

    std::cout << "Masukkan nilai x1 : ";
    std::cin >> x1;
    std::cout << "Masukkan nilai y1 : ";
    std::cin >> y1;
    std::cout << "Masukkan nilai x2 : ";
    std::cin >> x2;
    std::cout << "Masukkan nilai y2 : ";
    std::cin >> y2;

    cohenSutherlandClip(x1, y1, x2, y2);

    return 0;
}
