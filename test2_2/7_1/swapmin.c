
void swapmin(int n, double *a, int k){
    int i;
    int min = k;
    double tmp;

    for(i = k; i < n; i++){
        if(a[i] < a[min]){
            min = i;
        }
    }

    tmp = a[min];
    a[min] = a[k];
    a[k] = tmp;
}