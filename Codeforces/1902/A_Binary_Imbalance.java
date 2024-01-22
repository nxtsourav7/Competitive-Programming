import java.util.Scanner;

public class A_Binary_Imbalance {

    public static void main(String[] args) {
        Scanner sc_ob = new Scanner(System.in);

        int tt = sc_ob.nextInt();
        while(tt>0) {
            int n = sc_ob.nextInt();
            String s = sc_ob.next();

            int cntZro = 0;
            boolean pp = false;
            for(int i=0; i<n; ++i) {
                if(s.charAt(i)=='0') {
                    cntZro++;
                }
                if(i+1<n) {
                    if(s.charAt(i)!=s.charAt(i+1)) pp = true;
                }
            }

            if(cntZro>(n/2) || pp==true) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }

            tt--;
        }

        sc_ob.close();
    }
}