public class Nnumbers {
    public static void main(String[] args) {
        int n, sum=0;
        for (int i = 0; i < args.length; i++) {
            try {
                n = Integer.parseInt(args[i]);
                if (n<0) {
                    System.out.println("number is negative");
                    continue;
                }
                if (n%10==0){
                    System.out.println("number is evenly divisible by 10");
                    continue;
                }
                if (n>1000 && n<2000) {
                    System.out.println("number is greater than 1000 and less than 2000");
                    continue;
                }
                if (n>7000) {
                    System.out.println("number is greater than 7000");
                    continue;
                }
                sum+=n;
            } catch (Exception e) {
                System.out.println(e);
            }
        }
        System.out.println("sum of entered number is "+sum);
    }
}
