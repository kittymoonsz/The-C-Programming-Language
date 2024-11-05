// Include standard input-output library
// Provides functions like printf for output to the console
#include <stdio.h> 

// Function prototypes
void printHelloWorld();
void printInvalidEscapeSequence();
void printFahrenheitToCelsiusTable();
void printCelsiusToFahrenheitTable();
void printReverseCelsiusToFahrenheitTable();
void checkGetcharEOF();
void printEOFValue();

// Main function definition
int main() {
    // Execute the functions
    tbnCounter();    
    // Return 0 to indicate successful completion
    return 0;
}

// Prints "Hello, world!"
void printHelloWorld() {
    printf("Hello, world!\n");
}

// Demonstrates the behavior of an invalid escape sequence
// "\c" is not a valid escape sequence in C, so it may trigger a compiler warning or print "c" literally
void printInvalidEscapeSequence() {
    printf("Hello, world!\c\n");
}

// Prints a Fahrenheit to Celsius conversion table
void printFahrenheitToCelsiusTable() {
    float fahr;

    // Print the table heading
    printf("Fahrenheit Celsius\n");
    printf("------------------\n");

    // Loop to generate and print the conversion table
    for (fahr = 0; fahr <= 300; fahr += 20) {
        float cels = (fahr - 32) * 5.0 / 9.0; // Convert Fahrenheit to Celsius
        printf("%6.0f %9.1f\n", fahr, cels);
    }
}

// Prints a Celsius to Fahrenheit conversion table
void printCelsiusToFahrenheitTable() {
    float celsius;

    // Print the table heading
    printf("Celsius Fahrenheit\n");
    printf("------------------\n");

    // Loop to generate and print the conversion table
    for (celsius = 0; celsius <= 300; celsius += 20) {
        float fahr = (celsius * 1.8) + 32; // Convert Celsius to Fahrenheit
        printf("%6.0f %9.1f\n", celsius, fahr);
    }
}

// Prints a Celsius to Fahrenheit conversion table in reverse order
void printReverseCelsiusToFahrenheitTable() {
    float celsius;

    // Print the table heading
    printf("Celsius Fahrenheit\n");
    printf("------------------\n");

    // Loop to generate and print the conversion table in reverse
    for (celsius = 300; celsius >= 0; celsius -= 20) {
        float fahr = (celsius * 1.8) + 32; // Convert Celsius to Fahrenheit
        printf("%6.0f %9.1f\n", celsius, fahr);
    }
}

// Verify if 'getchar() != EOF' is 0 or 1
void checkGetcharEOF() {
    int result = getchar() != EOF;
    printf("Result: %d\n", result);  // Outputs 1 if a character is read, 0 if EOF is reached
}

// Prints the value of EOF
void printEOFValue() {
    printf("%d\n", EOF); // EOF = -1
}

// Counts the number of lines used on getchar()
void countLines() {
    int c;
    int nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d", nl);
}

// Counts tabs, blanks and new lines
void tbnCounter() {
    int tab,blank,nl;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            ++tab;
        } 
        else if (c == ' ')
        {
            ++blank;
        }
        else if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d tabs\n%d blanks\n%d new lines", tab, blank, nl);
}

