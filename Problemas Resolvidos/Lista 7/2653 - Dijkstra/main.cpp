#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    set <string> arvore;

    while(cin >> str)arvore.insert(str);

    cout << arvore.size() << endl;

    return 0;
}