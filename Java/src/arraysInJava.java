import java.util.*;

public class arraysInJava {
    public static void main(String[] args) {

        int[] numbers = new int[10];
        numbers[0] = 23;
        numbers[4] = 21;

        System.out.println(Arrays.toString(numbers));

        int[] agesOfPeople = {10,23,21,23,12};
        System.out.println(numbers.length);
        System.out.println(Arrays.toString(agesOfPeople));
        Arrays.sort(agesOfPeople);
        System.out.println(Arrays.toString(agesOfPeople));

    }
}
