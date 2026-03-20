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

double maxmangsothuc(double a[], long long n){
    double kq = a[0];
    for(long i=0;i<n;i++) if (a[i] > kq) kq = a[i];
    return kq;
}

double minmangsothuc(double a[], long long n){
    double kq = a[0];
    for(long i=0;i<n;i++) if (a[i] < kq) kq = a[i];
    return kq;
}

void sapxepmangthuc(double a[], long long n){
    for(long long i=1;i<n;i++){
        double tg = a[i]; long long j = i-1;
        while(j>=0 && a[j] > tg){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tg;
    }
}

bool kt_sapxep_sothuc_tangdan(double a[], long long n){
    for(long long i=1;i<n;i++){
        if (a[i] < a[i-1]){
            return false;
            break;
        }
    }
    return true;
}

bool kt_sapxep_sothuc_giamdan(double a[], long long n){
    for(long long i=1;i<n;i++){
        if (a[i] > a[i-1]){
            return false;
            break;
        }
    }
    return true;
}

int sap_tang_giam_ngat_thuc(double a[], long long n, bool &check){
    int kq = 0;
    for(long long i=1;i<n;i++){
        if (a[i-1] == a[i]) kq++;
    }
    for(long long i=1;i<n;i++){
        if(a[i-1]<a[i]) check = true;
        else check = false;
    }
    return kq;
}

int tknp_sn(int a[], int c, int L, int R){
    int M = (L+R)/2;
    if (a[M] == c) return M;
    else if (L > R) return -1;
    else {
        if(a[M] > c) return tknp_sn(a,c,L,M-1);
        else return tknp_sn(a,c,M+1,R);
    }
}
void selectionSort(float a[], int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;i<n;i++){
            if (a[min] > a[j]) min = j;
        }
        float tg = a[i];
        a[i] = a[min];
        a[min] = tg;
    }

}
void Sapchen(float a[], int n){
    for(int i=1;i<n;i++){
        float tg = a[i]; int j = i-1;
        while(j>=0 && a[j] > tg){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tg;
    }
}