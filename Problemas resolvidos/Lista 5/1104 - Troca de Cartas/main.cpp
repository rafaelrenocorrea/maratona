#include <bits/stdc++.h>

using namespace std;

int main(){
    int i;
    set <int> alice, beatriz;
    int a, b;
    int carta;
    int qtdAlice, qtdBeatriz;

    while(true){
        cin >> a >> b;
        if((a == 0) && (b == 0)){
            break;
        }

        for(i = 0; i < a; i++){
            cin >> carta;

            alice.insert(carta);
        }

        for(i = 0; i < b; i++){
            cin >> carta;

            beatriz.insert(carta);
        }

        // quantas cartas Alice tem e Beatriz não tem
        qtdAlice = 0;
        for(int carta : alice){
            if(beatriz.find(carta) == beatriz.end()){
                qtdAlice++;
            }
        }
        //

        // quantas cartas Beatriz tem e Alice não tem
        qtdBeatriz = 0;
        for(int carta : beatriz){
            if(alice.find(carta) == alice.end()){
                qtdBeatriz++;
            }
        }
        //

        cout << min(qtdAlice, qtdBeatriz) << endl;

        alice.clear();
        beatriz.clear();
    }

    return 0;
}