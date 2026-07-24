// Số Fibonacci 
#include <stdio.h>


int F(int n) {
    if ( n == 0 || n == 1){
        return n;
    }
    else {
        return F(n-1) + F(n-2);
    }
}


int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d", F(n));
    return 0;
}


// CODE TÍNH TỔ HỢP CHẬP K CỦA N BẰNG HÀM ĐỆ QUY TRONG LẬP TRÌNH C
#include <stdio.h>

int C (int n, int k) {
    if ( n == k || k == 0) {
        return 1;
    }
    if (n < k || k < 0) {
        return 0;
    }
    else{
        return C(n - 1, k - 1) + C(n - 1, k);
    }
}

int main (){
    int n; int k;
    scanf ("%d", &n);
    scanf ("%d", &k);

    if (n < k || k < 0)
    {
        printf ("Vo Li");
    }
    else {
        printf ("%d", C(n,k));
    }
    return 0;
}
