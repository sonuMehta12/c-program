// Online C compiler to run C program online
#include <stdio.h>

int arrA[6] = {1,4,8,10,34,54};
int arrB[5] = {2,43,54,65,75};
 int arrC[20];
int merge(int n, int m, int arrA[], int arrB[]){
    
    int i, j ,k;
    i = j = k = 0;
   
    while(i < n && j < m){
        if(arrA[i] < arrB[j]){
        arrC[k++] = arrA[i++];
        }else{
            arrC[k++] = arrA[j++];
        }
    }
    
    for(; i< n; i++){
        arrC[k++] = arrA[i];
    }
    for(; j< m; j++){
        arrC[k++] = arrB[j];
    }
    
    return 0;
}

int main() {
    // Write C code here
    printf("Hello world");
    merge(6, 5, arrA, arrB);
    for(int i = 0; i < 20; i++){
        printf("%d ", arrC[i]);
    }
    return 0;
}
