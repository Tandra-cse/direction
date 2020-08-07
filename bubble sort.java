package javaapplication7;

import java.util.Arrays;


public class JavaApplication7 {

    
    public static void main(String[] args) {
        int [] numbers={40,9,120,333,11,70,35,12,44,100}; //0 --> 9 index
        System.out.println(Arrays.toString(numbers));
        bubbleSort(numbers);

    }

    public static void bubbleSort(int arr[]){ 
        int n = arr.length; //n = 10
       
        for (int i = 0; i < n-1; i++)// 0 --> 8  < n-1=10-1=9
            for (int j = 0; j < n-i-1; j++) 
                if (arr[j] > arr[j+1]) 
                { 
                    // swap arr[j+1] and arr[i] 
                    int temp = arr[j]; 
                    arr[j] = arr[j+1]; 
                    arr[j+1] = temp; 
                } 
    } 
}
