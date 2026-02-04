int missingNum(int *arr, int size) {
    long long a=size,i,sum=0;
    long long real=((a+1)*(a+2))/2;
    for(i=0;i<a;i++) {
        sum=sum+arr[i];
    }
    long long  b=real-sum;
    return b;
}
