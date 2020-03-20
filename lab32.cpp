#include <iostream>
#include <time.h>
using namespace std;
#define N 3

int s=0,choise=1;

void massive(int Mat[N][N],int NN){
  for (int j=0;j<NN;j++)
  for (int i=0; i<NN; i++) Mat[j][i]=rand()%100/3.5;
}

void pm(int Mat[N][N],int NN){
  for (int j=0;j<NN;j++){
    for (int i=0; i<NN; i++) {
      if(Mat[j][i]<10) cout<<" ";
      cout<<Mat[j][i]<<" ";
    }
    cout<<"\n";
  }
}

int summ(int Matr[N][N],int Str){
  int s=0;
  if (Str<=N/2){
    for(int a=0,b=N-1;a<=Str,b>=N-Str-1;a++,b--){
      if(b==a){
        s+=Matr[Str][a];
      }
      else{
      s+=Matr[Str][a];
      s+=Matr[Str][b];
      }
    }
  }
  if(Str>N/2){
    for(int a=0,b=N-1;a<=N-1-Str,b>=Str;a++,b--){
      s+=Matr[Str][a];
      s+=Matr[Str][b];
    }
  }
  return s;
}


int main(){
 do{
    time_t k;
    srand (time(&k));
    int A[N][N];
    massive(A,N);
    pm(A,N);
    for(int i=0;i<N;i++){
      s+=summ(A,i);
    }
    cout<<s;
    cout<<"Continue? ";
    cin>>choise;
  }while(choise!=0);
}
