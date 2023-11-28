#include <iostream>
using namespace std;
 
int main() {
    bool stop = false;
    while (stop != true)
    {
        int counter = 0;
        double avg,in,arr[2];
        while (counter < 2)
        {
            cin >> in;
            if ((in >- 0) && (in <= 10))
            {
                arr[counter] = in;
                counter ++;
            }
            else
            {
                cout << "nota invalida\n";
            }
        }
        avg = ((arr[0]+arr[1])/2);
        printf("media = %.2f\n", avg);
        bool check = false;
        int userin;
        while (check != true)
        {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> userin;
            switch (userin)
            {
            case 1:
                check = true;
                break;
            case 2:
                stop = true;
                check = true;
            default:
                break;
            }
        }
    }
    return 0;
}