import java.util.Scanner;

public class termial{

    public static Integer calcTermial(int x){
        int soma = 0;
        for(int i = 1; i <= x; i++){
            soma += i;
        }
        return soma;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um valor numérico natural: ");

        try{
            int n = scanner.nextInt();
            if(n <= 0){
                System.out.println("\nO valor digitado não é natural.");
            }
            else{
                System.out.println(n + "? = " + calcTermial(n));
            }
        } catch (Exception e){
            System.out.println("\nErro na leitura. Execução interrompida.");
        }
    }
}
