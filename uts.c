#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    printf("=======================================\n");
    printf("        HALAMAN LOGIN - FLEXCALC       \n");
    printf("=======================================\n");

    printf("Masukkan Username : ");
    scanf("%s", username);

    printf("Masukkan Password : ");
    scanf("%s", password);

    if (strcmp(username, "user") == 0 && strcmp(password, "54321") == 0) {
        printf("\n[SUCCESS] Login berhasil!! Selamat datang, %s !!!\n", username);
        printf("=======================================\n\n");

        printf("=======================================\n");
        printf("      INPUT TARGET & KEMAMPUAN         \n");
        printf("=======================================\n");

        float target_kalori, kalori_sarapan, kalori_siang;
        int set_rutin, rep_per_set;
        int target_pullup, kemampuan_max;

        printf("Masukkan target kalori harian (kcal) : ");
        scanf("%f", &target_kalori);

        printf("Masukkan kalori sarapan (kcal)       : ");
        scanf("%f", &kalori_sarapan);

        printf("Masukkan kalori makan siang (kcal)   : ");
        scanf("%f", &kalori_siang);

        printf("\nBerapa set push-up rutin kamu?       : ");
        scanf("%d", &set_rutin);

        printf("Berapa repetisi push-up per set?     : ");
        scanf("%d", &rep_per_set);

        printf("\nMasukkan target total pull-up hari ini: ");
        scanf("%d", &target_pullup);

        printf("Batas maksimal pull-up per 1 set     : ");
        scanf("%d", &kemampuan_max);

        float total_kalori_masuk = kalori_sarapan + kalori_siang;
        float sisa_kalori = target_kalori - total_kalori_masuk;
        int total_pushup = set_rutin * rep_per_set;
        
        int estimasi_set_pullup = (float)target_pullup / kemampuan_max;
        int sisa_pullup_terakhir = target_pullup % kemampuan_max;

        printf("\n=======================================\n");
        printf("        RINGKASAN LATIHAN HARI INI     \n");
        printf("=======================================\n");
        printf("Pengguna Akun         : %s\n", username);
        printf("Total Kalori Masuk    : %.1f kcal\n", total_kalori_masuk);
        printf("Sisa Target Kalori    : %.1f kcal\n", sisa_kalori);
        printf("Total Push-up Rutin   : %d repetisi\n", total_pushup);
        printf("Estimasi Set Pull-up  : %d set\n", estimasi_set_pullup);
        printf("Sisa Pull-up Set Akhir: %d repetisi\n", sisa_pullup_terakhir);
        printf("=======================================\n");

    } else {
        printf("Password yang Anda Masukan Salah\n");
    }

    return 0;
}