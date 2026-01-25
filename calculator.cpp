#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    int operador;


    cout<<"[1]ADIÇAO "<<endl;
    cout<<"[2]SUBTRAÇAO "<<endl;
    cout<<"[3]MULTIPLICAÇAO"<<endl;
    cout<<"[4]Divisao "<<endl;
    cout<<"Escolha o operador: ";
    cin>>operador;

    while (operador <=1 && operador >= 4) {
    cout << "Operador invalido. Digite novamente: ";
    cin >> operador;
    }

    cout<<"Digite um numero: ";
    cin>>num1;
    cout<<"Digite outro numero: ";
    cin>>num2;

    switch (operador) {
    case 1:
        cout << "Resultado: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Resultado: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 == 0)
            cout << "Erro: divisão por zero!" << endl;
        else
            cout << "Resultado: " << num1 / num2 << endl;
        break;
    }

    
    return 0;   
}