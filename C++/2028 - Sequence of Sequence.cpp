#include <iostream>
#include <string>

void build_sequence(int n,int sequence_num)
{
    if (n == 0)
    {
        printf("Caso %d: 1 numero\n",sequence_num);
        std::cout << 0 << std::endl << std::endl;
        return;
    }
    
    std::string result;
    int count = 0;

    for(int i = 0; i <= n; i++)
    {
        if(i <= 1)
        {
            result += std::to_string(i) + " ";
            count ++;
        }
        else
        {
            for(int j = 0; j < i; j++)
            {
                result += std::to_string(i) + " ";
                count ++;
            }
        }
    }

    result.pop_back(); //REMOVE ADDITIONAL WHITESPACE AT THE END OF THE STRING
    
    printf("Caso %d: %d numeros\n",sequence_num,count);
    std::cout << result << std::endl << std::endl;
}

int main()
{
    int num, sequence_num = 0;
    while(scanf("%d",&num) != EOF)
    {
        sequence_num++;
        build_sequence(num,sequence_num);
    }
    return 0;
}