#include <cstdio>
#include <iostream>
 
int main() {
    int value;
    std::cin >> value;
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int length = sizeof(notes)/sizeof(int);
    std::cout<< value << std::endl;
    for (int i = 0; i < length; i++)
    {
        int x = 0;
        while (value >= notes[i])
        {
            x++;
            value -= notes[i];
        }
        printf("%d nota(s) de R$ %d,00\n", x, notes[i]);
    }
    return 0;
}