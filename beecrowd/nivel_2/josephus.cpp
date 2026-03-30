#include <iostream>
#define MAXN 10001




int main(){
    int NC, n, k;
    std::cin >> NC;
    for (int j = 0; j< NC; j++)
    {
        std::cin >> n >> k;
        int pool[MAXN];
        for(int i = 1; i<n; i++){
            pool[i] = i+1;
        }
        pool[n] = 1;
        int prox = n;
        int antecessor;
        for (int i = 0; i < k; i++)
            {
                antecessor = prox;
                prox = pool[prox];
            }
        while (n>1)
        {
            pool[antecessor] = pool[prox];
            for (int i = 0; i < k; i++)
            {
                antecessor = prox;
                prox = pool[prox];
            }
            n--;
        }
        std::cout << "Case "<< j+1 << ": " << prox << std::endl;
    }
    
    return 0;
}