import java.util.*;
import java.lang.*;
import java.io.*;

public class Code{
Wrsx
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int size = s.nextInt();
        int[] arr = new int[size];

        for(int i = 0;i<size;i++){
            arr[i] = s.nextInt();
        }

        System.out.print(solve(arr));
        
        s.close();

    }
}