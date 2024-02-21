#include <iostream>
#include <iomanip>

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    printf("A = %d, B = %d, C = %d\n", x, y, z);
    printf("A = %10d, B = %10d, C = %10d\n", x, y, z);
    printf("A = %010d, B = %010d, C = %010d\n", x, y, z);
    printf("A = %-10d, B = %-10d, C = %-10d\n", x, y, z);

    return 0;
}