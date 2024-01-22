/**
 *	author 	: nxtsourav7
 *	created : 2024-01-22 21:53:48
**/


import java.util.Scanner;

public class B_Getting_Points {

    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int tt = scanf.nextInt();

        while(tt > 0) {
            long n = scanf.nextLong();
            long p = scanf.nextLong();
            long l = scanf.nextLong();
            long t = scanf.nextLong();

            
            long po = 0, ko = n;
            while(po<ko) {
              long sr = (po+ko)/2;
              long s;
              if((n+6)/7 > 2*sr) {
                s = 2*sr*t+l*sr;
              }
              else {
                s = (n+6)/7*t+l*sr;
              }
              if(s<p) po=sr+1; else ko=sr;
            }

            System.out.println(n-po);

            tt--;
        }

        scanf.close();
    }

}