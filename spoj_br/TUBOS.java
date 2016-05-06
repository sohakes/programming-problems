import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;




class tubos {

/**
* @param args
*/
//Baseei esse código em um outro pra achar pontes, e funcionou!
//Eles usavam uma classe de grafos anyway. Não estou completamente certo do motivo de isso ter funcionado
//tô faz mó tempão tentando entender
//Btw esse contador de bridges ae é meio inútil, já que basta achar uma, mas enfim
private static int[] low;
   private static int[] pre;
   private static int cnt;
   private static int bridges;
   
   public static  void bridge(int[][] adj){
    low = new int[adj.length];
    pre = new int[adj.length];
    for(int v = 0; v<adj.length;v++)low[v] = -1;
    for(int v = 0; v<adj.length;v++)pre[v] = -1;
    for (int v = 0; v < adj.length; v++)
           if (pre[v] == -1)
               dfs(adj, v, v);
   }

   public int components() { return bridges + 1; }
   
   public static void dfs(int[][] adj, int u, int v){
    if(bridges>0)
    return;
    pre[v] = cnt++;
       low[v] = pre[v];
       for (int w = 0; w < adj.length; w++) {
        if(adj[v][w]==1){
        if (pre[w] == -1) {
               dfs(adj, v, w);
               low[v] = Math.min(low[v], low[w]);
               if (low[w] == pre[w]) {
                   bridges++;
               }
           }else if (w != u)
               low[v] = Math.min(low[v], pre[w]);
       }
       
}
   }

   
//Gambiarra master, mas o que vou fazer é cortar aresta por aresta do grafo, fazer dfs e 
//verificar quantos estão conectados em um vértice qualquer. Se diminiui, era ponte
public static void main(String[] args) throws IOException {
BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//Vai receber n capitais e ramos
String capram = br.readLine();
int debug = 0;

while(!capram.equals("0 0")){
low=null;
   pre=null;
   cnt=0;
   bridges=0;
debug++;
int cap, ramos;
//Pega numero de capitais e ramos
String[] aux = capram.split(" ");
cap=Integer.parseInt(aux[0]);
ramos=Integer.parseInt(aux[1]);
//Cria uma lista com vértices pra marcar os visitados e uma matriz de adjacências
int nos[] = new int[cap];

int adj[][] = new int[cap][cap];
//inicializa matriz de adjacências e lista de vértices
for (int i = 0; i < cap; i++) {
nos[i]=0;

for (int j = 0; j < cap; j++){
adj[i][j]=0;
}
}

for (int i = 0; i < ramos; i++) {
aux = br.readLine().split(" ");
adj[Integer.parseInt(aux[0])-1][Integer.parseInt(aux[1])-1]=1;
adj[Integer.parseInt(aux[1])-1][Integer.parseInt(aux[0])-1]=1;
}
bridge(adj);
if(bridges>0)
System.out.println("N");
else
System.out.println("S");

//System.out.println(verifica(lig,adj,nos));

capram = br.readLine();

}//fim while

}

}

