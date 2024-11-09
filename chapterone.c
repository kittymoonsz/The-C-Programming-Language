// Include standard input-output library
// Provides functions like printf for output to the console
#include <stdio.h>
#include <string.h>

// Function prototypes
void func_1_1();
void func_1_2();  
void func_1_3();  
void func_1_4();  
void func_1_5();   
void func_1_6(); 
void func_1_7();  
void func_1_5_3(); 
void func_1_9();
void func_1_10();
void func_1_5_4();
void func_1_11();
void func_1_12();
void func_1_13();
void func_1_14();
int func_1_15();
void func_1_16();
char* func_1_17(int min_length, char s[]);

// Main function definition
int main()
{
    func_1_16();
    
    
    
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

// Makes a histogram of each word length
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
            {
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

// Makes a histogram of each character frequency
void func_1_14() {
    #define ASCII_SIZE 128
    int c;
    int frequencies[ASCII_SIZE] = {0};

    while ((c = getchar()) != 'z')
    {
        frequencies[c]++;
    }
    for (int i = 0; i < ASCII_SIZE; ++i)
    {
        if (frequencies[i] > 0)
        {
            if (i != ' ' && i != '\n' && i != '\t')
            {
                printf("'%c' : %-2d : ", i, frequencies[i]);
                
                for (int j = 0; j < frequencies[i]; j++)
                {
                    putchar('#');
                }  
            }
            printf("\n");
        }
    }
}

// Tests function parameters call
int func_1_15(int fahr) {
    int celsius = (fahr - 32) * 5.0 / 9.0;
    return celsius;
}

// Reads input and print the longest line
void func_1_16() {
    #define IN 1
    #define OUT 0
    #define MAX_CHARACTERS 100
    #define MAX_LINES 10

    int c, char_index = 0, line_index = 0;
    char longest_line[MAX_CHARACTERS] = {0};
    char longer_line[MAX_CHARACTERS] = {0};
    int state = OUT;
    char lines[MAX_LINES][MAX_CHARACTERS] = {{0}};

    while ((c = getchar()) != 'z')
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                lines[line_index][char_index] = '\0';
                if (char_index > strlen(longest_line))
                {
                    for (int i = 0; i < char_index; i++)
                    {
                        strcpy(longest_line, lines[line_index]);
                    }  
                }
                if (char_index > 3)
                {
                    for (int i = 0; i < char_index; i++)
                    {
                        strcpy(longer_line, lines[line_index]);
                    }
                    
                }       
                state = OUT;
                char_index = 0;
                line_index++;
            }  
        }
        else
            {
                if (state == OUT)
                {
                    state = IN;
                }
                lines[line_index][char_index++] = c;
            }
    }
    printf("Longest line: %s\n", longest_line);
    printf("Length of longest line: %d\n", strlen(longest_line));
    printf("Inputs that are bigger than 10 characters:\n");
    for (int i = 0; i < line_index; i++) {
        if (strlen(lines[i]) > 3) {
            printf("%s\n", (lines[i]));
        }
    }
}

void func_1_20() 
{
    int c;
}
