

void sort(int n, double *a) {
    int i;
    int k;
    double tmp;

    for(k = 1; k <= n-1; k++){
        for(i = k; i >= 1; i--){
            if(a[i-1] <= a[i]){
                break;
            }
            else{
                tmp = a[i];
                a[i] = a[i-1];
                a[i-1] = tmp;
            }
        }
    }
}