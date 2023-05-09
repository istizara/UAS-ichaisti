#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

typedef struct {
    char judul [50];
    char pengarang [50];
    char penerbit [50];
    int tahun_terbit;
    int status;
}Data;

void cari(Data *nama, int i, Data *temp){
    char keyword [50];
    int j;
    printf ("Pencarian Buku Berdasarkan Judul Buku : ");
    scanf("%[^\n]s", keyword);

    system("cls");
    printf("\t Buku yang ditemukan\n\n");
    for(int j = 0; j < i; j++){
        char* lowerJudul = strlwr(nama[j].judul);
        char* lowerKeyword = strlwr(keyword);
        if(strstr(lowerJudul, lowerKeyword) !=NULL){
            printf ("No Buku = %d", j+1);
            printf ("\n Judul Buku :  %s", (temp+j)-> judul);
            printf ("\n Nama Pengarang : %s", nama[j].pengarang);
            printf ("\n Tahun Terbit: %d", nama[j].tahun_terbit);
            printf ("\n Penerbit : %s", nama[j].penerbit);
            if (nama[j].status == 1) printf("\n Status = 'Tersedia'");
            else printf ("\n Status = 'Dipinjamkan'");
            printf ("\n\n");
        }
    }

}