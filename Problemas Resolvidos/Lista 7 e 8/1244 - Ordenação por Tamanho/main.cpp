#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string str;
    vector <string> palavras;

    cin >> n;
    
    cin.ignore(); // ignora o caractere de quebra de linha
    for(int i = 0; i < n; i++){
        getline(cin, str);
        stringstream linha(str); // transforma a string em um stream
        string palavra;
        while(linha >> palavra){ // enquanto houver palavras na linha
        /* 
            o operador de extração lê dados do fluxo de entrada (linha)
            e os armazena na variável à direita do operador (palavra).
        */
            palavras.push_back(palavra);
        }

        stable_sort(
            palavras.begin(),
            palavras.end(),
            [](const string &a, const string &b){ // função lambda
                return a.size() > b.size();
            }
        );

        for(auto it = palavras.begin(); it != palavras.end(); ++it){
            cout << *it;
            if(it != palavras.end() - 1){
                cout << " ";
            }
        }
        cout << endl;

        palavras.clear();
    }

    return 0;
}