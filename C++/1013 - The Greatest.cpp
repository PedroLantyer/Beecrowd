#include <iostream>
#include <functional>
#include <algorithm>
 
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int arr[] = {a,b,c};
    int length = (sizeof(arr)/sizeof(int));
    std::sort(arr,arr + length, std::greater<int>());
    std::cout << arr[0] << " eh o maior\n";
    return 0;
}