#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#define size 50

void gotoxy(int x, int y);
void menu();
void box();
void info();
void pulau();
void smtr();
void jw();
void kal();
void sul();
void mlk();
void pap();
void pulau1();
void smtr1();
void jw1();
void kal1();
void sul1();
void mlk1();
void pap1();
void hapus();
void removenode1();
void removenode2();
//void pesan();
//void exit();

COORD coord={0,0};
int eselection, rselection,aselection;
int i;
int pos[size];
FILE *f;

//struct tm tm;
struct akomodasi
{
    char name[50], position[50], date[50], city[50];
    int days, total;
    struct akomodasi *next
};

struct akomodasi personil1;

struct transportasi
{
    char name[50], position[50], date[50], city[50];
    int  days, total;
    struct transportasi *next
};

struct transportasi personil;

struct transportasi *transhead;
struct akomodasi *akomodasihead;

int main() {
  system ("color 17");
  menu();
  return 0;
}

void menu() {
    system("cls");
    system ("color 17");
    printf ("\t\t\t\t _________________________________________________________\n");
    printf ("\t\t\t\t|  _____________________________________________________  |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |             ___  ___  ____ __  __ __  __            | |\n");
    printf ("\t\t\t\t| |             ||\\\\//|| ||    ||\\ || ||  ||            | |\n");
    printf ("\t\t\t\t| |             || \\/ || ||==  ||\\\\|| ||  ||            | |\n");
    printf ("\t\t\t\t| |             ||    || ||___ || \\|| \\\\__//            | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |         1. PENYUSUNAN ANGGARAN TRANSPORTASI         | |\n");
    printf ("\t\t\t\t| |         2. PENYUSUNAN ANGGARAN AKOMODASI            | |\n");
    printf ("\t\t\t\t| |         3. INFORMASI PROGRAM                        | |\n");
    printf ("\t\t\t\t| |         4. HAPUS DATA                               | |\n");
    printf ("\t\t\t\t| |         5. KELUAR                                   | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                   SELECT: 1/2/3/4                   | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |_____________________________________________________| |\n");
    printf ("\t\t\t\t|_________________________________________________________|\n");
    gotoxy(72,16);

  switch (getch()){
    case '1':
        pulau();
    break;
    case '2':
       pulau1();
    break;
    case '3':
        info();
    break;
    case '4':
      hapus();
    break;
    case '5':
      exit(0);
    break;
    default:
      gotoxy(46,18);
      printf ("Mohon tekan pilihan yang tersedia!");
      Sleep (1200);
      return menu();
  }
}

void box(){
    system("cls");
    system ("color 17");
    printf ("\t\t\t\t _________________________________________________________\n");
    printf ("\t\t\t\t|  _____________________________________________________  |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |_____________________________________________________| |\n");
    printf ("\t\t\t\t|_________________________________________________________|\n");

  }

void info(){
    system ("cls");
    printf ("\t\t\t\t _________________________________________________________\n");
    printf ("\t\t\t\t|  _____________________________________________________  |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |    =PROGRAM PENYUSUNAN ANGGARAN SURVEY LAPANGAN=    | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                        Oleh:                        | |\n");
    printf ("\t\t\t\t| |            AILSA SYAFFA DYNIA - 186199871           | |\n");
    printf ("\t\t\t\t| |          ANUGRAH INDAH LESTARI - 1906324302         | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |       Program ini bertujuan untuk otomatisasi       | |\n");
    printf ("\t\t\t\t| |      penyusunan anggaran survei lapangan dengan     | |\n");
    printf ("\t\t\t\t| |       menyesuaikan kepada Standar Biaya Masukan     | |\n");
    printf ("\t\t\t\t| |                  Tahun Anggaran 2020                | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |      Tekan apa saja untuk kembali ke menu utama     | |\n");
    printf ("\t\t\t\t| |                                                     | |\n");
    printf ("\t\t\t\t| |_____________________________________________________| |\n");
    printf ("\t\t\t\t|_________________________________________________________|\n");
    getch();
    return menu();
}

