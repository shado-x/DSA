#include <stdio.h>
void bubbleSort(int array[], int n) {
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d integers : \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    bubbleSort(array,n);
    printf("Sorted list in ascending order : \n");
    for(int i=0;i<n;i++) {
        printf("%d\n",array[i]);
    }
    return 0;
}