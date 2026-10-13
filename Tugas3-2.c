#include <stdio.h>
int main(){
    int pilih, porsi;
    int harga;
    int harga_sesi = 0;
    int total = 0;

    daftar_menu:
    int confirm = 0;
    printf("\n===== Daftar Menu Kuliner =====\n");
    printf("1. Pecel Lele \t - \t Rp. 20.000\n");
    printf("2. Gado-gado \t - \t Rp. 15.000\n");
    printf("3. Nasi Goreng \t - \t Rp. 18.000\n");
    printf("4. Soto Ayam \t - \t Rp. 15.000\n");
    printf("5. Mie Aceh \t - \t Rp. 22.000\n");
    printf("Pesanan anda: ");
    scanf("%d",&pilih);

    switch (pilih){
        case 1:
        harga = 20000;
        printf("Anda memilih Pecel Lele\n"); break;
        case 2:
        harga = 15000;
        printf("Anda memilih Gado-gado\n"); break;
        case 3:
        harga = 18000;
        printf("Anda memilih Nasi Goreng\n"); break;
        case 4:
        harga = 15000;
        printf("Anda memilih Soto Ayam\n"); break;
        case 5:
        harga = 22000;
        printf("Anda memilih Mie Aceh\n"); break;
        default:
        printf("\nPilihan tidak tersedia di menu.");
        return 0;
    }
    printf("Berapa porsi?: ");
    scanf("%d",&porsi);
    harga_sesi = harga * porsi;
    total += harga_sesi;

    printf("Mau pesan yang lain?(ketik 1 jika ya): ");
    scanf("%d",&confirm);
    if(confirm==1){
        goto daftar_menu;
    }else{
        printf("Total harga adalah: Rp. %d",total);
    }
return 0;
}
