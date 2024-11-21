#include <bits/stdc++.h>

using namespace std;

int main(){
    map <long int, int> hash;
    long int num;
    int N;

    while(true){
        scanf("%d", &N);
        if(N == 0)break;

        for(int i = 0; i < N; i++){
            scanf("%ld", &num);

            auto result = hash.insert({num, 1});

            if(result.second){
                // inseriu um novo valor único
            }else{
                auto it = result.first;

                switch(it->second){
                    case 1:
                        it->second++;

                        break;
                    
                    case 2:
                        it->second--;

                        break;
                }
            }
        }

        for(auto it = hash.begin(); it != hash.end(); ++it){
            if(it->second == 1)cout << it->first << endl;
        }

        hash.clear();
    }

    return 0;
}