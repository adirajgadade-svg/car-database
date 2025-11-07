#include<stdio.h>
struct car{
    char n[50];
    float p;
    float f;
    float s;
};
void bubblesort(struct car arr[], int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for (j=0;j<size-i-1;j++){
            if(arr[j].p >arr[j+1].p){
                temp=arr[j+1].p;
                arr[j+1].p=arr[j].p;
                arr[j].p=temp;
        }
    }
}
printf("\n-------------------------------------------------------------\n");
for(i=0;i<size;i++){
    printf("%d.  Model: %s\nPrice: %f\nFuel economy: %f\nSafety rating: %f\n\n\n",i+1,arr[i].n,arr[i].p,arr[i].f,arr[i].s);
}
}
int main(){
    int i;
    struct car c[3];
    printf("Enter the car details\n");
     printf("\n");
    for(i=0;i<3;i++){
        printf("%d. ",i+1);
        printf("Model:");
        scanf("%s",&c[i].n);
        printf("\nPrice:");
        scanf("%f",&c[i].p);
        printf("\nFuel economy:");
        scanf("%f",&c[i].f);
        printf("\nSafety rating:");
        scanf("%f",&c[i].s);
         printf("\n");
    }
    bubblesort(c,3);
    return 0;
    
}
