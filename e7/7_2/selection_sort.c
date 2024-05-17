
#define MAX_N 64

void sort(int n, double *a){
    int num;
    double tmp;
    double min = MAX_N;
    int k;
    for (k=0; k<=n-2; k++) {
    min = MAX_N;
        for(int i = k+1; i < n; i++){
            if(a[i] < min){
                min = a[i];
                num = i;
            }
        }
    tmp = a[num];
    a[num] = a[k];
    a[k] = tmp;
    }
}