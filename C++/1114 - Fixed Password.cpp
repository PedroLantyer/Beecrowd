#include <iostream>
using namespace std;
 
int main() {
    string s;
    bool stop = false;
    while (stop != true)
    {
        cin >> s;
        if (s != "2002")
        {
            cout << "Senha Invalida\n";
        }
        else
        {
            cout << "Acesso Permitido\n";
            stop = true;
        }
    }
    return 0;
}