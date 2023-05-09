#include <stdio.h>
#include <stdlib.h>

void input (Data *nama, int *i){
    printf("Judul_Buku : ");
    scanf ("%[^\n]", nama->judul);
    printf ("Nama Pengarang : ");
    scanf ("%[^\n]", nama->pengarang);
    printf ("Tahun Terbit : ");
    scanf ("%d", &nama->tahun_terbit);
    printf ("Penerbit : ");
    scanf ("%[^\n]", nama->penerbit);
    nama->status = 1;
    (*i)++;
}

void list (Data *nama, int i){
    int y;
    if (i == 0){
        printf ("Belum ada buku yang diinputkan\n");
        return;
    }
    
    printf ("\tDaftar Buku\n\n");
    for ( y = 0; y < i; y++){
        printf ("No Buku = %d", y+1);
        printf ("\nJudul Buku : %s", (nama+y)->judul);
        printf ("\nNama Pengarang : %s", nama[y].pengarang);
        printf ("\nTahun Terbit : %d", nama[y].tahun_terbit);
        printf ("\nPenerbit : %s", nama[y].penerbit);
        if (nama[y].status == 1) printf ("\nStatus = 'Tersedia'");
        else printf ("\nStatus = 'Dipinjamkan' ");
        printf ("\n\n");
    }
    
    
}