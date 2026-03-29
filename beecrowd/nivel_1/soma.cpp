#include <iostream>
 
int main() {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;
    std::cout << "X = " << a+b << std::endl;
    return 0;
}