public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        int a = 1;
        int b = 5;
        int c = 3;

        c = a;
        a = a + c;
        b = b - c;
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}