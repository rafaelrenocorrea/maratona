#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <char> pilha;
    string infixa;
    int N;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> infixa;

        for(size_t j = 0; j < infixa.size(); j++){
            char token = infixa[j];

            if(isdigit(token) || isalpha(token)){ // operando: número ou letra
                cout << token;
            }else{
                switch(token){
                    case '+':
                    case '-':
                        // desempilha todos operadores com precedência >= '+'
                        while(
                              !pilha.empty() &&
                              (
                               pilha.top() == '*' ||
                               pilha.top() == '/' ||
                               pilha.top() == '^' ||
                               pilha.top() == '+' ||
                               pilha.top() == '-'
                              )
                             ){
                            cout << pilha.top();
                            pilha.pop();
                        }
                        
                        pilha.push(token);

                        break;

                    case '*':
                    case '/':
                        // desempilha operadores com precedência >= '*'
                        while(
                              !pilha.empty() &&
                              (
                               pilha.top() == '*' ||
                               pilha.top() == '/' ||
                               pilha.top() == '^'
                              )
                             ){
                            cout << pilha.top();
                            pilha.pop();
                        }

                        pilha.push(token);

                        break;

                    case '^':
                        // para '^', desempilha apenas outros '^' (associatividade à direita)
                        while(
                              !pilha.empty() &&
                              pilha.top() == '^'
                             ){
                            cout << pilha.top();
                            pilha.pop();
                        }

                        pilha.push(token);

                        break;

                    case '(':
                        pilha.push('(');

                        break;

                    case ')':
                        // desempilha até encontrar '('
                        while(
                              !pilha.empty() &&
                              pilha.top() != '('
                             ){
                            cout << pilha.top();
                            pilha.pop();
                        }

                        pilha.pop(); // desempilha o '('
                        
                        break;
                }
            }
        }

        // esvazia a pilha após processar toda a expressão
        while(!pilha.empty()){
            cout << pilha.top();
            pilha.pop();
        }

        cout << endl;
    }

    return 0;
}
