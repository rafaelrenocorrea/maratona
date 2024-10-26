#include <bits/stdc++.h>

using namespace std;

int main(){
    while (true){
        int N, B;

        cin >> N >> B;
        if(N == 0 && B == 0)break;

        vector <int> nums(B);
        for(int i = 0; i < B; i++)cin >> nums[i];

        // calcula todas as diferenças absolutas possíveis
        set<int> dif;

        for(int i = 0; i < B; i++){
            for(int j = 0; j < B; j++){
                dif.insert(abs(nums[i] - nums[j])); // set não permite repetições
            }
        }
        //

        // verifica se todas as diferenças de 0 a N estão presentes
        bool flag = true;
        for(int i = 0; i <= N; i++){
            if(dif.find(i) == dif.end()){
                flag = false;
                break;
            }
        }
        //

        if(flag){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
    }

    return 0;
}