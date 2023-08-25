int power(int x, int y, int p)
{

    int res = 1;
    while (y > 0) {
        if (y % 2 == 1)
            res = (res * x);
        y = y >> 1;

        x = (x * x);
    }
    return res % p;
}
