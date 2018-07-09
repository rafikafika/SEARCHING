#include <stdio.h>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
int tampilan()//fungsi tampilan
{
    cout<<" ====================================\n";
    cout<<"     Program BIS(Binary dan  Sequensial)\n";
    cout<<" ====================================\n\n";
    cout<<" Menu :\n";
    cout<<" \t[1] Binary\n";
    cout<<" \t[2] sequensial\n";
    cout<<" \t[3] Keluar\n\n";
    cout<<" Pilih menu : "; 
}
int binary()
{
            int jd, cari,no, kiri,kanan,tengah,data[30];

    cout<<"\n\t\t *********************************** \n";
    cout<<"\t\t | \t\t\t\t       | \n";
    cout<<"\t\t | \t     Proses Pencarian \t       | \n";
    cout<<"\t\t | Menggunakan Algoritma Binary Search | \n";
    cout<<"\t\t | \t\t\t\t       | \n";
    cout<<"\t\t ********************************** \n\n\n";

    cout<<" Input Jumlah Data  : ";
    cin>>jd;

    cout<<endl;
     for (no=0;no<jd;no++)
     {
          cout<<" Input Data Ke-"<<(no+1)<<"    : ";
         cin>>data[no];
     }

    cout<<endl;
     cout<<" Input Nilai Dicari : ";
     cin>>cari;

     kiri=0;
     kanan=jd-1;
     tengah=(kanan-kiri)/2;

     while ((data[tengah]!=cari) && (kiri>=0)&& (kanan<jd) && (kanan>=kiri))
     {
          if (cari>data[tengah])
         {
              kiri=tengah+1;
         }
         else if (cari<data[tengah])
         {
              kanan=tengah-1;
         }
         tengah=kiri+(kanan-kiri)/2;
     }

    cout<<endl;
    if (data[tengah]==cari)
     {
          cout<<" Keterangan         : Data Ditemukan";
     }
     else
     {
          cout<<" Keterangan         : Data Tidak Ditemukan";
     }

}

int sequensial()
{
            int dataku[16] = {2,3,1,5,10,11,12,19,6,7,8,14,9,24,4,18};
      int caridata, c, flag = 0;

      cout<<"PENCARIAN DENGAN SEQUENTIAL SEARCH"<<endl;
      cout<<"----------------------------------"<<endl;
      cout<<"Data   : ";
            for(int n=0; n<16; n++){
                  cout<<setw(4)<<dataku[n];}
      cout<<endl;

      cout<<"\nMasukkan data yang ingin Anda cari : ";
      cin>>caridata;

      //cari dengan metode sequential search()
      for(c = 0; c<16; c++)
      {
            if(dataku[c]==caridata)
            {
                  flag = 1;
                  break;
            }
      }

      //cetak hasil
      if(flag==1)
            cout<<"Data ditemukan pada indek ke-"<<c<<endl;
      else
            cout<<"Data tidak ditemukan"<<endl;

      _getch();
      return EXIT_SUCCESS;
}
int main()
{
          char menu;
        tampilan();//pemanggilan fungsi tampilan 
        cin>>menu; 
    if(menu == '1')
    {
        binary();
    }
    else if(menu == '2')
    {
        Interpolation();
    }
    else if(menu == '3')
    {
 
    }

    else if(menu == '4')
    {
       cout<<" keluar";
    }
    else
    {
       cout<<" Menu yang anda pilih tidak terdaftar.";
    }
    cout<<"\n\n ====================================\n";

    return 0;
   getch();
}