void inputfiletransportasi()
{
    FILE * f;
    f = fopen("transportasifix.txt", "a+");
    struct transportasi *iterator = transhead;

    if(f==NULL)
    {
        printf("Error\n");
    }
    else
    {
        while(iterator!= NULL)
        {
            fprintf(f, "\n%s\t%s\t%s\t%s\t%d\t%d", iterator->name, iterator->position, iterator->date, iterator->city, iterator->days, iterator->total);
            iterator= iterator->next;
        }
    }
    fclose(f);
    }

void inputfileakomodasi()
{
    FILE * f;
    f = fopen("akomodasifix.txt", "a+");
    struct akomodasi *iterator = akomodasihead;

    if(f==NULL)
    {
        printf("Error\n");
    }
    else
    {
        while(iterator!= NULL)
        {
            fprintf(f, "\n%s\t%s\t%s\t%s\t%d\t%d", iterator->name, iterator->position, iterator->date, iterator->city, iterator->days, iterator->total);
            iterator= iterator->next;
        }
    }
    fclose(f);
    }

void gotoxy(int x, int y) {
  coord.X=x;
  coord.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



void pulau()
{
    system("cls");
    system("color e1");
    box();
    gotoxy(54,4);
    printf("PILIH PULAU");
    gotoxy(42,7);
    printf("1. Sumatera");
    gotoxy(42,8);
    printf("2. Jawa, Bali, dan Nusa Tenggara");
    gotoxy(42,9);
    printf("3. Kalimantan");
    gotoxy(42,10);
    printf("4. Sulawesi");
    gotoxy(42,11);
    printf("5. Kepulauan Maluku");
    gotoxy(42,12);
    printf("6. Papua");
    gotoxy(49,15);
    printf("SELECT: 1/2/3/4/5/6");

    eselection=getch();
    eselection=toupper(eselection);

    switch(eselection){
    case '1':
        smtr();
    break;
    case '2':
       jw();
    break;
    case '3':
       kal();
    break;
    case '4':
       sul();
    break;
    case '5':
       mlk();
    break;
    case '6':
       pap();
    break;
    default:
      gotoxy(46,17);
      printf ("Mohon tekan pilihan yang tersedia!");
      Sleep (1200);
      return pulau();
  }

}

void smtr()
{
    system("cls");
    system("color e1");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(44,8);
    printf("1. Nanggroe Aceh Darussalam");//Aceh
    gotoxy(44,9);
    printf("2. Sumatera Utara");//Medan
    gotoxy(44,10);
    printf("3. Sumatera Barat");//Padang
    gotoxy(44,11);
    printf("4. Riau");//Riau
    gotoxy(44,12);
    printf("5. Kepulauan Riau");//Tanjung Pinang
    gotoxy(64,8);
    printf("6. Bengkulu");//Bengkulu
    gotoxy(64,9);
    printf("7. Sumatera Selatan");//Palembang
    gotoxy(64,11);
    printf("8. Kepulauan Bangka Belitung");//Pangkal Pinang
    gotoxy(64,12);
    printf("9. Lampung");//Bandar Lampung
    gotoxy(49,15);
    printf("SELECT: 1/2/3/4/5/6/7/8/9");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(40,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(40,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
           // f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 4492000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }

    case '2':{
     box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
           // f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 3808000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            //f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2952000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            //f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 3016000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            //f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 3016000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '6':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            //f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2268000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
            }
    }
    case '7':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            //f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2139000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '8':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
           // f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2268000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '9':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
           // f=fopen("transportasi.txt","a+");
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 1583000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

    default:
      gotoxy(46,17);
      printf ("Mohon tekan pilihan yang tersedia!");
      Sleep (1200);
      return smtr();
  }}}}


void jw()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH KOTA");
    gotoxy(54,7);
    printf("1. Jawa Tengah");//Semarang
    gotoxy(54,8);
    printf("2. DI Yogyakarta");
    gotoxy(54,9);
    printf("3. Jawa Timur");//Surabaya
    gotoxy(54,10);
    printf("4. Bali");
    gotoxy(54,11);
    printf("5. Nusa Tenggara Barat");//Mataram
    gotoxy(54,12);
    printf("6. Nusa Tenggara Timur");//Kupang
    gotoxy(54,15);
    printf("SELECT: 1/2/3/4/5/6");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2182000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2268000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2674000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 4471000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 3230000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '6':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 5081000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    default:
        gotoxy(46,17);
        printf ("Mohon tekan pilihan yang tersedia!");
        Sleep (1200);
        return jw();
    }
}

