#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
 
int main() {
 
    int n, x;
    std::vector<int> names;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        names.push_back(x);
    }
    int index = std::distance(names.begin(),std::min_element(names.begin(),names.end())) + 1;
    std::cout << index << std::endl;
    return 0;
}