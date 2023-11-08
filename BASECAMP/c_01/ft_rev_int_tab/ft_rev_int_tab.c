void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int container;

    i = 0;
    while (i < size)
    {
        container = tab[i];
        tab[i] = tab[size - 1];
        tab[size - 1] = container;
        i++;
        size--;
    }
}