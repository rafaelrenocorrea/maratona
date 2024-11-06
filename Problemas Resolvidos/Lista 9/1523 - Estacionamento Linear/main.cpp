#include <bits/stdc++.h>

using namespace std;

int main() {
    int i;
    int N, K, C, S;
    int max;
    bool flag;
    stack<int> estacionamento;
 
    while(cin >> N >> K){
        if(N == 0 && K == 0)break;

        vector <int> dentro;
        dentro.resize(100000);
        vector <int> fora;
        fora.resize(100000);

        estacionamento = stack<int>();

        flag = true;
        max = 0;

        for(i = 1; i <= N; i++){

            cin >> C >> S;

            if(S > max)max = S;

            dentro[C] = C;
            fora[S] = C;
        }

        for(i = 1; i <= max; i++){
            if(fora[i] != 0) {
                if(!estacionamento.empty() && estacionamento.top() == fora[i]){
                    estacionamento.pop();
                }else{
                    flag = false;

                    break;
                }
            }

            if(dentro[i] != 0){
                if(estacionamento.size() < K){
                    estacionamento.push(dentro[i]);
                }else {
                    flag = false;

                    break;
                }
            }
        }

        if(flag)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    }
 
    return 0;
}