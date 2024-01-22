import java.util.Scanner;

public class C_Best_Binary_String {

    public static void main(String[] args) {
        Scanner sc_ob = new Scanner(System.in);

        int tt = sc_ob.nextInt();
        while(tt>0) {
            String s = sc_ob.next();
            StringBuilder string = new StringBuilder(s);
            char lst = '0';
            for(int i=0; i<s.length(); ++i) {
                if(s.charAt(i)=='?') {
                    string.setCharAt(i, lst);
                }
                lst = string.charAt(i);
            }

            System.out.println(string);

            tt--;
        }

        sc_ob.close();
    }
}