//#include <stdio.h>
//
//int main() {
//    char c;
//    
//    printf("Please enter a grade (A, B, C, D, E): ");
//    scanf(" %c", &c);  // Note the space before %c to skip any whitespace characters
//    
//    switch (c) {
//    	case 'N':
//        case 'a':
//        case 'A':
//            printf("The equivalent numeric value range is 7.5 to 10.0.\n");
//          //  break;
//        case 'B':
//            printf("The equivalent numeric value range is 6.5 to 7.5.\n");
//            break;
//        case 'C':
//            printf("The equivalent numeric value range is 5.5 to 6.5.\n");
//            break;
//        case 'D':
//            printf("The equivalent numeric value range is 4.5 to 5.5.\n");
//            break;
//        case 'E':
//            printf("The equivalent numeric value range is 3.5 to 4.5.\n");
//            break;
//        default:
//            printf("Invalid grade entered.\n");
//    }
//    
//    return 0;
//}
// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    double n1, n2,number;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    
    {
    
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}


