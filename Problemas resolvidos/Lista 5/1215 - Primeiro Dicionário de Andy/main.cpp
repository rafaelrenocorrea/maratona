#include <bits/stdc++.h>

using namespace std;

int main(){
    string palavra, subpalavra;
    set <string> palavras;
    set <string> :: iterator it;

    while(cin >> palavra){
        subpalavra = "";

        for(char &c : palavra){
            if(isalpha(c)){
                c = tolower(c);

                subpalavra += c; // concatenação
            }else if(!subpalavra.empty()){
                palavras.insert(subpalavra);

                subpalavra = "";
            }
        }

        if(!subpalavra.empty()){
            palavras.insert(subpalavra);
        }
    }

    for(it = palavras.begin(); it != palavras.end(); it++){
        cout << *it << endl;
    }

    return 0;
}