int l =-1, r = n+1;
while (r-l > 1) {
    //with equal l give last index
    //without equal r give first index
    //log2 max/E;
    int m = (l + r) / 2;
    if (a[m] <= t) l = m;
    else r = m;
}

//binary search for real numbers 
double long l = 0, r = 1e5+1;
while (r-l > 1e-7) {
    double long m = (l + r) / 2;
    (pred(m) <= t ) ? l = m : r = m;
}
