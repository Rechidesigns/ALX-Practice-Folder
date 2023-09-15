#include <stdio.h>

// int main() {
//     /*local variable definition*/
//     int a = 10;

//     /*while loop execution*/

//     while ( a < 20 ) {
//         printf("value of a: %d\n", a);
//         a++;
//     }
//     return 0;

// }



// #include <stdio.h>
 
// int main()
// {
//    int m=40,n=20;
//    int o=20,p=30;
//    if (m>n && m !=0)
//    {
//       printf("&& Operator : Both conditions are true\n");
//    }
//    if (o>p || p!=20)
//    {
//       printf("|| Operator : Only one condition is true\n");
//    }
//    if (!(m>n && m !=0))
//    {
//       printf("! Operator : Both conditions are true\n");
//    }
//    else
//    {
//       printf("! Operator : Both conditions are true. " \
//       "But, status is inverted as false\n");
//    }
// }



// int main() {

//    int a = 21;
//    int b = 10;
//    int c ;

//    if( a == b ) {
//       printf("Line 1 - a is equal to b\n" );
//    } else {
//       printf("Line 1 - a is not equal to b\n" );
//    }
	
//    if ( a < b ) {
//       printf("Line 2 - a is less than b\n" );
//    } else {
//       printf("Line 2 - a is not less than b\n" );
//    }
	
//    if ( a > b ) {
//       printf("Line 3 - a is greater than b\n" );
//    } else {
//       printf("Line 3 - a is not greater than b\n" );
//    }
   
//    /* Lets change value of a and b */
//    a = 5;
//    b = 20;
	
//    if ( a <= b ) {
//       printf("Line 4 - a is either less than or equal to  b\n" );
//    }
	
//    if ( b >= a ) {
//       printf("Line 5 - b is either greater than  or equal to b\n" );
//    }
// }


// int main () {

//    /* local variable definition */
//    int a = 100;
 
//    /* check the boolean condition */
//    if( a < 20 ) {
//       /* if condition is true then print the following */
//       printf("a is less than 20\n" );
//    } else {
//       /* if condition is false then print the following */
//       printf("a is not less than 20\n" );
//    }
   
//    printf("value of a is : %d\n", a);
 
//    return 0;
// }


// int main(){
//     int a = 100;

//     if ( a > 10 ) {
//         printf("a is greater than 10\n");
//     }
//     else
//     {
//         printf("a is less than 100 \n");
//     }
//     printf("dont forget that a is 100\n");

//     return 0;

// }


// int main()                            /* Most important part of the program!  */
// {
//     int age;                          /* Need a variable... */
   
//     printf( "Please enter your age: " );  /* Asks for age */
//     scanf( "%d", &age );                 /* The input is put in age */
//     if ( age < 100 ) {                  /* If the age is less than 100 */
//         printf ("You are pretty young!\n" ); /* Just to show you it works... */
//     }
//     else if ( age == 100 ) {            /* I use else just to show an example */ 
//         printf( "You are old\n" );       
//     }
//     else {
//         printf( "You are really old\n" );     /* Executed if no other statement is */
//     }
//   return 0;
 
// }


// // *Try the following example to understand all the arithmetic operators available in C −*//
// int main() {

//    int a = 21;
//    int b = 10;
//    int c ;

//    c = a + b;
//    printf("Line 1 - Value of c is %d\n", c );
	
//    c = a - b;
//    printf("Line 2 - Value of c is %d\n", c );
	
//    c = a * b;
//    printf("Line 3 - Value of c is %d\n", c );
	
//    c = a / b;
//    printf("Line 4 - Value of c is %d\n", c );
	
//    c = a % b;
//    printf("Line 5 - Value of c is %d\n", c );
	
//    c = a++; 
//    printf("Line 6 - Value of c is %d\n", c );
	
//    c = a--; 
//    printf("Line 7 - Value of c is %d\n", c );
// }


// // /*Nested While Loop*/
// int main()
// {
//     int i = 0 , j;

//     while (i < 5)
//     {

//         j = 0;
//         while (j < 3){
//             printf("2");
//             j++;
//         }

//         printf("\n");
//         i++;
//     }

//     return 0;
    
// }




// /* Nested Loop*/
int main() {
    int rows = 3;
    int columns = 4;

    // Outer loop (controls rows)
    for (int i = 0; i < rows; i++) {
        // Inner loop (controls columns)
        for (int j = 0; j < columns; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}



