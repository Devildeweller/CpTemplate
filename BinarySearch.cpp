int l =-1, r = n+1;
while (r-l > 1) {
    //with equal l give the last index
    //without equal r give first index
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

//binary search for higher precision 
double long t; cin >> t;
double long l = 0, r = 1e5+1;
//to calculate value to how many times we run the loop use log2 max/E where max is the ans limit and e is the error or precision limit or you can use 100 to be safe all time.
for (int _ = 0; _ < 100 ; _++) {
    double long m = (l + r) / 2;
    (pred(m) <= t ) ? l = m : r = m;
}
cout << fixed << setprecision(15) << l << endl;
