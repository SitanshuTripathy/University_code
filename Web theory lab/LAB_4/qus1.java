package LAB_4;

import java.util.Scanner;

public class qus1 {

   static void selection_sort(int a[],int m)
    {
        int i, j, min, temp;
        for (i=0; i<m; i++)
        {
            min = i;
            for (j=i+1; j<m; j++)
            {
                if (a[j] < a[min])
                    min = j;
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }}

   static void merge(int arr[], int l,
               int m, int r)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;

        int L[]=new int[n1], R[]=new int[n2];
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];
        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2)
        {if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
            k++;
        } while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    static void mergeSort(int arr[],
                   int l, int r)
    {
        if (l < r)
        {

            int m = l + (r - l) / 2;


            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);

            merge(arr, l, m, r);
        }
    }

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the value of m =");
        int m = sc.nextInt();
        int arr[]=new int[m];
        System.out.println("Enter the value of array");
        for (int i = 0; i< m; i++){
          arr[i]=sc.nextInt();
        }
     selection_sort(arr,m);
        for (int i=0;i<m;i++){
            System.out.println(arr[i]);
        }

      mergeSort(arr,0,m-1);
        for (int i=0;i<m;i++){
            System.out.println(arr[i]);
        }
    }}
