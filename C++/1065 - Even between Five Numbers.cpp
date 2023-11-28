#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int n1,n2,n3,n4,n5,counter;
    counter = 0;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int values[] = {n1,n2,n3,n4,n5};
    int len = sizeof(values)/sizeof(int);
    for (int i = 0; i < len; i++)
    {
        if (values[i]%2 == 0)
        {
            counter++;
        }

    }
    cout << counter << " valores pares\n";
    return 0;
}