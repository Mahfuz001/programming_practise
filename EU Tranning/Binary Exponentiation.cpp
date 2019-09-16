//Returns a^n mod m
//Complexity O(n)
ll BrutePowerCalc(ll a, ll n, ll m){
    ll curr = 1;
    
    for(ll i = 1; i <= n; i++){
        curr = (curr * (a % m)) % m;
    }
    
    return curr;
}

//Return a^n mod m
//Complexity O(log2(n))
ll FastPowerCalc(ll a, ll n, ll m){
    if(n == 0)
        return 1;
        
    ll res = FastPowerCalc(a, n/2, m);
    res = (res * res) % m;
    
    if(n % 2 == 1)
        res = (a * res) % m;
    return res;
}
