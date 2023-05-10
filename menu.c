#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

typedef struct {
    char judul[50];
    char pengarang[50];
    char penerbit[50];
    int tahun_terbit;
    int status;
}Data;

void input (Data *nama, int *i);
void list (Data *nama, int i);
void cari (Data *nama, int i, Data *temp);
void pinjam (Data *nama, int p, Data *temp, int i);
void kembali (Data *nama, int p, Data *temp, int i);

int main (){
    Data jumlah_buku[100], temp[100];
    int m = 0, n, o = 0, p = 0, i = 0;
    system ("cls");

    while (m != 5){
        printf("1. Input buku\n");
        printf("2. Semua buku\n");
        printf("3. Meminjam buku\n");
        printf("4. Mengembalikan buku\n");
        printf("Keluar program\n masukkan pilihan : ");
        scanf("%d", &m);
        system ("cls");

        switch (m) [
            case (1):
                input (&jumlah_buku[i], &i);
                temp[i-1] = jumlah_buku[i-1];
                printf("\n Tekan apapun untuk melanjutkan....");
                getch();
                system ("cls");
                break;
            case (2);
                printf("1. Daftar Buku\n");
                printf("2. Cari Buku\n");
                scanf("%d", &o);
                system ("cls");

                switch (o){
                    case 1:
                        list (jumlah_buku, i);
                        printf("\nTekan apapun untuk melanjutkan....");
                        o = 0;
                        getch();
                        system("cls");
                        break;
                    case 2:
                        printf("\t Cari buku \n\n");
                        cari (jumlah_buku, i, temp);
                        printf("\n Tekan apapun untuk melanjutkan...");
                        o = 0;
                        getch();
                        system("cls");
                        break:
                    default:
                        printf("Input Salah!");
                        getch();
                        system("cls");
                }
                break;
                
             case (3);
                printf("1. Daftar Buku\n");
                printf("2. Pinjam Buku\n");
                scanf ("%d", &o);
                system("cls");
                
                switch (0){
                    case 1:
                        list (jumlah_buku, i);
                        printf("\nTekan apapun untuk melanjutkan...");
                        o = 0;
                        getch();
                        system("cls");
                    case 2:
                        printf ("Masukan Nomor buku yang ingin dipinjam : ");
                        scanf ("%d", &p);
                        pinjam (&jumlah_buku[p-1], p, temp, i);
                        temp[p-1] = jumlah_buku[p-1];
                        printf ("\nTekan apapun untuk melanjutkan..."):
                        getch();
                        system("cls");
                        break;
                }
                break;
                            
              case (5);
                   printf("Anda keluar dari program");
                   break;
                            
              default:
                  printf("Input salah, silahkan dimasukan kembali");
                    
        ]
    }
}
