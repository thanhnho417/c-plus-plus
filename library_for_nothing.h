long gt(long x){
    long kq = 1;
    for(long i=1;i<=x;i++){
        kq*=i;
    }
    return kq;
}
double gtmax(double a, double b, double c){
    double kq = 0;
    if (a < b) kq = a;
    else kq = b;
    if (kq < c) kq = c;
    return kq;
}
double tbaverage(long a, long b, long c){
    return (double)(a+b+c)/3;
}
double tongsum(double a, double b, double c){
    return a+b+c;
}