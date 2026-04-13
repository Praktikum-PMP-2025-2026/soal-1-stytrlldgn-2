/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 - Overview of C Language
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : I Ketut Satya Adnyana (13224076)
 *   Nama File           : soal1.c
 *   Deskripsi           : lokiga if else untuk menentukan apakah boleh masuk sebuah gerbang dengan input izin, suhu, radiasi, jam dengan Output Tolak, Karantina, Periksa, Masuk.
 * 
 */
#include <stdio.h>
#include <string.h>  
int main() {
    int Z; //izin
    float S; //suhu 
    int R; //radiasi
    int J; //jam 
    scanf("%d %d %d %d", &Z,&S,&R,&J);
    if (R>=6){
        printf("TOLAK");
    }
    else if (S>=390){
        printf("KARANTINA");
    }
    else if (Z==1 && J<6 || J>20) {
        printf("TOLAK");
    }
    else if ( Z == 1) {
        printf("MASUK");
    }
    else if (Z==2 && R<= 2 && 8<J<18) {
        printf("MASUK");
    }
    else if (Z==2) {
        printf("PEMERIKSAAN");
    }
    else if (Z==3 && R==0 && S<380) {
        printf("MASUK");
    }
    else {
        printf("TOLAK");
    }
    return 0;
}
  
