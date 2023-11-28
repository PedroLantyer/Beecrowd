#include <iostream>
using namespace std;
 
int main() {
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
}