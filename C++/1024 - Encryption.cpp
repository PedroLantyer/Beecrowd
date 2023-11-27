#include <iostream>
#include <ctype.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int media,n;
    string str1;
    cin >> n;
    cin.ignore(256,'\n');
    for (int i = 1; i < n+1; i++)
    {
        getline(cin, str1);
        int len = str1.length();
        if (len % 2 == 0)
        {
            media = (len/2)+1;
        }
        else
        {
            media = (len/2)+1;
        }
        for (int i = 0; i < len; i++)
        {
            if (str1[i] != ' ' && isalpha(str1[i]))
            {
                str1[i] += 3;
            }
            
        }
        reverse(str1.begin(),str1.end());
        for (int i = (media-1); i < len; i++)
        {
            str1[i] --; 
        }
        cout << str1 << endl;
    }
    return 0;
}