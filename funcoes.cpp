#include <iostream>
#include <ctime>
#include "funcoes.h"

using namespace std;

//VERIFICAR SENHA
int verifsenha (int senha_atual){

    int opcao;
    int senha_old;
    int senha_new;
    int senha_new2;

    cout << "Sua senha atual eh:" << senha_atual << endl;
    cout << "Deseja trocar senha?:" << endl;
    cout << "(1) SIM;" << endl;
    cout << "(2) NAO;" << endl;
    cin >> opcao;

    while(opcao > 2 || opcao < 1){
        cout << "Numero invalido, repita a operacao com um numero dentro do intervalo solicitado" << endl;
        cin >> opcao;
    }

    if(opcao == 1){
    	cout << "x------------------------------x" << endl;
        cout << "Digite a senha atual: ";
        cin >> senha_old;
        if (senha_old == senha_atual){
            cout << endl << "Digite nova senha: ";
            cin >> senha_new;
            cout << "Confirma sua nova senha:";
            cin >> senha_new2;
            if (senha_new == senha_new2){
            	cout << endl << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
                cout << "x SENHA ATUALIZADA COM SUCESSO x" << endl;
                cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
                return senha_new;
            }else{
                cout << endl << "Confirmação de senha divergente, operação abortada!";
            }
        }else{
        	cout << "Senha incorreta! Operação abortada";
        }
    }else{ 
        cout << "Senha inalterada, retornando ao menu principal." << endl;
    }

    return 0;
}

// VERIFICAR SALDO
float verifsaldo (float saldo){

    cout << "o seu saldo bancário eh de R$: " << saldo << endl;

    return saldo;
}

//SAQUE
float sacar (float saldo){
    cout << "Digite o valor que vc quer sacar em R$: ";

    float valor_sacado;
    float aftersaque;

    cin >> valor_sacado;
    cout << endl << "Vc sacou " << valor_sacado << " reais." << endl;
    aftersaque = saldo - valor_sacado;
    cout << "Seu saldo atual eh R$ " << aftersaque << "." << endl;
    return aftersaque;

}

//REALIZAR DEPOSITO
float deposito (float saldo){
	cout << "Digite o valor que vc quer depositar em R$: ";

	float valor_dep;
	float afterdep;

	cin >> valor_dep;
	cout << endl << "Vc depositou " << valor_dep << " reais." << endl;
    afterdep = saldo + valor_dep;
    cout << "Seu saldo atual eh R$ " << afterdep << "." << endl;
    return afterdep;
}

//REALIZAR PAGAMENTO DE FATURAS
float pagamento (float saldo){

	float valor_fatura;
	float after_pag;
	long int codigo;

	cout << "Saldo em conta corrente: R$" << saldo << endl;
	cout << "x------------------------------------------------x" << endl;
	cout << "Digite o código de barras da fatura a ser paga: ";
	cin >> codigo;
	cout << "Digite o valor em R$ da fatura a ser paga: ";
	cin >> valor_fatura;

	if (valor_fatura > saldo){
		cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
		cout << endl << "Pagamento não realizado,SALDO INSUFICIENTE" << endl;
		return saldo;
	}else{
		cout << endl << "xxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
		cout << "x FATURA PAGA COM SUCESSO x" << endl;
		cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
		after_pag = saldo - valor_fatura;
		cout << "Seu saldo atual eh R$" << after_pag << endl << endl; 
		return after_pag;
	}
}

