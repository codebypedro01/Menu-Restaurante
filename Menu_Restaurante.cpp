#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int opcao;
    float total = 0;
    bool continuar = true;

    do{
        cout << "--- MENU DO RESTAURANTE ---" << endl;
        cout << "1. Prato feito [R$19.90]" << endl;
        cout << "2. X-Buguer [R$25.00]" << endl;
        cout << "3. Suco Natural 500ml [R$7.50]" << endl;
        cout << "0. Finalizar pedido" << endl;
        cout << "Selecione a opcao desejada: ";
        cin >> opcao;
        
        int quantidade;

        switch (opcao){
            case 1:
                cout << "Opçao selecionada: PRATO FEITO" << endl;
                cout << "Quantas unidades? ";
                cin >> quantidade;
                total += 19.90 * quantidade; // total = total + 19.90
                cout << quantidade << " PRATO FEITO adicionado(s)" << endl;
                break;
            case 2:
                cout << "Opcao selecionada: X-BURGER" << endl;
                cout << "Quantas unidades? ";
                cin >> quantidade;
                total += 25.00 * quantidade;
                cout << quantidade << " X-BURGER adicionado(s)" << endl;
                break;
            case 3:
                cout << "Opcao selecionada: SUCO NATURAL" << endl;
                cout << "Quantas unidades? ";
                cin >> quantidade;
                total += 7.50 * quantidade;
                cout << quantidade << " SUCO NATURAL adicionado(s)" << endl;
                break;
            case 0:
                cout << "Finalizando o programa..." << endl;
                continuar = false;
                break;
            default:
                cout << "Opcao invalida! Digite novamente.";
                break;
        }
        
    } while(continuar);

    cout << "Valor total do pedido R$" << fixed << setprecision(2) << total;
    return 0;
}