void kal()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(54,7);
    printf("1. Kalimantan Utara");// Tanjung Selor
    gotoxy(54,8);
    printf("2. Kalimantan Barat");//Pontianak
    gotoxy(54,9);
    printf("3. Kalimantan Tengah");//Palangkaraya
    gotoxy(54,10);
    printf("4. Kalimantan Timur");//Samarinda
    gotoxy(54,11);
    printf("5. Kalimantan Selatan");//Banjarmasin
    gotoxy(55,15);
    printf("SELECT: 1/2/3/4/5");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 0;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2781000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 298400;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
            }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 3797000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 2995000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

    default:
        gotoxy(46,17);
        printf ("Mohon tekan pilihan yang tersedia!");
        Sleep (1200);
        return kal();
    }
}}}

void sul()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(54,7);
    printf("1. Gorontalo");
    gotoxy(54,8);
    printf("2. Sulawesi Utara");//Manado
    gotoxy(54,9);
    printf("3. Sulawesi Barat");//Mamuju
    gotoxy(54,10);
    printf("4. Sulawesi Tengah");//Palu
    gotoxy(54,11);
    printf("5. Sulawesi Selatan");//Makassar
    gotoxy(54,12);
    printf("6. Sulawesi Tenggara");//Kendari
    gotoxy(54,15);
    printf("SELECT: 1/2/3/4/5/6");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 4824000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 5102000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 4867000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
            }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 5113000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 3829000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }

    case '6':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 4182000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

    default:
        gotoxy(46,17);
        printf ("Mohon tekan pilihan yang tersedia!");
        Sleep (1200);
        return sul();
    }
}}}

void mlk()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(54,9);
    printf("1. Maluku");// Ambon
    gotoxy(54,10);
    printf("2. Maluku Utara");//Ternate
    gotoxy(54,15);
    printf("SELECT: 1/2");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 7081000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 6664000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

    default:
        gotoxy(46,17);
        printf ("Mohon tekan pilihan yang tersedia!");
        Sleep (1200);
        return mlk();
    }
}}}

void pap()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH KOTA");
    gotoxy(54,9);
    printf("1. Papua");//Jayapura
    gotoxy(54,10);
    printf("2. Papua Barat");//Manokwari
    gotoxy(54,15);
    printf("SELECT: 1/2");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 8193000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN TRANSPORTASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct transportasi *temp = (struct transportasi*)malloc(sizeof(struct transportasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                transhead = malloc(sizeof(struct transportasi));
                temp = transhead;
            }
            else
            {
            temp->next = malloc(sizeof(struct transportasi));
            temp = transhead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            temp->total = 10824000;
            temp->next = NULL;
            inputfiletransportasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    default:
        gotoxy(46,17);
        printf ("Mohon tekan pilihan yang tersedia!");
        Sleep (1200);
        return pap();
    }
}


void pulau1()
{
    system("cls");
    system ("color 17");
    box();
    gotoxy(54,4);
    printf("PILIH PULAU");
    gotoxy(42,7);
    printf("1. Sumatera");
    gotoxy(42,8);
    printf("2. Jawa, Bali, dan Nusa Tenggara");
    gotoxy(42,9);
    printf("3. Kalimantan");
    gotoxy(42,10);
    printf("4. Sulawesi");
    gotoxy(42,11);
    printf("5. Kepulauan Maluku");
    gotoxy(42,12);
    printf("6. Papua");
    gotoxy(49,15);
    printf("SELECT: 1/2/3/4/5/6");

    eselection=getch();
    eselection=toupper(eselection);

    switch(eselection){
    case '1':
        smtr1();
    break;
    case '2':
        jw1();
    break;
    case '3':
        kal1();
    break;
    case '4':
        sul1();
    break;
    case '5':
        mlk1();
    break;
    case '6':
        pap1();
    break;
    default:
      gotoxy(46,17);
      printf ("Mohon tekan pilihan yang tersedia!");
      Sleep (1200);
      return pulau1();
  }
}

