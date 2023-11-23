#include <stdio.h>
#include <conio.h>
#include <iostream>

#define SQR(x) ((x)*(x))
#define MAX(x, y, z) (((x) - (y)) > ((y) - (z)) ? ((x) - (y)) : ((y) - (z)))
#define MIN(x, y, z) ((SQR((x) - (z))) > ((x) - (y)) ? (SQR((x) - (z))) : ((x) - (y)))
#define PRINTR std::wcout << L"w=" << w << std::endl;
int main() {
    double x, y, z, w;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "z = ";
    std::cin >> z;

    if (z > 1) {
        w = MAX(x, y, z);
    }
    else {
        w = MIN(x, y, z);
    }

    PRINTR;
    return 0;
}
