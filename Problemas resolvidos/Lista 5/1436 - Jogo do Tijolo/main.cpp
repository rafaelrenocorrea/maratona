#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, jogador;
    vector <int> equipe;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> jogador;

            equipe.push_back(jogador);
        }

        sort(equipe.begin(), equipe.end());

        cout << "Case " << i + 1 << ": " << equipe[n / 2] << endl;

        while(!equipe.empty()){
            equipe.pop_back();
        }
    }

    return 0;
}