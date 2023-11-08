void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a % *b;
    *a = *a / *b;
    *b = temp;
}