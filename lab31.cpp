#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
#define N1 10
#define N2 20
int maxim[2]={0,0},maxi[2]={0,0},s [2]={0,0};
int choise=1;

int * find(float M[],int N,int number,int maxim[],int maxi[],int s[]){
  for (int i=0; i<N; i++){
    if (M[i]>maxim[number]) {
      maxim[number]=M[i];
      maxi[number]=i;
    }
  }
  for(int i=maxi[number];i<N;i++){
    s[number]+=M[i];
  }
  return maxi;
}

int * massive(float M[],int N){
  for (int i=0; i<N; i++){
     M[i]=rand()%100/3.5*pow(-1,rand());
   }
   cout<<"\n";
}

void out_m(float M[],int N){
  for (int i=0; i<N; i++){
    cout<<M[i]<<" ";
  }
  cout<<"\n";
}

void out(int maxi[],int s[]){
  cout<<"Max 1: "<<maxi[0]<<"\n";
  cout<<"Max 2: "<<maxi[1]<<"\n";
  if(s[0]>s[1]) cout<<"1st is bigger \n";
  else cout<<"2nd is bigger \n";
}

int main(){
  //do{
  time_t k;
  srand (time(&k));
  float A[N1],B[N2];
  massive(A,N1);
  massive(B,N2);
  out_m(A,N1);
  out_m(B,N2);
  find(A,N1,0,maxim,maxi,s);
  find(B,N2,1,maxim,maxi,s);
  out(maxi,s);
/*  cout<<"Continue? ";
  cin>>choise;
}while(choise!=0);*/
}
