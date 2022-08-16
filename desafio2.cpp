
#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, mediaTurma;
    cout << "Digite a nota 1: \n";
    cin >> nota1;
    cout << "Digite a nota 2: \n";
    cin >> nota2;
    cout << "Digite a nota 3: \n";
    cin >> nota3;
    cout << "Digite a media da nota da turma: \n";
    cin >> mediaTurma;

    float mediaAluno = (nota1 + nota2 + nota3) / 3;
    cout << "Media das notas do aluno= " << mediaAluno << endl;
    cout << "Media das notas da turma= " << mediaTurma << endl;

    if (mediaAluno > mediaTurma)
    {
        cout << "Media do aluno > maior do a media da turma!\n";
    }
    else
    {
        cout << "Media da turma > maior do que a media do aluno\n";
    }

    return 0;
}
