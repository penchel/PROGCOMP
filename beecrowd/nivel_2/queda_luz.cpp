#include <iostream>

#define MAXN 10001
int josephus(int n, int k){
    int pool[MAXN];
    for(int i = 1; i<n; i++){
        pool[i] = i+1;
    }
    pool[n] = 1;
    int prox = 1;
    int antecessor = n;
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

    return prox;
}
int main(){
    
    int N = 0;
    std::cin >> N;
    while(N > 0){
        int i = 1;
        while (josephus(N, i) != 13) i++;
        std::cout << i << std::endl;
        std::cin >> N;
    }
    return 0;
}