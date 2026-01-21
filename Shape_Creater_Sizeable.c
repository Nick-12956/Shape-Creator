//  PROJECT
//  Creates different shapes as per users intrest, also prints shapes as per users size input
//  FEATURES  --->  1. Different shape options          2. Size options        3. Display using stars        4. 14 Different Shapes

#include <stdio.h>
int main(){
    int input,a,b,c,d,e,i = 0, exit = 0;    //input - from user ; a->e - shape usable ; i = size value ; ch = character     
    char z, l;
    printf("<------ Welcome to Shape Creater ------>\n");
    printf("Choose a Input code  > \n1. Rectangle \n2. Hollow rectangle \n3. Square \n4. Diamond \n5. Real Diamond \n6. Triangle \n7. Inverted Triangle \n8. Hollow Triangle \n9. Circle \n10. Hollow Circle \n11. Ice Cream \n12. Rectangular Character \n13. Grid \n14. Double Rectangle \n15. Exit \n16. Menu");   
    while (exit != 1) {
    printf("\nEnter Input Code : ");
    scanf("%d",&input);
    switch (input) {
        default:
        printf("Wrong Input Entered. Run again.");
        break;
        
        case 1:
        printf("Enter Length : ");
        scanf("%d",&a);
        printf("Enter Breadth : ");
        scanf("%d",&b);
        for (c = 0; c < b; c++) {
            for (d = 0; d < a; d++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

        case 2:
        printf("Enter Length : ");
        scanf("%d",&a);
        printf("Enter Breadth : ");
        scanf("%d",&b);
        for (c = 0; c < a; c++) {
            printf("* ");
        }
        printf("\n");
        for (d = 0; d < (b-2); d++) {
            printf("*");
            for (e = 0;e < (((a-2)*2)+1); e++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        if (b > 1) {
            for (c = 0; c < a; c++) {
            printf("* ");
            }
        }
        break;

        case 3:
        printf("Enter Side Length : ");
        scanf("%d",&a);
        for (c = 0; c < a; c++) {
            for (d = 0; d < a; d++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

        case 4:
        printf("Enter Size (starting from - 1) : ");
        scanf("%d",&i);
        a=0,b=0,c=0,d=i,e=0;                 
        for(a;a<i;a++) {                     
            for (b;b<=d;b=b+1) {              
                printf(" ");                  
            }                                  
            b = 0;
            for (c;c<=e;c=c+1) {
                printf("* ");
            }
            c = 0;
            d = d - 1;
            e = e + 1;
            printf("\n");
        }
        a=0,b=0,c=0,d=i,e=0;                  
        for(a;a<=(i+1);a++) {                     
            for (b;b<=e;b=b+1) {              
                printf(" ");                  
            }                                 
            b = 0;
            for (c;c<=d;c=c+1) {
                printf("* ");
            }
            c = 0;
            d = d - 1;
            e = e + 1;
            printf("\n");
        }
        break;
        
        case 5:
        printf("Enter Size (3 - 10) : ");
        scanf("%d",&i);
        d=2, e=i-2;
        for (a = 0 ; a <= (i-3)/2 ; a++) {
            for (b = 0; b <= d ; b++) {
                printf(" ");
            }
            for (c = 0; c <= e ; c++) {
                printf("* ");
            }
            d -= 1;
            e += 1;
            printf("\n");
        }
        d=i,e=0;                  
        for(a = 0; a <= (i+1); a++) {                     
           for (b = 0; b <= e; b++) {              
               printf(" ");                  
            }                                 
            for (c = 0; c <= d; c++) {
                printf("* ");
            }
            d = d - 1;
            e = e + 1;
            printf("\n");
        }
        break;

        case 6:
        printf("Enter Size (starting from - 1) : ");
        scanf("%d",&i);
        a=0,b=0,c=0,d=i,e=0;                 
        for(a;a<i;a++) {                     
            for (b;b<=d;b=b+1) {              
                printf(" ");                  
            }                                  
            b = 0;
            for (c;c<=e;c=c+1) {
                printf("* ");
            }
            c = 0;
            d = d - 1;
            e = e + 1;
            printf("\n");
        }
        break;

        case 7:
        printf("Enter Size (starting from - 1) : ");
        scanf("%d",&i);
        a=0,b=0,c=0,d=i,e=0;                  
        for(a;a<=(i+1);a++) {                     
            for (b;b<=e;b=b+1) {              
                printf(" ");                  
            }                                 
            b = 0;
            for (c;c<=d;c=c+1) {
                printf("* ");
            }
            c = 0;
            d = d - 1;
            e = e + 1;
            printf("\n");
        }
        break;

        case 8:
        printf("Size (Start - 2) : ");
        scanf("%d",&i);
        a=i-2,b=-1;
        for (int l = 0; l < (i-1); l++) {
            for (int m = 0; m <= a; m++) {
                printf(" ");
            }
            printf("*");
            for (int n = 0; n < b; n++) {
                printf(" ");
            }
            if (l > 0) {
                printf("*");
            }
            printf("\n");
            a -=1,b += 2;
        }
        for (int d = 0; d <= (i-1); d++) {
            printf("* ");
        }
        break;

        case 9:
        printf("Enter Radius (Start - 4) : ");
        scanf("%d",&i);
        for (b = i; b >= -i; b--) {
            for (a = -i; a <= i; a++) {
                if (((((a*2)*(a*2))+((b*2)*(b*2)))-((i*2)*(i*2))) < 0) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            a = -i;
            printf("\n");
        }
        break;
        case 10:
        printf("Enter Radius (Starting - 8) : ");
        scanf("%d",&i);
        for (b = i; b >= -i; b--) {
            for (a = -i; a <= i; a++) {
                if ((((((a*2)*(a*2))+((b*2)*(b*2)))-((i*2)*(i*2))) < 0) && (((((a*2)*(a*2))+((b*2)*(b*2)))-((i*2)*(i*2))) >= (-i*i))) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            a = -i;
            printf("\n");
        }
        break;

        case 11:
        printf("Enter Size (Starting - 2) : ");
        scanf("%d",&i); 
        for (a = 0; a < (i-1); a++) {
            printf("  ");
        }
        printf(" %%@&");
        for (b = i; b >= 0; b--) {
            for (a = -i; a <= i; a++) {
                if (((((a*2)*(a*2))+((b*2)*(b*2)))-((i*2)*(i*2))) < 0) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            a = -i;
            printf("\n");
        }
        for (a = 0; a <= (2*i); a++) {
            printf("# ");
        }
        printf("\n");
        for (b = 0; b <= (i/2); b++) {
            printf("  ");
            for (a = 0; a <= (2*(i-1)); a++) {
                printf("# ");
            }
            printf("\n");
        }
        break;

        case 12:
        printf("Enter Single Character : ");
        scanf(" %c",&z);               //  <--  Here, add space (" %c",&z) for smooth running
        printf("Enter Length : ");
        scanf("%d",&a);
        printf("Enter Breadth : ");
        scanf("%d",&b);
        for (c = 0; c < b; c++) {
            for (d = 0; d < a; d++) {
                printf("%c ",z);
            }
            printf("\n");
        }
        break;
        case 13:
        printf("Enter x (horizontal) number of Grids (Range - 1 to 100) : ");
        scanf("%d",&a);
        printf("Enter y (vertical) number of Grids (Range - 1 to 100) : ");
        scanf("%d",&b);
        printf("Enter Grid spacing (Range - 1 to 100) : ");
        scanf("%d",&i);
        if (a > 100 || b > 100 || i > 100) {
            printf("------------> Values too large! Please enter smaller numbers.\n");
            return 0;
        }
        for (c = 0; c < ((i+1) * ((b * (i + 1)) / (i+1)) + 1); c++) {
            for (d = 0; d < ((i+1) * ((a * (i + 1)) / (i+1)) + 1); d++) {
                if (((c % (i+1)) == 0) || ((d % (i+1)) == 0)) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;

        case 14:
        c = 0;
        printf("Enter Character-1 : ");
        scanf(" %c",&z);
        printf("Enter Character-2 : ");
        scanf(" %c",&l);
        printf("Enter Length (better if odd number) : ");
        scanf("%d",&a);
        printf("Enter Breadth : ");
        scanf("%d",&b);
        if ((a > 100) || (b > 100)) {
            printf("Values Too Large.");
            return 0;
        }
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < (a); j++) {
                if (c == 0) {
                    printf("%c ",z);
                    c = 1;
                }
                else if (c == 1) {
                    printf("%c ",l);
                    c = 0;
                }
            }
            printf("\n");
        }
        break;

        case 15:
        printf("Exit Successful.");
        exit = 1;
        break;

        case 16:
        printf("\n1. Rectangle \n2. Hollow rectangle \n3. Square \n4. Diamond \n5. Real Diamond \n6. Triangle \n7. Inverted Triangle \n8. Hollow Triangle \n9. Circle \n10. Hollow Circle \n11. Ice Cream \n12. Rectangular Character \n13. Grid \n14. Double Rectangle \n15. Exit \n16. Menu");   
        break;
    }
}
    return 0;
}