#include <stdio.h>
#include <unistd.h>

int findCount(int n){
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main(){
    int n, dec, soma = 0, i = 10, j = 0, number_of_digits;
    scanf("%d", &n);

    number_of_digits = findCount(n);
    
    while(j < number_of_digits){
        dec = n % i;
        n = n - dec;
        dec = dec / (i/10);
        
        soma += dec;
        
        i *= 10;
        j++;
    }
    
    printf("%d", soma);
    sleep(5); 
    return 0;
}