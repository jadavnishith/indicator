//----------Question 1----------

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x, y;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("\nBefore swapping:\n");
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    swap(&x, &y);
    
    printf("\nAfter swapping:\n");
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    return 0;
}

//----------Question 2----------

#include <stdio.h>

int main() 
{
    int nick[]={1,2,3,4,5};
    int *p=&nick;
    printf("%u %d\n",p,*p);
    printf("%u %d\n",p+1,*(p+1));
    printf("%u %d\n",p+2,*(p+2));
    printf("%u %d\n",p+3,*(p+3));
    printf("%u %d\n",p+4,*(p+4));
    
    return 0;
}

//----------Question 3----------

#include <stdio.h>

int main() {
    int a = 20;
    int *p=&a;
    int **p2;
    p2=&p;
    
    printf("%u %d",p2 ,**p2);

    return 0;
}
