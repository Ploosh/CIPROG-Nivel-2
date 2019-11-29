#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

bool isnumber(string s) { 
  for (int i = 0; i < s.length(); i++){
  if (isdigit(s[i]) == false){
    return false;
  }
  else{
      return true;
    }
  }
} 

int main(){
  fstream exame;
  string nome, s;
  char sexo;
  int idade =0, posi,repetir;

  exame.open("dados.txt", ios::out | ios::app | ios::in);
  if (exame.is_open()){
    exame << "\n_______________________";
    cout << "\n\n\t\t\t\tATENÇÃO! \n\nESTE PROGRAMA TEM FINALIDADE DE AUXILIAR MULHERES E HOMENS NA REALIZAÇÃO "
    << "\nDO AUTOEXAME E NÃO SUBSTITUI A CONSULTA COM UM MÉDICO.\n\n\n";
    cout << "Olá! Vou te ajudar a fazer seu autoexame de mama.\nQual é o seu nome?\n";
    getline(cin,nome);
    exame<<"\nNome do usuário: "<<nome;
    cout << nome << ", qual é o seu gênero?\nF. Feminino \nM. Masculino\n";
    cin>>sexo;
    while(sexo!='f'&& sexo!='F'&& sexo!='m'&& sexo!='M'){
      cout << "Opção inválida! Tente outra vez.\n";
      cout << nome << ", qual é o seu gênero?\nF. Feminino \nM. Masculino\n";
      cin>>sexo;
    }
    exame<<"\nGênero: "<<sexo;
    if (sexo=='F'||sexo=='f'){
      cout << "\nQual a sua idade?\n";
      cin >> s;
      while (isnumber(s)==false){
        cin.clear();
        cout << "A idade precisa ser um núemro.";
        cout << "\nQual a sua idade?\n";
        cin >> s;
      }
      stringstream geek(s);
      geek >> idade;
      exame << "\nIdade: "<<idade;
      if (idade >=30 && idade<40){
        cout << "\nJá é indicado a procura de um mastologista para você.\n";
        cout << "Após o autoexame indicaremos onde pode encontrar consultas e exames gratuitos em Salvador (:\n";
      }
      if (idade >=40){
        cout << "\nVocê deve fazer mamografias anual. Já fez a sua este ano?\n";
        cout << "Após o autoexame indicaremos onde pode encontrar consultas e exames gratuitos em Salvador (:\n";
      }
      cout << "\nFique de olho nos sintomas!\n"
      << "\n    * Nódulo único endurecido;"
      << "\n    * Irritação ou abaulamento de uma parte da mama;"
      << "\n    * Inchaço de toda ou parte de uma mama (mesmo que não se sinta um nódulo);"
      << "\n    * Edema (inchaço) da pele;"
      << "\n    * Eritema (vermelhidão) na pele;"
      << "\n    * Inversão do mamilo;"
      << "\n    * Sensação de massa ou nódulo em uma das mamas;"
      << "\n    * Sensação de nódulo aumentado na axila;"
      << "\n    * Espessamento ou retração da pele ou do mamilo"
      << "\n    * Secreção sanguinolenta ou serosa pelos mamilos"
      << "\n    * Inchaço do braço;"
      << "\n    * Dor na mama ou mamilo";
      cout << "\n\nAgora vou te guiar durante o autoexame.\n";
      do{
        cout << "Em qual posição gostaria de fazer o autoexame?\n"
        << "  1.Em frente ao espelho\n  2.Em pé\n  3.Deitado\n  4.Sair\n";
        cin >> posi;
        switch (posi){
          case 1:{
            exame << "\nPosição:" << posi;
            cout << "\n\nEM FRENTE AO ESPELHO"
            << "\n    * Posicione-se em frente ao espelho;"
            << "\n    * Observe os dois seios, primeiramente com os braços caídos;"
            << "\n    * Coloque as mãos na cintura fazendo força;"
            << "\n    * Coloque as mãos atrás da cabeça e observe o tamanho, posição e forma do mamilo;"
            << "\n    * Pressione levemente o mamilo e veja se há saída de secreção.\n";
            cout << "Voce quer tentar outra posição?\n  1. Sim\n  2. Não\n";
            cin >> repetir;
            switch (repetir){
              case 1: break;
              case 2: posi=4;
            }
            break;
            }
          case 2:{
            exame << "\nPosição:" << posi;
            cout << "\nEM PÉ"
            << "\nEsta posição pode ser feita durante o banho (:"
            << "\n    * Levante seu braço esquerdo e apoie-o sobre a cabeça;"
            << "\n    * Com a mão direita esticada, examine a mama esquerda;"
            << "\n    * Divida o seio em faixas e analise devagar cada uma dessas faixas. Use a polpa dos dedos e não as pontas ou unhas;"
            << "\n    * Sinta a mama;"
            << "\n    * Faça movimentos circulares, de cima para baixo;"
            << "\n    * Repita os movimentos na outra mama.\n";
            cout << "Voce quer tentar outra posição?\n  1. Sim\n  2. Não\n";
            cin >> repetir;
            switch (repetir){
              case 1: break;
              case 2: posi=4;
            }
            break;
          }
          case 3:{
            exame << "\nPosição:" << posi;
            cout << "\nDEITADO:"
            << "\n    * Coloque uma toalha dobrada sobre o ombro direito para examinar a mama direita;"
            << "\n    * Sinta a mama com movimentos circulares, fazendo uma leve pressão;"
            << "\n    * Apalpe a metade externa da mama (é mais consistente);"
            << "\n    * Depois apalpe as axilas;"
            << "\n    * Inverta o procedimento para a mama esquerda.\n";
            cout << "Voce quer tentar outra posição?\n  1. Sim\n  2. Não\n";
            cin >> repetir;
            switch (repetir){
              case 1: break;
              case 2: posi=4;
            }
            break;
          }
          case 4:{
            break;
          }
          default:{
            cout << "Opção inválida!";
            break;
          }
        }
      }while (posi!=4);
    }
    else{
      if (sexo=='M'|| sexo=='m'){
        cout << "Qual a sua idade?\n";
        cin >> s;
        while (isnumber(s)==false){
          cin.clear();
          cout << "A idade precisa ser um núemro.";
          cout << "\nQual a sua idade?\n";
          cin >> s;
        }
        stringstream geek(s);
        geek >> idade;
        exame << "\nIdade: "<<idade;
        if (idade >=60){
          cout << "Você faz parte do grupo de risco para o câncer de mama masculino.\n"
          << "Agora mais do que nunca a realização do autoexame é importante para você!\n";
        }
        cout << "\nFique de olho nos sintomas!\n"
        << "\n    * Nódulo ou caroço no peito, atrás do mamilo ou logo abaixo da auréola, que não causa dor;"
        << "\n    * Mamilo virado para dentro;"
        << "\n    * Dor numa determinada área do peito que surge tempos depois do surgimento do nódulo;"
        << "\n    * Pele enrugada ou ondulada;"
        << "\n    * Saída de sangue ou líquido pelo mamilo;"
        << "\n    * Vermelhidão ou descamação da pele da mama ou mamilo;"
        << "\n    * Alterações do volume da mama;"
        << "\n    * Inchaço das ínguas na axila.";
        cout << "\n\nAgora vou te guiar durante o autoexame.\n";
        do{
          cout << "Em qual posição gostaria de fazer o autoexame?\n"
          << "  1.Em frente ao espelho\n  2.Em pé\n  3.Deitado\n  4.Sair\n";
          cin >> posi;
          switch (posi){
            case 1:{
              exame << "\nPosição:" << posi;
              cout << "\nEM FRENTE AO ESPELHO"
              << "\n    * Posicione-se em frente ao espelho;"
              << "\n    * Observe os dois seios, primeiramente com os braços caídos;"
              << "\n    * Coloque as mãos na cintura fazendo força;"
              << "\n    * Coloque as mãos atrás da cabeça e observe o tamanho, posição e forma do mamilo;"
              << "\n    * Pressione levemente o mamilo e veja se há saída de secreção.\n";
              cout << "Voce quer tentar outra posição?\n  1. Sim\n  2. Não\n";
              cin >> repetir;
              switch (repetir){
                case 1: break;
                case 2: posi=4;
              }
              break;
            }
            case 2:{
              exame << "\nPosição:" << posi;
              cout << "\nEM PÉ"
              << "\nEsta posição pode ser feita durante o banho (:"
              << "\n    * Levante seu braço esquerdo e apoie-o sobre a cabeça;"
              << "\n    * Com a mão direita esticada, examine a mama esquerda;"
              << "\n    * Divida o seio em faixas e analise devagar cada uma dessas faixas. Use a polpa dos dedos e não as pontas ou unhas;"
              << "\n    * Sinta a mama;"
              << "\n    * Faça movimentos circulares, de cima para baixo;"
              << "\n    * Repita os movimentos na outra mama.\n";
              cout << "Voce quer tentar outra posição?\n  1. Sim\n  2. Não\n";
              cin >> repetir;
              switch (repetir){
                case 1: break;
                case 2: posi=4;
              }
              break;
            }
            case 3:{
              exame << "\nPosição:" << posi;
              cout << "\nDEITADO:"
              << "\n    * Coloque uma toalha dobrada sobre o ombro direito para examinar a mama direita;"
              << "\n    * Sinta a mama com movimentos circulares, fazendo uma leve pressão;"
              << "\n    * Apalpe a metade externa da mama (é mais consistente);"
              << "\n    * Depois apalpe as axilas;"
              << "\n    * Inverta o procedimento para a mama esquerda.\n";
              cout << "Voce quer tentar outra posição?\n  1. Sim\n  2. Não\n";
              cin >> repetir;
              switch (repetir){
                case 1: break;
                case 2: posi=4;
              }
              break;
            }
            case 4:{
              break;
            }
            default:{
              cout << "Opção inválida!";
              break;
            }
          }
        }while (posi!=4);
      }
    }
    cout << "\t\t\t\tEXAMES E CONSULTAS GRATUITAS EM SALVADOR:";
    cout << "\n* Obras Sociais Irmã Dulce"
    << "\n* Centro Estadual de Oncologia"
    << "\n* Hospital da Mulher"
    << "\n* Postos de Saúde da rede SUS\n\n";
    exame.close();
  }
  else{
    cout << "Não foi possivel abrir o arquivo. \n";
  }
  return 0;
}