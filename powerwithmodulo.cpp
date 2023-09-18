int power(int x, int y)
{

    int res = 1;
    while (y) {
        if (y & 1)
            res = (res * x)%mod;
        y = y >> 1;

        x = (x * x)%mod;
    }
    return res % mod;
}
