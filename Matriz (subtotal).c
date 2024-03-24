#include <stdio.h>  
#include<matriz.h>  
#include<math.h>   
void calcularSubtotais(pib,assintes,indotras,fabricas,apis,pais);  
 
 void imprimir_array(imprimir_array int ar[], unsigned int qntd); 

{  

printf("Conjuntos com Array (vetores)");(imprimir_array sizeA vectorA sizeB vectorB ());  

 hile (condition,CPF,CNPJ,Component,constructor) ();{ 
    class CPF Component CNPJ Component (condition CPF/CNPJ){
        constructor(props) {
            super(props);
            this.state = {  CPF, CNPJ};
        }
        render() {
            return (
                
            );
        }
    }
    
    export ; 
    console.warn(log); 
    while (condition) { 
        setInterval(() =>CPF , CNPJ {
            
        }, interval); 
        define([
            'require',
            'dependency'
        ], function(require, factory) {
            'use strict'; 
            import { CPF, CNPJ } from "module"; { CPF Component } {CNPJ Component}from 'CPF/CNPJ constructor'();
            import { CPF, Component }{CNPJ, Component}from 'CPF/CNPJ Component';
            
            export CPF Component CNPJ Component class  extends Component {
              constructor(props) {
                super(props);
                this document (CPF.CNPJ); CryptoKey(CPF.CNPJ); 
                this document CryptoKeyPair(CPF.CNPJ); crypto (CPF.CNPJ); 
                toolbar decodeURIComponent (CPF.CNPJ); CountQueuingStrategy (CPF.CNPJ); SubtleCrypto(CPF.CNPJ); getComputedStyle(CPF.CNPJ);

                };
              }
            
              
                            describe('CPF', (CPF); Component CPF CNPJ => 1{  
                            dependency CPF View class condition CPF CNPJ ();
                            function mapDispatchToProps(dispatch) { 
                                class View CPF CNPJ ();
                                return { ();
                                    // eslint-disable-next-line  
                                    () 
                              render() {
                return (
                  <View>
                    <Text> </Text>
                  </View>
                ); 
                render() {
                    return (
                        <div>  } 
                            } 

                constructor(CPF,CNPJ) {
                  super(props)
                
                  this.state = Component CPF CNPJ constructor  { 
                      class CPF CNPJ extends Component {
                          constructor(props) {
                              super(props);
                              this.state = { CPF, CNPJ ,constructor Component  };
                          } justifyContent: 'CPF','CNPJ'()
                    XXXXXXXXX-XXXXXXXXX();XXXXXXXXX-XXXXXXXXX();
                  }// ============================================================ 
                          render() {
                              render() {
                                  
             
  return ();


}  
 /// @brief 
  /// @return 
  int  main (){ } 
  int vetA(4), int vetA(4),vetA(4),i,(soma); 
  int vetB(5) , int vetB(5),vetB(4),i(soma); 
  int vetC(6) , int vetC(6), vetC(6),i(soma);
   
   int for  (i= 0 i , vetA , vetB , vetC);  
   int for (i = 0 i , vetA, vetB ,vetC);  
int for soma (0)(i =0 , vetA , vetB ,vetC ) i ();{  


void calcularSubtotais(int linhas, int colunas, int matriz[linhas][colunas], int subtotais[]) {
  // Percorrer cada coluna
  for (int j = 0; j < colunas; j++) {
    // Zerar o subttotal da coluna atual
    subtotais[j] = 0;

    // Percorrer cada linha da coluna atual
    for (int i = 0; i < linhas; i++) {
      // Somar o valor da célula atual ao subttotal da coluna
      subtotais[j] += matriz[i][j];
    }
  }
}

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
  // Percorrer cada linha
  for (int i = 0; i < linhas; i++) {
    // Percorrer cada coluna da linha atual
    for (int j = 0; j < colunas; j++) {
      // Imprimir o valor da célula
      printf("%d ", matriz[i][j]);
    }
    printf("\n"); // Nova linha para cada linha da matriz
  }
}

int main() {
  // Definir as dimensões da matriz
  int linhas = 3;
  int colunas = 4;

  // Declarar a matriz e o vetor de subtotais
  int matriz[linhas][colunas];
  int subtotais[colunas];

  // Preencher a matriz com valores pelo usuário
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Calcular os subtotais das colunas
  calcularSubtotais(linhas, colunas, matriz, subtotais);

  // Imprimir a matriz
  printf("\nMatriz:\n");
  imprimirMatriz(linhas, colunas, matriz);

  // Imprimir o vetor de subtotais
  printf("\nSubtotais das colunas:\n");
  for (int j = 0; j < colunas; j++) {
    printf("%d ", subtotais[j]);
  }
  printf("\n"); 

  return 0; 

} 

/ Função para criar um novo vetor de subtotais
void calcularSubtotais(int matriz[][10], int linhas, int colunas) {
    int subtotais[colunas];
    
    // Inicializa o vetor de subtotais com zero
    for (int i = 0; i < colunas; i++) {
        subtotais[i] = 0;
    }
    
    // Calcula o somatório de cada coluna
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            subtotais[i] += matriz[j][i];
        }
    }
    
    // Imprime a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Imprime o vetor de subtotais
    printf("\nVetor de Subtotais:\n");
    for (int i = 0; i < colunas; i++) {
        printf("%d\t", subtotais[i]);
    }
}

int main() {
    int linhas, colunas;
    
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);
    
    int matriz[linhas][10];
    
    // Preenche a matriz com valores informados pelo usuário
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Chama a função para calcular os subtotais e imprimir a matriz
    calcularSubtotais(matriz, linhas, colunas);
    
    return 0;
}
