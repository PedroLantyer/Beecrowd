#include <cstdio>
#include <iostream>
 
int main() {
    int hours = 0,seconds,minutes = 0;
    std::cin >> seconds;
    while (seconds >= 3600)
    {
        hours ++;
        seconds -= 3600;
    }
    while (seconds >= 60)
    {
        minutes ++;
        seconds -= 60;
    }
    printf("%d:%d:%d\n", hours,minutes,seconds);
    return 0;
}