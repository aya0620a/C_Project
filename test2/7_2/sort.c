

// void swapmin(int n, double *a, int k){
//     int i;
//     int min = 10000000;    
//     int tmp;    //ダミー
//     int num;

// //最小値を探す
//     for(i = k; i < n; i++){
//         if(a[i] < min){
//             min = a[i];
//             num = i;
//         }
//     }
//     tmp = a[k];
//     a[k] = min;
//     a[num] = tmp;
// }

void sort(int n, double *a){
    int i, k,num;
    double tmp;
    double min = 10000000;

    for(k = 0; k <= n-2; k++){
        min = 10000000;
        for(i = k; i < n; i++){
            if(a[i] < min){
                min = a[i];
                num = i;
            }
        }
        tmp = a[k];
        a[k] = min;
        a[num] = tmp;
    }
}