void smtr1()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(44,8);
    printf("1. Nanggroe Aceh Darussalam");//Aceh
    gotoxy(44,9);
    printf("2. Sumatera Utara");//Medan
    gotoxy(44,10);
    printf("3. Sumatera Barat");//Padang
    gotoxy(44,11);
    printf("4. Riau");//Riau
    gotoxy(44,12);
    printf("5. Kepulauan Riau");//Tanjung Pinang
    gotoxy(64,8);
    printf("6. Bengkulu");//Bengkulu
    gotoxy(64,9);
    printf("7. Sumatera Selatan");//Palembang
    gotoxy(64,11);
    printf("8. Kepulauan Bangka Belitung");//Pangkal Pinang
    gotoxy(64,12);
    printf("9. Lampung");//Bandar Lampung
    gotoxy(49,15);
    printf("SELECT: 1/2/3/4/5/6/7/8/9");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a = 556000;
            temp->total = (temp->days)*(a);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
            }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a1 = 530000;
            temp->total = (temp->days)*(a1);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a2 = 650000;
            temp->total = (temp->days)*(a2);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a3 = 792000;
            temp->total = (temp->days)*(a3);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a4 = 792000;
            temp->total = (temp->days)*(a4);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '6':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a5 = 650000;
            temp->total = (temp->days)*(a5);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '7':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a6 = 861000;
            temp->total = (temp->days)*(a6);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '8':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a7 = 622000;
            temp->total = (temp->days)*(a7);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '9':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int a8 = 580000;
            temp->total = (temp->days)*(a8);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

        default:
            gotoxy(46,17);
            printf ("Mohon tekan pilihan yang tersedia!");
            Sleep (1200);
            return smtr1();
       }
     }
  }}



void jw1()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH KOTA");
    gotoxy(54,7);
    printf("1. Banten");
    gotoxy(54,8);
    printf("2. Jawa Barat");
    gotoxy(54,9);
    printf("3. DKI Jakarta");
    gotoxy(54,10);
    printf("4. Jawa Tengah");
    gotoxy(54,11);
    printf("5. DI Yogyakarta");
    gotoxy(54,12);
    printf("6. Jawa Timur");
    gotoxy(54,13);
    printf("7. Bali");
    gotoxy(54,14);
    printf("8. Nusa Tenggara Barat");
    gotoxy(54,15);
    printf("9. Nusa Tenggara Timur");
    gotoxy(54,15);
    printf("SELECT: 1/2/3/4/5/6/7/8/9");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b = 718000;
            temp->total = (temp->days)*(b);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b1 = 570000;
            temp->total = (temp->days)*(b1);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b2 = 730000;
            temp->total = (temp->days)*(b2);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b3 = 600000;
            temp->total = (temp->days)*(b3);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b4 = 845000;
            temp->total = (temp->days)*(b4);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '6':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b5 = 664000;
            temp->total = (temp->days)*(b5);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '7':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b6 = 910000;
            temp->total = (temp->days)*(b6);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '8':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b7 = 580000;
            temp->total = (temp->days)*(b7);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '9':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int b8 = 550000;
            temp->total = (temp->days)*(b8);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

        default:
            gotoxy(46,17);
            printf ("Mohon tekan pilihan yang tersedia!");
            Sleep (1200);
            return jw1();
            }
        }
    }}



