#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;

    set <string> arvore;

    int N;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> str;

        arvore.insert(str);
    }

    cout << "Falta(m) " << 151 - arvore.size() << " pomekon(s)." << endl;

    return 0;
}