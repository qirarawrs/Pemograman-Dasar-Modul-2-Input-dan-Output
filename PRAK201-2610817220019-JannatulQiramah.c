#include <stdio.h>

int main() {
char nama[100];
char nim[20];
char paralel_kelas[10];
char ttl[67];
char alamat[200];
char hobby[100];
char no_hp[20];

printf("Nama :");
scanf(" %[^\n]", nama);

printf("NIM :");
scanf("%s", nim);

printf("Kelas Paralel :");
scanf(" %[^\n]", paralel_kelas);

printf("Tempat/Tanggal Lahir :");
scanf(" %[^\n]", ttl);

printf("Alamat :");
scanf(" %[^\n]", alamat);

printf("Hobby :");
scanf(" %[^\n]", hobby);

printf("No. HP :");
scanf("%s", no_hp);

printf("\n____________________________________________________________\n");
printf("\nNama                      : %s", nama);
printf("\nNIM                       : %s", nim);
printf("\nKelas Paralel             : %s", paralel_kelas);
printf("\nTempat/Tanggal Lahir      : %s", ttl);
printf("\nAlamat                    : %s", alamat);
printf("\nHobby                     : %s", hobby);
printf("\nNo. HP                    : %s", no_hp);

    return 0;
}