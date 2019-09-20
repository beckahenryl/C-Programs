#include <cstdio>
#include <ctime>

//sample code from stackoverflow

int main() {

   //checking runtime

    clock_t start = clock();

    int n = 100;
    int i=0;
    while(i<100*n)
        i++;

    clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime elapsed: %.5f\n", elapsed);

    return 0;
}
