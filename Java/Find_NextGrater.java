import java.util.Arrays;

public class Find_NextGrater {
    public static void main(String[] args) {
        int arr[] = { 6, 8, 0, 1, 3, 10 };
        int ngr[] = new int[arr.length];
        findNextgrater(arr, ngr);
        System.out.println(Arrays.toString(ngr));
    }

    public static void findNextgrater(int[] arr, int[] ngr) {
        for (int i = 0; i < arr.length; i++) {
            int j = i + 1;
            boolean flag = false;
            while (j < arr.length) {
                if (arr[i] < arr[j]) {
                    ngr[i] = arr[j];
                    flag = true;
                    break;
                }
                j++;
            }
            if (flag == false) {
                ngr[i] = -1;
            }
        }
    }
}
