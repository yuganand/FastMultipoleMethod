#include <iostream>
#include <cmath>
using namespace std;
void CalculateInSquare(double *X,double *U,double *Y,int N,int M,double* ans);
void CalculateInSqrt(double *X,double *U,double *Y,int N,int M,double* ans);
void CalculateInLog(double *X,double *U,double *Y,int N,int M,double* ans);
void CalculateInLinear(double *X,double *U,double *Y,int N,int M,double* ans);
int main()
{
    int N,M;
    cin >> N >> M;
    double X[N];
    double U[N];
    double Y[M];
    for(int i=0;i<N;i++){
        cin >> X[i] >> U[i];
    }
    for(int i=0;i<M;i++){
        cin >> Y[i];
    }
    double ans1[M];
    double ans2[M];
    double ans3[M];
    double ans4[M];
    for(int i=0;i<M;i++){
        ans1[i] = 0;
        ans2[i] = 0;
        ans3[i] = 0;
        ans4[i] = 0;
    }
    CalculateInSquare(X,U,Y,N,M,ans1);
    CalculateInSqrt(X,U,Y,N,M,ans2);
    CalculateInLog(X,U,Y,N,M,ans3);
    CalculateInLinear(X,U,Y,N,M,ans4);
    double maxa = 0;
    double maxb = 0;
    for(int i=0;i<M;i++){
        maxa = max(maxa,abs(ans1[i]-ans2[i]));
        maxb = max(maxb,abs((ans1[i]-ans2[i])/ans1[i]));
    }
    cout << maxa << " " << maxb << endl;
    maxa = 0;
    maxb = 0;
    for(int i=0;i<M;i++){
        maxa = max(maxa,abs(ans1[i]-ans3[i]));
        maxb = max(maxb,abs((ans1[i]-ans3[i])/ans1[i]));
    }
    cout << maxa << " " << maxb << endl;
    maxa = 0;
    maxb = 0;
    for(int i=0;i<M;i++){
        maxa = max(maxa,abs(ans1[i]-ans4[i]));
        maxb = max(maxb,abs((ans1[i]-ans4[i])/ans1[i]));
    }
    cout << maxa << " " << maxb << endl;
}