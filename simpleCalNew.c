#include <stdio.h>
#include <stdlib.h>

void Add(int a, int b){
    printf("Enter your two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    int c=a+b;
    printf("Result: %d", c);
}
void Substact(int e, int f){
    printf("Enter your two numbers: \n");
    scanf("%d", &f);
    scanf("%d", &e);
    int d=f-e;
    printf("Result: %d", d);
}

void Multiply(int g, int h){
    printf("Enter your two numbers: \n");
    scanf("%d", &g);
    scanf("%d", &h);
    int i=g*h;
    printf("Result: %d", i);
}

void Divide(int j, int k){
    printf("Enter your two numbers: \n");
    scanf("%d", &j);
    scanf("%d", &k);
    int l=j/k;
    printf("Result: %d", l);
}
void Modulus(int m, int n) {
    printf("Enter your two numbers: \n");
    scanf("%d", &m);
    scanf("%d", &n);
    if (n != 0) {
        int r = m % n;
        printf("Result: %d\n", r);
    } else {
        printf("Error: Division by zero in modulus operation.\n");
    }
}

int main()
{

int a,b,c,d,e,f,g,h,i,j,k,l,m,n,r,menu;
char back;

do {
printf("MENU\n");
printf("=============\n");
printf("\n");
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Multiply\n");
printf("4. Divide\n");
printf("5. Modulus\n");
printf("\n");
printf("Enter your choice: \n");
printf("\n");
scanf("%d", &menu);

switch (menu){

case 1:
printf("You have selected option 01 - Add\n");
printf("\n");
Add(a,b);
printf("\n");
printf("\n");
break;


case 2:
printf("You have selected option 02 - Substract\n");
printf("\n");
Substact(f,e);
printf("\n");
printf("\n");
break;

case 3:
printf("You have selected option 03 - Multiply\n");
printf("\n");
Multiply(g,h);
printf("\n");
printf("\n");
break;


case 4:
printf("You have selected option 04 - Divide\n");
printf("\n");
Divide(j,k);
printf("\n");
printf("\n");
break;


case 5:
printf("You have selected option 05 - Modulus\n");
printf("\n");
Modulus(m,n);
printf("\n");
printf("\n");
break;

default:
    printf("Please select you choice using numbers from 1 to 5\n");}
}

while (1>0);


    return 0;
}
