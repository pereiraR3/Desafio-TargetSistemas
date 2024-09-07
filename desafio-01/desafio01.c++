// Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor
// sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
// escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência 
// de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência. 

#include <iostream>

using namespace std;

bool verifySequenceFibonacci(int inputValue) {

    int currentValue = 1, previousValue = 0, tempValue;

    if (inputValue == 0)
        return true;

    while (currentValue <= inputValue) {
        if (currentValue == inputValue) {
            return true;
        }

        // Atualiza a sequência
        tempValue = currentValue;
        currentValue = currentValue + previousValue;
        previousValue = tempValue;
    }

    return false;
}

int main(){

    int inputValue;

    cout << "Digite um valor numérico: ";

    cin >> inputValue;

    if(verifySequenceFibonacci(inputValue))
        cout << "O valor pertence a sequência Fibonacci"; 
    else
        cout << "O valor não pertence a sequência Fibonacci" << endl;

    return 0;

}