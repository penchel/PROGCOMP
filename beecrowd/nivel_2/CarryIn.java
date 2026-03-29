package beecrowd.nivel_2;

import java.util.Scanner;

public class CarryIn {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = 0, b = 0, x;
        while (sc.hasNextLong()) {
            a = sc.nextLong();
            if(sc.hasNextLong()) b = sc.nextLong();
            x = a ^ b;
            System.out.println(x);
        }
        sc.close();
    }
}