void kal1()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(54,7);
    printf("1. Kalimantan Utara");// Tanjung Selor
    gotoxy(54,8);
    printf("2. Kalimantan Barat");//Pontianak
    gotoxy(54,9);
    printf("3. Kalimantan Tengah");//Palangkaraya
    gotoxy(54,10);
    printf("4. Kalimantan Timur");//Samarinda
    gotoxy(54,11);
    printf("5. Kalimantan Selatan");//Banjarmasin
    gotoxy(55,15);
    printf("SELECT: 1/2/3/4");

    rselection=getch();
    rselection=toupper(rselection);


    switch(rselection){
    case '1':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int c = 804000;
            temp->total = (temp->days)*(c);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int c1 = 538000;
            temp->total = (temp->days)*(c1);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
       box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int c2 = 659000;
            temp->total = (temp->days)*(c2);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int c3 = 804000;
            temp->total = (temp->days)*(c3);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int c4 = 540000;
            temp->total = (temp->days)*(c4);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

        default:
            gotoxy(46,17);
            printf ("Mohon tekan pilihan yang tersedia!");
            Sleep (1200);
            return kal1();
    }
    }
    }}

void sul1()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(54,7);
    printf("1. Gorontalo");
    gotoxy(54,8);
    printf("2. Sulawesi Utara");//Manado
    gotoxy(54,9);
    printf("3. Sulawesi Barat");//Mamuju
    gotoxy(54,10);
    printf("4. Sulawesi Tengah");//Palu
    gotoxy(54,11);
    printf("5. Sulawesi Selatan");//Makassar
    gotoxy(54,12);
    printf("6. Sulawesi Tenggara");//Kendari
    gotoxy(54,15);
    printf("SELECT: 1/2/3/4/5/6");

    rselection=getch();
    rselection=toupper(rselection);


    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int e = 764000;
            temp->total = (temp->days)*(e);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int e1 = 784000;
            temp->total = (temp->days)*(e1);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '3':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int e2 = 704000;
            temp->total = (temp->days)*(e2);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '4':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int e3 = 951000;
            temp->total = (temp->days)*(e3);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }}
    case '5':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
               akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int e4 = 732000;
            temp->total = (temp->days)*(e4);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '6':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int e5 = 786000;
            temp->total = (temp->days)*(e5);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();

            default:
            gotoxy(46,17);
            printf ("Mohon tekan pilihan yang tersedia!");
            Sleep (1200);
            return sul1();
                }
           }
      }}


void mlk1()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH PROVINSI");
    gotoxy(54,9);
    printf("1. Maluku");// Ambon
    gotoxy(54,10);
    printf("2. Maluku Utara");//Ternate
    gotoxy(54,15);
    printf("SELECT: 1/2");

    rselection=getch();
    rselection=toupper(rselection);


    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int f = 667000;
            temp->total = (temp->days)*(f);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int fa = 660000;
            temp->total = (temp->days)*(fa);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();


            default:
            gotoxy(46,17);
            printf ("Mohon tekan pilihan yang tersedia!");
            Sleep (1200);
            return mlk1();
        }
    }
}}

void pap1()
{
    system("cls");
    system ("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH KOTA");
    gotoxy(54,9);
    printf("1. Papua");//Jayapura
    gotoxy(54,10);
    printf("2. Papua Barat");//Manokwari
    gotoxy(54,15);
    printf("SELECT: 1/2");

    rselection=getch();
    rselection=toupper(rselection);

    switch(rselection){
    case '1':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int f2 = 829000;
            temp->total = (temp->days)*(f2);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
    }
    }
    case '2':{
        box();
        gotoxy(38,4);
        printf("PENYUSUNAN ANGGARAN AKOMODASI SURVEY LAPANGAN");
        int count, i;
        gotoxy(42,7);
        printf("Anggota Survei Lapangan: ");
        scanf("%d", &count);
        struct akomodasi *temp = (struct akomodasi*)malloc(sizeof(struct akomodasi));
            for(i=0; i<count; i++)
            {
                if(i==0)
            {
                akomodasihead = malloc(sizeof(struct akomodasi));
                temp = akomodasihead;
            }
            else
            {
            temp->next = malloc(sizeof(struct akomodasi));
            temp = akomodasihead->next;
            }
            temp->name[50] = (char *)malloc(50*sizeof(char));
            temp->position[50] = (char *)malloc(50*sizeof(char));
            temp->date[50] = (char *)malloc(50*sizeof(char));
            temp->city[50] = (char *)malloc(50*sizeof(char));
            temp->days = (int *)malloc(sizeof(int));
            temp->total = (int *)malloc(sizeof(int));
            gotoxy(42,9);
            printf("Nama\t\t   :");
            gotoxy(62,9);
            scanf("%s", temp->name);
            gotoxy(42,11);
            printf("Jabatan\t   :");
            gotoxy(62,11);
            scanf("%s", temp->position);
            gotoxy(42,13);
            printf("Tanggal Berangkat:");
            gotoxy(62,13);
            scanf("%s", temp->date);
            gotoxy(42,15);
            printf("Kota Tujuan:");
            gotoxy(62,15);
            scanf("%s", temp->city);
            gotoxy(42,17);
            printf("Lama Perjalanan: ");
            gotoxy(62,17);
            scanf("%d", &temp->days);
            int f3 = 718000;
            temp->total = (temp->days)*(f3);
            temp->next = NULL;
            inputfileakomodasi();
            gotoxy(42,19);
            printf("<<<Data anda berhasil dimasukan>>>");
            gotoxy(42,21);
            printf("<<<Tekan Tombol Apapun Untuk Kembali Ke Menu Utama ^^ >>>");
        getch();
        main();
        default:
            gotoxy(46,17);
            printf ("Mohon tekan pilihan yang tersedia!");
            Sleep (1200);
            return pap1();
            }}}}

