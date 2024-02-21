#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> songs = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    int test_cases, num_a, num_b;
    
    scanf("%d", &test_cases);
    for(int i = 0; i < test_cases; i++)
    {
        scanf("%d %d", &num_a, &num_b);
        std::cout << songs[num_a+num_b] << std::endl;
    }

    return 0;
}