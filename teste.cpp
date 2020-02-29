#include <iostream>
#include "funcoes.h"

using namespace std;

int main()
{
	int opcao_m;
    string usuario;
    string agencia;
    string conta;
    int senha;
    float valor_sacado;

    //GERANDO SALDO ALEATORIO PARA FICAR MAIS DINÂNMICO
    srand((unsigned)time(0));
    float saldo = rand()%10000;

    cout << endl << "----------BEM VINDO(A) AO BANCO RD-------------" << endl << endl;
    cout << "Entre com seus dados para acessar sua conta:" << endl << endl;
    cout << "Nome: ";
    getline (cin,usuario);
    cout << "Agencia:";
    cin >> agencia;
    cout << "Conta:";
    cin >> conta;
    cout << "Entre com a sua senha numerica de 6 digitos:";
    cin >> senha;

    while (opcao_m != 0){
        cout << endl << "-------------------------------------------------" << endl << endl;
        cout << "BEM VINDO(A) " << usuario << " (Conta " << conta << "; Agencia "<< agencia << ")." << endl << endl;
        cout << "Entre com o numero da acao que deseja realizar:" << endl << endl;
        cout << "||-----------------------------||" << endl;
        cout << "|| (1) - Verificar a senha;    ||" << endl;
        cout << "|| (2) - Verificar o saldo;    ||" << endl;
        cout << "|| (3) - Saque;                ||" << endl;
        cout << "|| (4) - Depósito;             ||" << endl;
        cout << "|| (5) - Pagamento;            ||" << endl;
        cout << "|| (0) - Encerrar Atendimento. ||" << endl;
        cout << "||-----------------------------||" << endl;
        cin >> opcao_m;

        if(opcao_m == 1){
            senha = verifsenha(senha);
        }
        if(opcao_m == 2){
            verifsaldo(saldo);
        }
        if(opcao_m == 3){
            saldo = sacar (saldo);
        }
        if(opcao_m == 4){
        	saldo = deposito (saldo);
        }
        if(opcao_m == 5){
      		saldo = pagamento (saldo);
        }
        if(opcao_m == 0){
        	cout << endl << "FINALIZANDO SESSÃO..." << endl;
        	cout << "--- SESSÃO FINALIZADA ---" << endl << endl;
            exit(0);
        }
    }


    return 0;
}
