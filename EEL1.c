//EEL PROGRAM
#include <stdio.h> 

void main() {
int weight, t;
printf("weight placed on recliner:");
scanf("%d" ,&weight);
printf("Time:");
scanf("%d" ,&t);
if (weight>25 && t==8){
    printf("The chair is reclined");
}
else{ 
    printf("Please place the minimum required weight and time");
}
}
