


void insert(int n, double *a, int k){
    int i, num;
    double min = 1000000;
    double tmp;

    for(k = 1; k < n; k++){
        min = 10000000;
        for(i = k; i >= 0; i--){
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