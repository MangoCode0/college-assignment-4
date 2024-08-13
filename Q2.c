//[2] C Program to Find Largest Element in an Array.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter no. of elements:");
    scanf("%d",&x);
    
    int larg[x];
    for(int i=0; i<x; i++){
        printf("Enter elements %d:",i+1);
        scanf("%d",&larg[i]);
    }
    for (int i = 1; i < x; i++) {
        if (larg[0] < larg[i]) {
          larg[0] = larg[i];
        }
    }
    printf("largest no. is: %d\n",larg[0]);
    
    return 0;
}
