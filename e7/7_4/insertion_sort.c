
void sort(int n, double *a)
{
    double tmp;
    for (int k=1; k<=n-1; k++) {
        for(int i = k; 1 <= i; i--){
            if(a[i] >= a[i-1]){
            }
            else{
                tmp = a[i];
                a[i] = a[i-1];
                a[i-1] = tmp;
            }
        }
    }
}