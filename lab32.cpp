#include <iostream>
#include <time.h>
using namespace std;
#define N 3

int s=0,choise=1;

int massive(int Mat[N][N],int NN){
  for (int j=0;j<NN;j++){
  for (int i=0; i<NN; i++){
     Mat[j][i]=rand()%100/3.5;
     cout<<Mat[j][i]<<" ";
    }
   cout<<"\n";
  }
}
int summ(int Matr[N][N],int Num){
  for(int a=0,b=N-1;a<=N/2,b>=N/2;a++,b--){
    for(int c=0,d=N-1;c<=a,d>=N-1-a;c++,d--){
      if(b==a){
        s+=Matr[a][c];
        s+=Matr[a][d];
      }
      else{
      s+=Matr[a][c];
      s+=Matr[a][d];
      s+=Matr[b][c];
      s+=Matr[b][d];
    }
    }
  }
  cout<<"\nSum : "<<s;
}


int main(){
  do{
    time_t k;
    srand (time(&k));
    int A[N][N];
    massive(A,N);
    summ(A,N);
    cout<<"Continue? ";
    cin>>choise;
  }while(choise!=0);
}
