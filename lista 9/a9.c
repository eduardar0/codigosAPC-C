void swap (int *a, int *b)
{
    int c; 
    c = *a; 
    *a = *b;
    *b = c;
    //printf("%d %d\n", *a, *b);
}