#include <bits/stdc++.h>

using namespace std;

bool comparaStrings(string str1, string str2){
    if(str1 == str2){
        return true;
    }else{
        int cont = 0;
        for(size_t i = 0; i < str1.size(); i++){
            if(str1[i] != str2[i] && cont == 0){
                cont++;
            }else if(str1[i] != str2[i] && cont > 0){
                return false;
            }
        }

        return true;
    }
}

int main(){
    int N, M;
    int cont;
    string nome, assinatura;
    map <string, string> turma;

    while(true){
        cin >> N;
        if(N == 0)break;

        for(int i = 0; i < N; i++){
            cin >> nome >> assinatura;

            turma.insert({nome, assinatura});
        }

        cin >> M;

        cont = 0;
        for(int i = 0; i < M; i++){
            cin >> nome >> assinatura;

            auto it = turma.find(nome);

            if(it != turma.end())if(!comparaStrings(it->second, assinatura))cont++;
        }

        cout << cont << endl;
    }

    return 0;
}