#include <bits/stdc++.h>

using namespace std;

int main(){
    // mapeamento do código morse
    unordered_map<string, char> morseMap = {
        {"=.===", 'a'},          {"===.=.=.=", 'b'},     {"===.=.===.=", 'c'}, {"===.=.=", 'd'}, 
        {"=", 'e'},              {"=.=.===.=", 'f'},     {"===.===.=", 'g'},   {"=.=.=.=", 'h'},
        {"=.=", 'i'},            {"=.===.===.===", 'j'}, {"===.=.===", 'k'},   {"=.===.=.=", 'l'},
        {"===.===", 'm'},        {"===.=", 'n'},         {"===.===.===", 'o'}, {"=.===.===.=", 'p'},
        {"===.===.=.===", 'q'},  {"=.===.=", 'r'},       {"=.=.=", 's'},       {"===", 't'},
        {"=.=.===", 'u'},        {"=.=.=.===", 'v'},     {"=.===.===", 'w'},   {"===.=.=.===", 'x'},
        {"===.=.===.===", 'y'},  {"===.===.=.=", 'z'}
    };

    int t;
    cin >> t;
    cin.ignore();

    for(int i = 0; i < t; i++){
        string encodedLine;
        getline(cin, encodedLine);

        stringstream decodedMessage;
        vector<string> words = {}; // vetor para armazenar palavras
        size_t pos = 0;

        // divisão por palavras usando o separador "......."
        while((pos = encodedLine.find(".......")) != string::npos){
            words.push_back(encodedLine.substr(0, pos));
            encodedLine.erase(0, pos + 7); // remove a palavra processada e o separador
        }
        words.push_back(encodedLine); // adiciona a última palavra

        // processa cada palavra
        for(const auto& word : words){
            vector<string> letters = {};
            size_t letterPos = 0;

            // divisão por letras usando o separador "..."
            string tempWord = word;
            while((letterPos = tempWord.find("...")) != string::npos){
                letters.push_back(tempWord.substr(0, letterPos));
                tempWord.erase(0, letterPos + 3); // remove a letra processada e o separador
            }
            letters.push_back(tempWord); // adiciona a última letra

            // mapeia cada letra da palavra
            for(const auto& letter : letters){
                if(!letter.empty() && morseMap.count(letter)){
                    decodedMessage << morseMap[letter];
                }
            }

            decodedMessage << " "; // adiciona um espaço após cada palavra
        }

        // remove o último espaço e imprime a mensagem decodificada
        string result = decodedMessage.str();
        if(!result.empty() && result.back() == ' '){
            result.pop_back();
        }
        cout << result << endl;
    }

    return 0;
}
