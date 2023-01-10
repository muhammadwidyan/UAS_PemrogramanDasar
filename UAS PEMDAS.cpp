/*Nama : Muhammad Widyans Setiawan [15-2021-151]
 UAS PEMROGRAMAN DASAR
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
float X[300];
float Y[300];
float data, totalX, totalY, totalXY, totalXkuadrat, totalYKuadrat,
kuadrattotalX;
int i, ulang, korelasi;
cout << "\n";
cout << " UAS PEMROGRAMAN DASAR\n" << endl;
cout << " Nama : Muhammad Widyans Setiawan [15-2021-151]" << endl;
cout << " Kelas : DD" << endl;
cout << "_____________________________________________" << endl;
cout << endl ;
do
{
 totalX=0, totalY=0, totalXY=0, totalXkuadrat=0, totalYKuadrat=0;
 cout << endl;
 cout << "Input Jumlah N : " ; cin >> data ;
 cout << endl ;
//input data
 for (i=0 ; i<data ; i++)
 {
 cout << "INPUT X-" << i+1 << " : " ; cin >> X[i];
 cout << "INPUT Y-" << i+1 << " : " ; cin >> Y[i];
 cout << endl;
 }
 cout << endl;
// menghitung nilai R dan Koefisien Determinasi
 //menghitung nilai jumlah nilai XY
 for (i=0 ; i<data ; i++)
 totalXY=totalXY+(X[i]*Y[i]);
 //menghitung nilai jumlah X dan jumlah Y
 for (i=0 ; i<data ; i++)
 {
 totalX=totalX+X[i];
 totalY=totalY+Y[i];
 }
 //menghitung total X kuadrat
 for (i=0 ; i<data ; i++)
 totalXkuadrat=totalXkuadrat+(X[i]*X[i]);
 //menghitung total Y Kuadrat
 for (i=0 ; i<data ; i++)
 totalYKuadrat=totalYKuadrat+(Y[i]*Y[i]);
 // menghitung kuadrat total X
 for (i=0 ; i<data ; i++)
 kuadrattotalX=totalX*totalX;
 // mendefinisikan pangkat 2 dari rumus R
 float pkt1 = 2;
 float nX = data*totalX;
 float pangkatA = pow(nX,pkt1);
 // mendefinisikan akar A = n*Xkuadrat - (n*totalX)pangkat 2
 float akarA = sqrt((data*totalXkuadrat)-(pangkatA));
 // mendefinisikan pangkat 2 dari rumus R
 float pkt2 = 2;
 float nY = data*totalY;
 float pangkatB = pow(nY,pkt2);
 // mendefinisikan akar B = n*Y kuadrat - (n*totalY)pangkat 2
 float akarB = sqrt((data*totalYKuadrat)-(pangkatB));
 //menghitung nilai korelasi r
 float r =((data*totalXY)- (totalX*totalY)) / ( akarA + akarB );
 //menghitung nilai koefisien determinasi
 float koefisiendeterminasi = (r*r) * (100/100);
 //mencari korelasi r
 if (r<0.09)
 {
 cout << "Hubungan korelasi diabaikan"; cin >> korelasi;
 }
 if (r<0.29)
 {
 cout << "Hubungan korelasi rendah"; cin >> korelasi;
 }
 if (r<0.49)
 {
 cout << "Hubungan korelasi moderat"; cin >> korelasi;
 }
 if (r<0.70)
 {
 cout << "Hubungan korelasi sedang"; cin >> korelasi;
 }
 if (r>0.70)
 {
    cout << "Hubungan korelasi sangat kuat"; cin >> korelasi;
 }
 // menampilkan hasil dari nilai korelasi r dan koefisien determinasi
 cout << "Output yang Dihasilkan" << endl;
 cout << "a. Nilai Korelasi R = " << r << endl;
 cout << "b. Koefisien Determinasi = " << koefisiendeterminasi << endl;
 cout << "c. Kekuatan Hubungan dari Nilai Korelasi = " << korelasi <<
endl;
getch();
 // fungsi mengulang program
 cout << " " << endl;
 cout << "Ingin mengulang (Y/T) ?" ;
 ulang=getch();
 } while (ulang=='Y' || ulang=='y');
return 0;
}
