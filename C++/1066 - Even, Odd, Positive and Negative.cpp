#include <iostream>
using namespace std;
 
int main() {
    int n1,n2,n3,n4,n5;
    int counter[] = {0,0,0,0};
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int values[] = {n1,n2,n3,n4,n5};
    int len = sizeof(values)/sizeof(int);
    for (int i = 0; i < len; i++)
    {
        if (abs(values[i])%2 == 0)
        {
            counter[0]++;
        }
        else if (abs(values[i])%2 == 1)
        {
            counter[1]++;
        }
        if (values[i] > 0)
        {
            counter[2]++;
        }
        else if(values[i] < 0)
        {
            counter[3]++;
        }
    }
    string text[] = {"valor(es) par(es)","valor(es) impar(es)","valor(es) positivo(s)", "valor(es) negativo(s)"};
    for (int i = 0; i < 4; i++)
    {
        cout << counter[i] << " " << text[i] << endl;
    }
    return 0;
}