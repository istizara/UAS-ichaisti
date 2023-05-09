#include <stdio.h>
#include <stdlib.h>

void pinjam (Data *nama, int p, Data *temp, int i){
    if (i-p < 0){
        printf("\nNomor buku tidak valid");
    }
    else if ((temp+p-1)->status == 0){
        printf ("\nBuku telah dipinjamkan");
    }
    else {
        printf ("\nBuku %s diberikan peminjaman", (temp+p-1)->judul);
        nama->status = 0;
    }
    
}