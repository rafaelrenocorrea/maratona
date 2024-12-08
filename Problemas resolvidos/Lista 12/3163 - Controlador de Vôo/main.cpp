#include <bits/stdc++.h>

using namespace std;

int main(){
    // filas p/ cada direção
    queue<string> east, north, south, west;

    int direction;
    string aircraft;
    string str;

    while(true){
        cin >> str;

        if(str[0] == 'A'){ // é avião
            aircraft = str;
        }else{ // é direção
            direction = stoi(str);

            if(direction != 0){
                continue;
            }else break;
        }

        // direciona o avião p/ a fila correspondente
        switch(direction){
            case -4:
                east.push(aircraft);

                break;
            case -3:
                north.push(aircraft);

                break;
            case -2:
                south.push(aircraft);

                break;
            case -1:
                west.push(aircraft);

                break;
        }
    }

    // organiza a fila de saída
    while(!west.empty() || !north.empty() || !south.empty() || !east.empty()){
        // aviões do oeste têm maior prioridade
        if(!west.empty()){
            cout << west.front();
            west.pop();
            if(!west.empty() || !north.empty() || !south.empty() || !east.empty())cout << " ";
        }
        // aviões do norte e sul alternam-se
        if(!north.empty()){
            cout << north.front();
            north.pop();
            if(!west.empty() || !north.empty() || !south.empty() || !east.empty())cout << " ";
        }
        if(!south.empty()){
            cout << south.front();
            south.pop();
            if(!west.empty() || !north.empty() || !south.empty() || !east.empty())cout << " ";
        }
        // aviões do leste vêm por último
        if(!east.empty()){
            cout << east.front();
            east.pop();
            if(!west.empty() || !north.empty() || !south.empty() || !east.empty())cout << " ";
        }
    }
    cout << endl;

    return 0;
}
