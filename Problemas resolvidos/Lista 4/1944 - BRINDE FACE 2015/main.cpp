#include <bits/stdc++.h>

using namespace std;

void invstr(string &str);
// inverte a string

int main(){
    int n, qtd = 0;
    stack <string> painel;
    string palavra;
    palavra.resize(4);

    cin >> n;

    for(int i = 0; i < n; i++){
        if(painel.empty())
            painel.push("FACE");

        for(int j = 0; j < 4; j++){
            scanf(" %c", &palavra[j]);
        }

        invstr(palavra);

        if(palavra == painel.top()){
            painel.pop();

            qtd++;
        }else{
            invstr(palavra);

            painel.push(palavra);
        }
    }

    cout << qtd << endl;

    return 0;
}

void invstr(string &str){
    int j = 0;
    string aux;
    aux.resize(str.size());

    for(int i = str.size() - 1; i >= 0; i--){
        aux[j] = str[i];

        j++;
    }

    str = aux;
}