//Nessa aqui, a implementação do C++ ganhou!!!
package beecrowd.nivel_2;

import java.util.Scanner;

public class QuedaLuz {
    public static int josephus(int n, int k){
        No raiz = new No(1, null, null);
        No atual = raiz;
        for (int j = 2; j <= n; j++) {
            No novo = new No(j, null, atual);
            atual.prox = novo;
            atual = novo;
        }
        atual.prox = raiz;
        raiz.antecessor = atual;
        atual = raiz;
        No futuro = atual;
        while(atual.prox != atual){
            futuro = atual.prox;
            atual.antecessor.prox = atual.prox;
            atual.prox.antecessor = atual.antecessor;
            //System.out.println("Eliminado: " + atual.valor);
            atual.valor = -1;
            atual.antecessor = null;
            atual.prox = null;
            for (int j = 0; j < k-1; j++) {
                futuro = futuro.prox;
            }

            atual = futuro;     
        }
        return atual.valor;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while(N>0){
            int i = 1;
            while(josephus(N,i)!= 13) i++;
            System.out.println(i);
            N = sc.nextInt();
        }
        sc.close();
    }
}

class No {
    public int valor;
    public No prox;
    public No antecessor;

    No(int v, No p, No a){
        this.valor = v;
        this.prox = p;
        this.antecessor = a;
    }
    
}