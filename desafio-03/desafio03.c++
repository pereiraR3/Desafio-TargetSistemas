// Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça
// { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA); 

#include <iostream> 

using namespace std;

int sum(){

    int indice = 12;
    int soma = 0;

    for(int k = 1; k < indice; k++){
        soma += k;
    }

    return soma;

}

int main() {

    cout << "A soma dos numeros de 1 a 11 (inclusive) e: " << sum() << endl;

    return 0;
    
}