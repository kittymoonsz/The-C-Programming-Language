
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d\n", nl);
}

// Function 1.9: Counts tabs, blanks, and new lines
void func_1_9() {
    int tab = 0, blank = 0, nl = 0; // Initialize counters
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t') {
            ++tab;
        } 
        else if (c == ' ') {