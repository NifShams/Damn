#include <stdio.h>
void sort(float array[],int num){//void cuz we will not need to return anything instead we will just change the array and print out different values of it
    int i,j;
    float temp;
    for (i=0;i<num-1;++i){ //num-1 cuz we will not need to check the last element
        for (j=i+1;j<num;++j){
            if (array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
int main(void){
    void sort(float array[],int num);
    int i;
    float Shams[16]={ 34.0, -5.0, 6.0, 0.0, 12.0, 100.0, 56.0, 22.0,
44.0, -3.0, -9.0, 12.0, 17.0, 22.0, 6.0, 11.0 };//i am a leo,sorry(ghost emoji)
sort(Shams,16);
for(i=0;i<16;++i)
printf("%.2f \n",Shams[i]);

return 0;
    
}