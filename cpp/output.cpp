#include <iostream>
#include <string>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "portuguese");
    
    string nome = "Gustavo";
    string matricula = "12345";
    string curso = "Sistemas de Informação";

    cout << "O Aluno " << nome << " de matrícula << " << matricula << " está cursando " << curso;
    
    return 0;
}

