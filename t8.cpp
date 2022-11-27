#include <iostream>
using namespace std;

int main()
{
int i,j,M,N,r,p; int A[5][5],B[5][5],C[5][5];
char jawab;

{
cout<<"Progam Menghitung Matriks task 8 "<<endl;
cout<<"Nama : magrozan Qobus Zaidan " << endl;
cout<<"masukkan ordo matriks :"<<endl;
cout<<"Banyaknya Baris:";
cin>>M;
cout<<"Banyaknya kolom:";
cin>>N;
cout<<endl;
{
if(M==N)
{
cout<<" elemen matriks A:"<<endl;
for(i=0;i<M;i++) for(j=0;j<N;j++)
{
cout<<" elemen ["<<i+1<<","<<j+1<<"]: ";
cin>>A[i][j];
}
cout<<" elemen matriks B:"<<endl;
for (i=0;i<M;i++) for(j=0;j<N;j++)
{
cout<<" elemen ["<<i+1<<","<<j+1<<"]: ";
cin>>B[i][j];
}
{
cout<<"--------------------------------------------"<<endl;
cout<<" pilih 1= jumlah,2= perkalian : ";cin>>p;
cout<<"--------------------------------------------"<<endl;
}
if(p==1)
   {
   for (i=0;i<M;i++) for(j=0;j<N;j++)
   C[i][j]=A[i][j]+B[i][j];
   cout<<"Matriks Hasil Penjumlahan:"<<endl;
   for (i=0;i<M;i++)
   {
   for(j=0;j<N;j++)
   cout<<C[i][j]<<" ";
   cout<<endl;
   }
   }

if(p==2)
   {
   cout<<"MATRIK : "<<endl;
   cout<<"Matriks A            Matriks B"<<endl;
   for (i=0;i<M;i++)
    {
      for (j=0;j<N;j++)
      {
        cout<<A[i][j]<<"    ";
      }
    if (i==0)
    {
       cout<<"x";
       cout<<"    ";
       for (j=0;j<M;j++)
       {
         cout<<B[i][j]<<"    ";
       }
    }
    if (i>0)
    {
        cout<<"    ";
        for (j=0;j<M;j++)
        cout<<" "<<B[i][j]<<"   ";
    }
    cout<<endl;
    }
   C[i+1][j+1]=0;
   for (i=0;i<M;i++)
   {
     for (j=0;j<N;j++)
     {
C[i+1][j+1]=0;
for (r=0;r<N;r++)
       {
       C[i+1][j+1]=C[i+1][j+1]+A[i][r]*B[r][j];
       }
     }
   }
   cout<<endl<<"MATRIKS HASIL PERKALIAN = "<<endl;
   for (i=0;i<M;i++)
   {
     for (j=0;j<N;j++)
     {
       cout<<C[i+1][j+1]<<"     ";
     }
     cout<<endl;
   }
   }
   }
else
  {
   cout<<"Salah !"<<endl;
   }
   }
}
}
