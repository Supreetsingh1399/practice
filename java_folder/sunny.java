import java.util.*;

public class sunny {
    public static void main(String[] args) {
        int i = 9;
        int j = i + 1;
        int sqrt = (int) Math.sqrt(j);
        // System.out.println(sqrt);
        if (sqrt * sqrt == j) {
            System.out.println(i + "is a sunny number");
        } else {
            System.out.println(i + "not a sunny number");
        }
    }
}
// wap the type of character entered from keyboard