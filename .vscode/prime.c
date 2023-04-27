#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void primes(int n){
    int minDiff=n;
    int p1,p2;
    for(int i=2;i<=n/2;i++){
        if(isprime(i)&&isprime(n-i)){
            int diff=n-2*i;
            if(diff<minDiff){
                minDiff=diff;
                p1=i;
                p2=n-i;
            }
        }
    }
    printf("%d %d",p1,p2);

}

int main(){
    int a=11;
    primes(a);
    return 0;
}