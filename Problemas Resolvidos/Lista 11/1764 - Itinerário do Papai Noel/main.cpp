#include <bits/stdc++.h>

using namespace std;

struct Aresta{
    int u, v, weight;

    // comparador para ordenar arestas pelo peso
    bool operator<(const Aresta& other) const{
        return weight < other.weight;
    }
};

// classe p/ Union-Find
class UnionFind{
public:
    vector<int> parent, rank;

    UnionFind(int n){
        parent.resize(n);
        rank.resize(n, 0);

        for(int i = 0; i < n; ++i)parent[i] = i;
    }

    int find(int x){
        if(parent[x] != x)parent[x] = find(parent[x]);

        return parent[x];
    }

    void unionSets(int x, int y){
        x = find(x);
        y = find(y);

        if(x != y){
            if(rank[x] > rank[y]){
                parent[y] = x;
            }else if(rank[x] < rank[y]){
                parent[x] = y;
            }else{
                parent[y] = x;
                rank[x]++;
            }
        }
    }
};

// algoritmo de Kruskal
int kruskal(int m, int n, vector<Aresta>& Arestas){
    sort(Arestas.begin(), Arestas.end()); // ordena as arestas pelo peso
    UnionFind uf(m);

    int mstCost = 0, ArestasUsed = 0;

    for(const Aresta& Aresta : Arestas){
        if(uf.find(Aresta.u) != uf.find(Aresta.v)){ // verifica se não forma ciclo
            uf.unionSets(Aresta.u, Aresta.v);
            mstCost += Aresta.weight;
            ArestasUsed++;
            if(ArestasUsed == m - 1)break; // a MST está completa
        }
    }

    return mstCost;
}

int main(){
    int m, n;

    while(true){
        cin >> m >> n;
        if(m == 0 && n == 0)break;

        vector<Aresta> Arestas(n);

        for(int i = 0; i < n; ++i){
            cin >> Arestas[i].u >> Arestas[i].v >> Arestas[i].weight;
        }

        int result = kruskal(m, n, Arestas);
        cout << result << endl;
    }

    return 0;
}
