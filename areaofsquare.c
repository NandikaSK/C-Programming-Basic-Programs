#include<stdio.h>
int main(void){
    int r,s;
    float area;
    printf("Enter the side lenght of the square:");
    scanf("%d",&s);

    r=(s*1.414)/2;                                          //diameter=sidelegth*root2, radius=diameter/2
    area=3.14*r*r;

    printf("Area=%f",area);
    return 0;
}