#include<stdio.h>


int arraySum ( int *array ,const int n){
    int sum = 0 ;
    int * const arrayEnd = array + n ;

    for (;array < arrayEnd ; ++array){
        sum += *array;
    }

    return sum;
}


int main (void ){
    int arraySum ( int *array ,const int n);
    int values [10] = { 3, 7, -9 , 3 , 5, 6, - 20,78, -100,87};

    printf ("The sum is %i \n ",arraySum(values , 10 ));

}

