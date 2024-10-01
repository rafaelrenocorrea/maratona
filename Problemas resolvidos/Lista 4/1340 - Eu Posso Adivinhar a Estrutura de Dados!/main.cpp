#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c, x, aux;

    stack <int> pilha;
    queue <int> fila;
    priority_queue <int> fila_de_prioridade;

    bool b_pilha, b_fila, b_fila_de_prioridade;

    while(scanf("%d", &n) != EOF){
        // reinicia as flags e esvazia as estruturas de dados
        b_pilha = true;
        b_fila = true;
        b_fila_de_prioridade = true;

        while(!pilha.empty())
            pilha.pop();

        while(!fila.empty())
            fila.pop();

        while(!fila_de_prioridade.empty())
            fila_de_prioridade.pop();
        //
        
        for(int i = 0; i < n; i++){
            scanf("%d %d", &c, &x);

            if(c == 1){
                pilha.push(x);
                fila.push(x);
                fila_de_prioridade.push(x);

            }else if(c == 2){
                if(b_pilha == true){
                    aux = pilha.top();
                    if(aux != x){
                        b_pilha = false;
                    }else{
                        pilha.pop();
                    }
                }
                
                if(b_fila == true){
                    aux = fila.front();
                    if(aux != x){
                        b_fila = false;
                    }else{
                        fila.pop();
                    }
                }

                if(b_fila_de_prioridade == true){
                    aux = fila_de_prioridade.top();
                    if(aux != x){
                        b_fila_de_prioridade = false;
                    }else{
                        fila_de_prioridade.pop();
                    }
                }
            }
        }

        if(b_pilha && !b_fila && !b_fila_de_prioridade){
            cout << "stack" << endl;
        }else if(!b_pilha && b_fila && !b_fila_de_prioridade){
            cout << "queue" << endl;
        }else if(!b_pilha && !b_fila && b_fila_de_prioridade){
            cout << "priority queue" << endl;
        }else if(!b_pilha && !b_fila && !b_fila_de_prioridade){
            cout << "impossible" << endl;
        }else{
            cout << "not sure" << endl;
        }
    }

    return 0;
}