import java.util.Scanner;
public class Input{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a nymber:");
        int a =  sc.nextInt();
        System.out.println("enter another nuber:");
        int b = sc.nextInt();

        System.out.println(a+b);
        sc.close();
    }

}


 