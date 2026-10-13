#include <stdio.h>
int main(){
    int pilih;

    printf("===== Menu Buku Perpustakaan =====\n");
    printf("1. Kelantan Dalam Bingkai\n");
    printf("2. Handbook Of Engineering Management\n");
    printf("3. Operations Research: An Introduction\n");
    printf("4. Principles Of Measurement Systems\n");
    printf("5. Raspberry Pi For Dummies\n");
    printf("Masukkan pilihan untuk cek detail: ");
    scanf("%d",pilih);

    if(pilih==1){
        printf("\n Judul Buku: Kelantan Dalam Bingkai\n");
        printf("Author: Johan Arif\n");
        printf("Lokasi: 25.02.078\n");
        printf("Status: Tersedia\n");
    }else if(pilih==2){
        printf("\n Judul Buku: Handbook Of Engineering Management\n");
        printf("Author: Lucy Lunevich\n");
        printf("Lokasi: 25.02.072\n");
        printf("Status: Tersedia\n");

    }else if(pilih==3){
        printf("\n Judul Buku: Operations Research: An Introduction\n");
        printf("Author: Hamdy A. Taha\n");
        printf("Lokasi: 26.01.1198\n");
        printf("Status: Tersedia\n");

    }else if(pilih==4){
        printf("\n Judul Buku: Principles Of Measurement Systems\n");
        printf("Author: John P. Bentley\n");
        printf("Lokasi: 26.01.1215\n");
        printf("Status: Tersedia\n");

    }else if(pilih==5){
        printf("\n Judul Buku: Raspberry Pi For Dummies\n");
        printf("Author: Sean McManus\n");
        printf("Lokasi: 26.01.1200\n");
        printf("Status: Tersedia\n");

    }else{
        printf("\nPilihan tidak valid!");
    }
return 0;
}
