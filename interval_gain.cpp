#include <vector>
#include <algorithm>
#include <ranges>
using namespace std;
int max(int a, int b) {
    return a > b ? a : b;
}
struct Intervalo {
    int start, end, valor;
};

vector<Intervalo> intervalos;
void solucao(){
    sort(intervalos.begin(), intervalos.end(), [](const Intervalo& a, const Intervalo& b){
        return a.end < b.end;
    });
    vector<int> dp(intervalos.size());
    dp[0] = intervalos[0].valor;
    
    for (int i = 1; i < intervalos.size() ; i++)
    {
        int aux = i-1;
        while(aux >= 0 && intervalos[i].start < intervalos[aux].end){
            aux--;
        }
        
        dp[i] = aux < 0 ? max(intervalos[i].valor, dp[i-1]) : max(dp[aux] + intervalos[i].valor, dp[i-1]);

    }
    
}