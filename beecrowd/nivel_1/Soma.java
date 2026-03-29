package beecrowd.nivel_1;
import java.util.Scanner;

public class Soma {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()){
            int a = scanner.nextInt();
            if(scanner.hasNextInt()){
                int b = scanner.nextInt();
                int x = a+b;
                System.out.println("X = " + x);
            }
        }
        scanner.close();
    }
}
