#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int counter = 0; 
    double sum = 0;
    double n1,n2,n3,n4,n5,n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    double values[] = {n1,n2,n3,n4,n5,n6};
    int len = sizeof(values)/sizeof(double);
    for (int i = 0; i < len; i++)
    {
        if (values[i] > 0)
        {
            counter++;
            sum = sum + values[i];
        }
    }
    double avg = (sum/counter);
    cout << counter << " valores positivos\n";
    cout << fixed << setprecision(1) << avg << endl;
    return 0;
}