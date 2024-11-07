// Include standard input-output library
// Provides functions like printf for output to the console
#include <stdio.h>

// Function prototypes
void func_1_1();   // Print "Hello, world!"
void func_1_2();   // Print invalid escape sequence demonstration
void func_1_3();   // Print Fahrenheit to Celsius conversion table
void func_1_4();   // Print Celsius to Fahrenheit conversion table
void func_1_5();   // Print Celsius to Fahrenheit conversion table in reverse order
void func_1_6();   // Check getchar() != EOF
void func_1_7();   // Print value of EOF
void func_1_5_3(); // Count number of lines
void func_1_9();
void func_1_10();
void func_1_5_4();
void func_1_11();
void func_1_12();
void func_1_13();

// Main function definition
int main()
{
    // Execute the functions
    func_1_13();
    // Return 0 to indicate successful completion
    return 0;
}

// Prints "Hello, world!"
void func_1_1()
{
    printf("Hello, world!\n");
}

// Demonstrates the behavior of an invalid escape sequence
void func_1_2()
{
    // printf("Hello, world!\c");
}

// Prints a Fahrenheit to Celsius conversion table
void func_1_3()
{
    float fahr;

    // Print the table heading
    printf("Fahrenheit Celsius\n");
    printf("------------------\n");

    // Loop to generate and print the conversion table
    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        float cels = (fahr - 32) * 5.0 / 9.0; // Convert Fahrenheit to Celsius
        printf("%6.0f %9.1f\n", fahr, cels);
    }
}

// Prints a Celsius to Fahrenheit conversion table
void func_1_4()
{
    float celsius;

    // Print the table heading
    printf("Celsius Fahrenheit\n");
    printf("------------------\n");

    // Loop to generate and print the conversion table
    for (celsius = 0; celsius <= 300; celsius += 20)
    {
        float fahr = (celsius * 1.8) + 32; // Convert Celsius to Fahrenheit
        printf("%6.0f %9.1f\n", celsius, fahr);
    }
}

// Prints a Celsius to Fahrenheit conversion table in reverse order
void func_1_5()
{
    float celsius;

    // Print the table heading
    printf("Celsius Fahrenheit\n");
    printf("------------------\n");

    // Loop to generate and print the conversion table in reverse
    for (celsius = 300; celsius >= 0; celsius -= 20)
    {
        float fahr = (celsius * 1.8) + 32; // Convert Celsius to Fahrenheit
        printf("%6.0f %9.1f\n", celsius, fahr);
    }
}

// Verify if 'getchar() != EOF' is 0 or 1
void func_1_6()
{
    int result = getchar() != EOF;
    printf("Result: %d\n", result); // Outputs 1 if a character is read, 0 if EOF is reached
}

// Prints the value of EOF
void func_1_7()
{
    printf("%d\n", EOF); // EOF = -1
}

// Counts the number of lines used on getchar()
void func_1_5_3()
{
    int c;
    int nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d\n", nl);
}

// Counts tabs, blanks, and new lines
void func_1_8()
{
    int tab = 0, blank = 0, nl = 0; // Initialize counters
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
    printf("%d tabs\n%d blanks\n%d new lines\n", tab, blank, nl);
}

// Replaces single or more blanks for a single blank
void func_1_9()
{
    int c;
    int in_space = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (in_space == 0)
            {
                putchar(c);
                in_space = 1;
            }
        }
        else
        {
            putchar(c);
            in_space = 0;
        }
    }
}

// Replaces each tab for '\t' and each \ for '\\'
void func_1_10()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
}

// Counts number of lines, characters and words
void func_1_5_4()
{
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

    int c, nl, nw, nc, state;

    state = OUT;
    nc = nl = nw = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
            --nc;
        }
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d new lines\n%d characters\n%d words", nl, nc, nw);
}

// Count words
void func_1_11()
{

#define IN 1
#define OUT 0

    int c, state, new_word;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (state == OUT)
            {
                ++new_word;
                state = IN;
            }
            else if (state = IN)
            {
                ;
            }
        }
    }
    printf("%d words", new_word);
}

// Prints the input with each word separated by lines
void func_1_12()
{
#define IN 1
#define OUT 0
    int c, state, word = 0;
    state = OUT;
    while ((c = getchar()) != 'z')
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            if (state == OUT)
            {
                putchar('\n');
                ++word;
                state = IN;
            }
            else if (state == IN)
            {
                putchar(c);
            }
        }
        else
        {
            putchar(c);
        }
    }
    printf("%d", word);
}

void func_1_13()
{
#define IN 1
#define OUT 0

    int c, state = OUT;
    int index = 0;
    int array_length = 0;
    int array_storage[100] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {https://www.youtube.com/watch?v=672ViOcwDco
                array_storage[index] = array_length;
                ++index;
                state = OUT;
                array_length = 0;
            }
        } 
        else 
        {
            if (state == OUT)
            {
                state = IN;
            }
            array_length++;
        }
    }
    for (int i = 0; i < index; i++)
    {   
        printf("Word %2d - %2d chars: ", i + 1, array_storage[i]);
        for (int j = 0; j < array_storage[i]; j++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}
