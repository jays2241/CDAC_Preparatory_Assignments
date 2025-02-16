public class Q7_java_table {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("You havent entered anything");
            return;
        }
        int num = Integer.parseInt(args[0]);
        for (int i = 1; i <= 10 ; i++) {
            System.out.println(i + " X " + num + " = " + num * i);
        }
    }
}
