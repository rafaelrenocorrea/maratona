#include <bits/stdc++.h>

using namespace std;

struct funcionario{
    int velocidade; // velocidade
    int tempo; // tempo de espera
};

int main(){ // O (m * n)
    int n, m, aux, cliente, menor, maior;

    vector <funcionario> funcionarios;
    queue <int> clientes;

    cin >> n >> m;

    funcionarios.resize(n);

    for(int i = 0; i < n; i++){
        cin >> aux;

        funcionarios[i].velocidade = aux;

        funcionarios[i].tempo = 0;
    }

    for(int i = 0; i < m; i++){
        cin >> aux;

        clientes.push(aux);
    }

    while(!clientes.empty()){ // O(m)
        cliente = clientes.front();

        for(int i = 0; i < n; i++){ // Encontra o menor: O(n)
            if(i > 0){
                if(funcionarios[i].tempo < menor){
                    menor = funcionarios[i].tempo;

                    aux = i;
                }
            }else{
                menor = funcionarios[i].tempo;

                aux = i;
            }
        }

        funcionarios[aux].tempo += (cliente * funcionarios[aux].velocidade);

        clientes.pop();
    }

    for(int i = 0; i < n; i++){
        if(i > 0){
            if(funcionarios[i].tempo > maior)
                    maior = funcionarios[i].tempo;
        }else{
            maior = funcionarios[i].tempo;
        }
    }

    cout << maior << endl;

    return 0;
}