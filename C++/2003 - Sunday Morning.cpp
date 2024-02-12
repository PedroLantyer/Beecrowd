#include <iostream>
 
int main()
{
 
    int hours,minutes, bus_time = (8*60), end_time, late;
    char waste;
    while(scanf("%d%c%d", &hours, &waste, &minutes) != EOF)
    {
        end_time = minutes+(hours*60)+60;
        late = end_time-bus_time;
        if (late < 0)
        {
            late = 0;
        }
        printf("Atraso maximo: %d\n",late);
    }
    return 0;
}