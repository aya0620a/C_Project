


void sort(int n, double *a, int k){
    int i;
    int min = k;
    double tmp;

    for(k = 0; k <= n-2; k++){
        min = k;
        for(i = k; i < n; i++){
            if(a[i] < a[min]){
                min = i;
            }
        }
        tmp = a[min];
        a[min] = a[k];
        a[k] = tmp;
    }
}