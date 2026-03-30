package beecrowd.nivel_2;

import java.util.Scanner;


public class Josephus {
    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);
        int NC = sc.nextInt();
        for (int i = 0; i < NC; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            No raiz = new No(1, null, null);
            No atual = raiz;
            for (int j = 2; j <= n; j++) {
                No novo = new No(j, null, atual);
                atual.prox = novo;
                atual = novo;
            }
            atual.prox = raiz;
            raiz.antecessor = atual;

            for (int j = 0; j < k; j++) {
                atual = atual.prox;
            }

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
            System.out.println("Case "+ (i+1)+ ": " + atual.valor);


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
