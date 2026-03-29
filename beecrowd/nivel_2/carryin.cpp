#include <iostream>
#include <string>

int main(){
    unsigned int  a, b, x;
    while((std::cin >> a >> b)){
        x = a ^ b;
        if (x < 0){
            std::cout << a << " " << b << std::endl;
        }else{
            std::cout << x << std::endl;
        }
    }
    return 0;
}