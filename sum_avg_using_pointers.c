 #include<stdio.h>

int* sum(int a, int b){
    int c=a+b;
    int* ptr = &sum;
    printf("The sum is %d\n", c);
    return ptr;
}

float* avg(int a, int b){
    float c=(a+b)/2.0;
    float* ptr = &avg;
    printf("The average is %f\n", c);
    return ptr;
}

int main(void){
    int x = 10;
    int y = 5;
    int* ptr1;
    float* ptr2;
    ptr1 = sum(x,y);
    ptr2 = avg(x,y);

    printf("The address of sum is %u and average is %u", ptr1, ptr2);
}