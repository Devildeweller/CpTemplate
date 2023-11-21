//prime checker
bool isprime(int n){
   if(n==1)  return false;
   for(int i=2;i*i<=n;i++){
      if(n%i==0)
          return false;
   }
  return true;
}

//prime generator
bool prime[n + 1];
void SieveOfEratosthenes(int n){ 
   prime[1]=0;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
