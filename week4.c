#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

//FUNCTION TO PRINT THE NEXT 4 CORRESPONDING VALUES FOR FLOAT
void float_F(float val) {
     for (int i = 1; i<=4; i++) {
        float next = val + (3 * i);
        printf("Next: %.2f\n", next);
    }
}


void F() {
    float val;
    bool isFloat = true;

    while (isFloat) {
        printf("Enter the float value: ");
        if (scanf("%f", &val) == 1) {    //to check if input is a float
            isFloat = false;
        } else {
            printf("Invalid input! Please enter a valid float\n");  //prompt user to input a valid float value
            while (getchar() != '\n');
       }
    }
    float_F(val);
    printf("Input: %.2f, Size: %zu bytes\n", val, sizeof(val)); 
}

//FUNCTION TO PRINT THE NEXT 4 CORRESPONDING VALUES FOR CHAR
void char_C(char val) {
     for (int i = 1; i<=4; i++) {
        char next = val + (3 * i);
        printf("Next: %c\n", next);
    }
}
void C() {
    char val;
    bool isChar = true;
     while (isChar) {
        printf("Enter the character: ");
        if (scanf(" %c", &val) == 1) {    //to check if input is a character
            isChar = false;
        } else {
            printf("Invalid input! Please enter a valid character\n");  //prompt user to input a valid character
            while (getchar() != '\n');
       }
    }
    char_C(val);
    printf("The ASCII value is: %d\n", val);
    printf("Input: %c, Size: %zu bytes\n", val, sizeof(val));

}

//FUNCTION TO PRINT THE NEXT 4 CORRESPONDING VALUES FOR INT
void int_I(int val) {
     for (int i = 1; i<=4; i++) {
        char next = val + (3 * i);
        printf("Next: %d\n", next);
    }
}

void I() {
    int val;
    bool isInt = true;
     while (isInt) {
        printf("Enter the integer: ");
        if (scanf("%d", &val) == 1) {    //to check if input is int
            isInt = false;
        } else {
            printf("Invalid input! Please enter a integer\n");  //prompt user to input a valid integer
            while (getchar() != '\n');
       }
    }
    int_I(val);
    printf("The ASCII value is: %d\n", val);
    printf("Input: %d, Size: %zu bytes\n", val, sizeof(val));

}



int main() {
    char input;
    printf("What type of value do you want to enter: \nA. character\nB. float\nC. integer\n");
    scanf("%c", &input);
    switch (input)
    {
        case 'A': {
        C(); //function to handle char
        break;
    }
        case 'B': {
        F();//function to handle float
        break;
        }
        case 'C': {
        I();//function to handle integer
        break;
        }
        default:
        printf("Invalid input\n");
        break;
    }
  return 0;

}