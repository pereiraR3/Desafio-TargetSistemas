// Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula 
// ou minúscula, além de informar a quantidade de vezes em que ela ocorre. 

#include <iostream> 
#include <string>
#include <cctype>

using namespace std;

bool verifyString(const string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            return true;
        }
    }
    return false;
}

void getNumbersOfA(const string& inputString) {
    int quantityValuesAs = 0;

    if (verifyString(inputString)) {
        for (int i = 0; i < inputString.length(); i++) {
            if (inputString[i] == 'a' || inputString[i] == 'A') {
                quantityValuesAs++;
            }
        }
        cout << "Quantidade de caracteres 'a' ou 'A': " << quantityValuesAs << endl;
    } else {
        cout << "Não existe a letra 'a' ou 'A' na sequência de caracteres da string." << endl;
    }
}

int main() {
    string inputString;

    cout << "Digite a palavra ou frase: " << endl;
    getline(cin, inputString);

    getNumbersOfA(inputString);

    return 0;
}
