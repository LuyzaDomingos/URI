import java.util.Scanner;

/**
 *
 * @author luyza
 * Apresenta um tempo de execução lento.
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int caso, qtde, arv_n, c  = 1;  
            caso = entrada.nextInt();
            Arvore_binaria estrutura = new Arvore_binaria ();
            
                
        for(int j = 0; j<caso; j++){
             qtde = entrada.nextInt();
            for(int i = 0; i<qtde; i++){
                arv_n = entrada.nextInt();
                estrutura.insere(arv_n); 
            }
             System.out.println("Case " + c + ":");
            System.out.print("Pre.:");
            estrutura.exibePreOrdem();
            System.out.println();
            System.out.print("In..:");
            estrutura.exibeInOrdem();
            System.out.println();
            System.out.print("Post:");
            estrutura.exibePosOrdem();
            System.out.println("\n");
            c++;
        }
        
    }

   
    
     static class Arvore_binaria {
    
      class  No {
    
        private int conteudo;
        private No esq;
        private No dir;
        
        
             public No(){
                
                this.esq = null;
                this.dir = null;
            }

            public int getConteudo(){
                return conteudo;
            }
            public void setConteudo(int conteudo){
                this.conteudo = conteudo;
            }
            public No getEsq(){
                return esq;
            }
            public void setEsq(No esq){
                this.esq = esq;
            }
            public No getDir(){
                return dir;
            }
            public void setDir(No dir){
                this.dir = dir;
            }   
        }
     
        private No raiz;
        
        public Arvore_binaria(){
         raiz  = null;
     }
      
	public boolean insere(int valor){

		No novoNo = new No();
		novoNo.setConteudo(valor);
		novoNo.setEsq(null);
		novoNo.setDir(null);

		if (raiz == null){ 
	 		raiz = novoNo;
			return true;
		}

	    
	    No aux = raiz;
	    	No p = null;
	    while (aux != null) {
	    		p = aux;
			if (valor < aux.getConteudo())
				aux = aux.getEsq();
			else
				aux = aux.getDir();
		}

		
		if (valor < p.getConteudo())
			p.setEsq(novoNo);
		else
			p.setDir(novoNo);
		return true;
	}
	
        private void exibePreOrdem(No T){
                if(T != null){
                    System.out.print("  " + T.getConteudo());
                    exibePreOrdem(T.getEsq());
                    exibePreOrdem(T.getDir());
                }
            }
            
             public void exibePreOrdem(){
              
                    exibePreOrdem(raiz);
                
            }
             
            
            private void exibeInOrdem(No T){
                if(T != null){
                    exibeInOrdem(T.getEsq());
                    System.out.print("  " + T.getConteudo());
                     exibeInOrdem(T.getDir());
                }
            }
            
            public void exibeInOrdem(){
          
                    exibeInOrdem(raiz);
                
            }
            
            
            private void exibePosOrdem(No T){
                if(T != null){
                    exibePosOrdem(T.getEsq());
                    exibePosOrdem(T.getDir());
                    System.out.print("  " + T.getConteudo());
                }
            }
            
           
            
            public void exibePosOrdem(){
                    exibePosOrdem(raiz);
                
            }
 }
       
}
