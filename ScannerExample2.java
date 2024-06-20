import java.util.Scanner;
class ScannerExample2{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        sc.nextLine();
        String s=sc.nextLine();
        float f=sc.nextFloat();
        System.out.println(a);
        System.out.println(s);
        System.out.println(f);
    } 
}