void hapus()
{
    system("cls");
    system("color 17");
    pos[0]=1;
    box();
    gotoxy(57,4);
    printf("PILIH ITEM YANG AKAN DIHAPUS");
    gotoxy(54,9);
    printf("1. Transportasi");//Jayapura
    gotoxy(54,10);
    printf("2. Akomodasi");//Manokwari
    gotoxy(54,15);
    printf("SELECT: 1/2");

    rselection=getch();
    rselection=toupper(rselection);

   switch(rselection){
    case '1':{
       box();
//        char x;
        gotoxy(42,7);
        printf("Apakah Anda ingin menghapus data terakhir?");
        gotoxy(46,9);
        printf("Tekan (Y) Untuk Melanjutkan");
        gotoxy(44,10);
        printf("Tekan (N) Untuk Kembali Ke Menu Hapus");
        gotoxy(42,12);
        printf("Tekan Apa Saja Untuk Kembali Ke Menu Utama");
        gotoxy(42,14);
        aselection=getch();
        aselection=toupper(eselection);
        switch(aselection)
        {
                     case 'Y':{
                                removenode1();
                                inputfiletransportasi();

      }
                    case 'N': {
                                return hapus();
                    }
                    default:{
                                return menu();
                    }

        }
    }
    case '2':{
       box();
//        char y;
        gotoxy(42,7);
        printf("Apakah Anda ingin menghapus data terakhir?");
        gotoxy(46,9);
        printf("Tekan (Y) Untuk Melanjutkan");
        gotoxy(44,10);
        printf("Tekan (N) Untuk Kembali Ke Menu Hapus");
        gotoxy(42,12);
        printf("Tekan Apa Saja Untuk Kembali Ke Menu Utama");
        gotoxy(42,14);
        aselection=getch();
        aselection=toupper(eselection);
        switch(aselection)
        {
                     case 'Y':{
                                removenode2();
                                inputfileakomodasi();

      }
                    case 'N': {
                                return hapus();
                    }
                    default:{
                                return menu();
                    }

        }
    }
}

void removenode1()
{
   if(transhead == NULL) {
	printf("\n\nList is Empty!!!");
   }
   else
   {
      struct transportasi *temp = transhead;
      if(transhead->next == NULL)
      {
	 transhead = NULL;
	 free(temp);
      }
      else
      {
	transhead = temp->next;
	free(temp);
	printf("\nOne node deleted!!!\n\n");
      }
   }
}

void removenode2()
{
   if(akomodasihead == NULL){
	printf("\n\nList is Empty!!!");
	}
   else
   {
      struct akomodasi *temp = akomodasihead;
      if(akomodasihead->next == NULL)
      {
	 akomodasihead = NULL;
	 free(temp);
      }
      else
      {
	akomodasihead = temp->next;
	free(temp);
	printf("\nOne node deleted!!!\n\n");
      }
   }
}
