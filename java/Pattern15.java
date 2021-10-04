import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int space = n/2;
        int star = 1;
        int num = 1;
        
        
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=space ; j++){
                System.out.print("\t");
            }
            
            for(int k=1 ; k<=star ; k++){
                System.out.print(num+"\t");
                if(k<=star/2){
                    num++;
                }else{
                    num--;
                }
            }
            System.out.println();
            if(i<=n/2){
                num+=2;
                star+=2;
                space--;
            }else{
                star-=2;
                space++;
            }
        }

    }
}