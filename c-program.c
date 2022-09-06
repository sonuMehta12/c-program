/////////printPyramid//////////////
#include <stdio.h>

void printPyramid(int number_of_rows){
       int k = number_of_rows-1;
    for(int i = 0; i < number_of_rows; i++){
        for( int r = 0; r < k; r++){
            printf("-");
        }
        k--;
        for(int j =0; j  < i *2 +1 ; j++ ){
            printf("*");
        }
        printf("\n");
    } 
}


int main() {
    // Write C code here

    printPyramid(20);
    return 0;
}
////////////////////END THE PROGRAM ///////////////////////////


