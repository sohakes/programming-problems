import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;


public class Main {

	/**
	 * @param args
	 * @return 
	 * @throws IOException 
	 */
	
	public static void transposta(int[][] adj, int tamanho){
		int count = 0;
		int aux = 0;
		
		
		for (int i = 0; i < tamanho; i++) {
			
    		for (int j = count; j < tamanho; j++){
    			aux = adj[i][j];
    			adj[i][j]=adj[j][i];
    			adj[j][i]=aux;
    		}	
    		count++;
		}
	}
	
	
	//Pega uma matriz de adjacências e lista de vértices e vê se é fortemente conexo
	//Retorna 1 se for
	public static int forcon(int[][] adj, int[] nos){
		dfs(adj,nos,nos[0]);
		for (int i = 0; i < nos.length; i++) {
			if(nos[i]==0)
				return 0;
    		nos[i]=0;
		}
		transposta(adj,nos.length);
		dfs(adj,nos,nos[0]);
		for (int i = 0; i < nos.length; i++) {
			if(nos[i]==0)
				return 0;
		}
		
		return 1;
		
	}
	
	
	//Pega um nó, uma lista de vértices e uma matriz de adjacências e faz dfs
	public static void dfs (int[][] adj, int[] nos, int node){
		Stack<Integer> pilha = new Stack();
		pilha.push(node);
		nos[node] = 1;
		int no = -1;
		while(!pilha.isEmpty()){
			//Pega o nó que tá no topo da pilha, e tira ele daí porque vamos achar todos os seus queridos filhos
			no = pilha.pop();
			//Pega um arco para um vértice não marcado... acho que tem jeito melhor de fazer pra ele lembrar onde ele "parou"
			//mas estamos sem tempo e_e, talvez se fizesse recursivo não desse esse problema
			for (int i = 0; i < nos.length; i++) {
				if(adj[no][i]==1&&nos[i]==0){
					pilha.push(i);
					nos[i]=1;
				}		
			}
		}
	}
	
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String interruas = br.readLine();
        
        while(!interruas.equals("0 0")){
        	int inter, ruas;
        	//Pega numero de interssecções e ruas
        	String[] aux = interruas.split(" ");
        	inter=Integer.parseInt(aux[0]);
        	ruas=Integer.parseInt(aux[1]);
        	//Cria uma lista com vértices pra marcar os visitados e uma matriz de adjacências
        	int nos[] = new int[inter];
        	int adj[][] = new int[inter][inter];
        	//inicializa matriz de adjacências e lista de vértices
        	for (int i = 0; i < inter; i++) {
        		nos[i]=0;
        		for (int j = 0; j < inter; j++){
        			adj[i][j]=0;
        		}				
			}
        	
        	//Coloca tudo na matriz de adjacências, com o cuidado de colocar a volta se for mão dupla
        	for (int i = 0; i < ruas; i++) {
        		aux = br.readLine().split(" ");
        		adj[Integer.parseInt(aux[0])-1][Integer.parseInt(aux[1])-1] = 1;
        		if(aux[2].equals("2"))
        			adj[Integer.parseInt(aux[1])-1][Integer.parseInt(aux[0])-1] = 1;	
			}
        	System.out.println(forcon(adj,nos));
        	
        	interruas = br.readLine();
        	
        }

	}

}

