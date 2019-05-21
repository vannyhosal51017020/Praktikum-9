#include<iostream.h>
#include<conio.h>
#include<math.h>

int hitung(int x, int y)
{
int ls;
ls = x*y;
return(ls);
}

void main()
{
int pilih;
int panjang, lebar, alas, tinggi, sisi;
float luas;
do
   {
   clrscr;
   cout<<"Pilihlan -------> "<<endl;
   cout<<"1. luas persegi panjang \n";
   cout<<"2. luas segitiga \n";
   cout<<"3. luas bujur sangkar \n";
   cout<<"4. selesai \n";
   cout<<"masukkan pilihan anda : ";
   cin>>pilih;

   switch(pilih)
   {
       case 1 : cout<<"masukkan nilai panjang : ";
         		 cin>>panjang;
                cout<<"masukkan nilai lebar : ";
                cin>>lebar;
                luas=hitung(panjang,lebar);
                break;

        case 2 : cout<<"masukkan nilai alas : ";
         		 cin>>alas;
                cout<<"masukkan nilai tinggi : ";
                cin>>tinggi;
                luas=hitung(alas,tinggi)*0.5;
                break;

        case 3 : cout<<"masukkan nilai sisi : ";
         		 cin>>sisi;
                luas=hitung(sisi,sisi);
                break;

        case 4 : cout<<"terima kasih.......";
   }

   if (pilih != 4)
   cout<<"Luasnya adalah : "<<luas;

   getch();
   } while (pilih !=4);
   }
