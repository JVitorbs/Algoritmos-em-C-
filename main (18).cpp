#include <iostream>
#include <iomanip>
using namespace std;

void resultado_notas(float nota1, float nota2, float nota3, float &media, bool &situacao, float &falta_nota);

float calcula_media(float nota1, float nota2, float nota3);

float calcula_nota_maior(float nota1,float nota2,float nota3);

float calcula_nota_meio(float nota1,float nota2,float nota3);

int main() {
  float nota1,  nota2,  nota3,  media, falta_nota;
  bool situacao;
  
  cin >> nota1 >> nota2 >> nota3;

  resultado_notas( nota1, nota2, nota3, media, situacao, falta_nota);

  cout << fixed << setprecision(2);
  
  
  if(situacao == true){
    cout << "Media: " << media << ": em reposicao (nota necessária: " << falta_nota << ")" << endl;
  }

  else if(media >= 5.0){
    cout << "Media " << media << ": aprovado" << endl;
  }

  else{
    cout << "Media: " << media << ": Reprovado" << endl;
  }
  
  return 0;
}

float calcula_media(float nota1, float nota2, float nota3){
  float media;
  
  media=((nota1+nota2+nota3)/3);

  return media;
}

float calcula_nota_maior(float nota1,float nota2,float nota3){
  if(nota1 > nota2 && nota1 > nota3){
    return nota1;
  }

  if(nota2 > nota1 && nota2 > nota3){
    return nota2;
  }

  if(nota3 > nota1 && nota3 > nota2){
    return nota2;
  }
}

float calcula_nota_meio(float nota1,float nota2,float nota3){
  if((nota1 > nota2 && nota1 < nota3) || (nota1 < nota2 && nota1 > nota3)){
    return nota1;
  }

  if((nota2 > nota1 && nota2 < nota3) || (nota2 < nota1 && nota2 > nota3)){
    return nota2;
  }

  if((nota3 > nota1 && nota3 < nota2) || (nota3 < nota1 && nota3 > nota2)){
    return nota3;
  }

}


void resultado_notas(float nota1, float nota2, float nota3, float &media, bool &situacao, float &falta_nota){
  media = calcula_media( nota1, nota2, nota3);

  if(media >= 5.0 && (nota1 < 3.0 || nota2 < 3.0 || nota3 < 3.0)){
    situacao = true;
  } 

  else{
    situacao = false;
  }

  falta_nota = (15-calcula_nota_meio( nota1, nota2, nota3)-calcula_nota_maior( nota1, nota2, nota3));
  
}




/*Implemente uma função que receba como parâmetros de entrada três notas entre 0 e 10.
A função a ser implementada deve armazenar em um primeiro parâmetro a média
das notas. Em um segundo parâmetro, a função deve armazenar verdadeiro caso o aluno precise
fazer a prova de reposição (as 3 notas são maiores ou iguais a 3,0 e a média é menor que 5,0)
ou falso caso contrário. Em um terceiro parâmetro, a função deve armazenar a nota necessária para o aluno
ser aprovado (caso esteja na prova de reposição), de acordo com a regra da UFRN. Caso ele
não esteja na prova de reposição, este parâmetro não precisa conter um valor válido.

Implemente também a função main, que deve ler do usuário três números reais maiores ou iguais a 0
para as notas e exibir três tipos de mensagem, de acordo com o resultado da função:
"Media X: aprovado"
"Media X: em reposicao (nota necessaria: Y)"
"Media X: reprovado" 
Exiba a média com duas casas decimais inserindo "#include <iomanip>" e "cout << fixed << setprecision(2);"
(este comando na primeira linha da função main).*/