int ft_atoi(char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    sign = 1;
    res = 0;
    while ((str[i] != '\0') && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
    {
        i++;
    }
    while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            sign *= (-1);
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}
