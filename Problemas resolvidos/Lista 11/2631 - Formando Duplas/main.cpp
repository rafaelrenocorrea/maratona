#include <bits/stdc++.h>

using namespace std;

vector<int> _link, _size;

int find(int x){
    return (x == _link[x]) ? x : (_link[x] = find(_link[x]));
}

int same(int a, int b){
    return find(a) == find(b);
}

void _union(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b)return; // A e B já pertencem ao mesmo conjunto

    if(_size[a] < _size[b])swap(a, b);

    _size[a] += _size[b];
    _link[b] = a;
}

int main(){
    // otimiza a lógica de entrada
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, Q;
    int X, Y;
    bool flag = false;

    while(cin >> N >> M >> Q){
        if(flag)cout << endl;

        _link.resize(N + 1);
        iota(_link.begin(), _link.end(), 0); // preenche com 0, 1, 2, 3, ...

        _size.assign(N + 1, 1);

        // faz a árvore
        for(int i = 0; i < M; i++){
            cin >> X >> Y;

            _union(X, Y);
        }

        // consulta os conjuntos
        for(int i = 0; i < Q; i++){
            cin >> X >> Y;

            if(same(X, Y)){
                cout << "S" << endl;
            }else cout << "N" << endl;
        }

        if(!flag)flag = true;
    }

    return 0;
}