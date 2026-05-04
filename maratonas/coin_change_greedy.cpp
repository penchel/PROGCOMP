#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int troco = 0;
    int coins_type = 0;
    cin >> troco >> coins_type;
    vector<int> coins(coins_type);
    for (auto &x :coins ) cin >> x;
    
    sort(coins.begin(), coins.end(), greater<int>());
    int i = 0;
    int count = 0;
    while (troco > 0)
    {
        while (coins[i] > troco) i++;
        int coins_now = ((int) troco / coins[i]);
        count = count+= coins_now;
        cout << coins_now << "x" <<" " << coins[i] << endl;
        troco = troco % coins[i];
    }
    cout << count << endl;
}