import java.util.Scanner;

public class A_Vus_the_Cossack_and_a_Contest {

    public static void main(String[] args) {
        Scanner sc_ob = new Scanner(System.in);

        int n = sc_ob.nextInt();
        int m = sc_ob.nextInt();
        int k = sc_ob.nextInt();

        if(m>=n && k>=n) {
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }

        sc_ob.close();
    }
}