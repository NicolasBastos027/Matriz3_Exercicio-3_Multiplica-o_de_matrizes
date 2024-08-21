#include <iostream>
#include <vector>

using namespace std;

int main() {
    int dim_l_a, dim_l_b, dim_c_a, dim_c_b;

    cout << "Informe o número de linhas e colunas da matriz A (linhas colunas): ";
    cin >> dim_l_a >> dim_c_a;
    cout << "Informe o número de linhas e colunas da matriz B (linhas colunas): ";
    cin >> dim_l_b >> dim_c_b;

    if (dim_c_a != dim_l_b) {
        cout << "As dimensões das matrizes não são compatíveis para multiplicação." << endl;
        return 1;
    }

    vector<vector<int>> matrizA(dim_l_a, vector<int>(dim_c_a));
    vector<vector<int>> matrizB(dim_l_b, vector<int>(dim_c_b));
    vector<vector<int>> matrizRes(dim_l_a, vector<int>(dim_c_b, 0)); // Inicializa com 0

    for (int i = 0; i < dim_l_a; i++) {
        for (int j = 0; j < dim_c_a; j++) {
            cout << "Informe o item da posição [" << i + 1 << "][" << j + 1 << "] da matriz A: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "\n";
 
    for (int i = 0; i < dim_l_b; i++) {
        for (int j = 0; j < dim_c_b; j++) {
            cout << "Informe o item da posição [" << i + 1 << "][" << j + 1 << "] da matriz B: ";
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < dim_l_a; i++) {
        for (int j = 0; j < dim_c_b; j++) {
            for (int k = 0; k < dim_c_a; k++) {
                matrizRes[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    cout << "\nMatriz A:" << endl;
    for (int i = 0; i < dim_l_a; i++) {
        for (int j = 0; j < dim_c_a; j++) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B:" << endl;
    for (int i = 0; i < dim_l_b; i++) {
        for (int j = 0; j < dim_c_b; j++) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz Resultado:" << endl;
    for (int i = 0; i < dim_l_a; i++) {
        for (int j = 0; j < dim_c_b; j++) {
            cout << matrizRes[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
