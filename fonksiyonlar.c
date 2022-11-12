#include "fonksiyonlar.h"


DepremPtr yapiyaTasima(char string[]) {


    char* kalan1 = "";
    char* kalan2 = "";

    Deprem deprem;


    deprem.id = strtok_s(string, ",", &kalan1);
    deprem.date = strtok_s(kalan1, ",", &kalan2);
    deprem.time = strtok_s(kalan2, ",", &kalan1);
    deprem.latitude = strtok_s(kalan1, ",", &kalan2);
    deprem.longtitude = strtok_s(kalan2, ",", &kalan1);
    deprem.country = strtok_s(kalan1, ",", &kalan2);
    deprem.city = strtok_s(kalan2, ",", &kalan1);
    deprem.area = strtok_s(kalan1, ",", &kalan2);
    deprem.direction = strtok_s(kalan2, ",", &kalan1);
    deprem.distance = strtok_s(kalan1, ",", &kalan2);
    deprem.depth = strtok_s(kalan2, ",", &kalan1);
    deprem.xm = strtok_s(kalan1, ",", &kalan2);
    deprem.md = strtok_s(kalan2, ",", &kalan1);
    deprem.richter = strtok_s(kalan1, ",", &kalan2);
    deprem.mw = strtok_s(kalan2, ",", &kalan1);
    deprem.ms = strtok_s(kalan1, ",", &kalan2);
    deprem.mb = strtok_s(kalan2, "\0", &kalan1);

    printf("selam in yapi before yazdir OOOOOOOOOOOOOOOOOOOOOOOOO\n");

    satirYazdir(&deprem);
    printf("selam in yapi OOOOOOOOOOOOOOOOOOOOOO\n");
    
    /*if (strlen(deprem.id) == 0)
    {
        printf("%s ", deprem.id);
    }
    else {
        printf("");
    }
    if (strlen(deprem.date) == 0)
    {
        printf("%s ", deprem.date);
    }
    else {
        printf("");
    }
    if (strlen(deprem.time) == 0)
    {
        printf("%s ", deprem.time);

    }
    else {
        printf("");
    }
    if (strlen(deprem.latitude) == 0)
    {
        printf("%s ", deprem.latitude);
    }
    else {
        printf("");
    }
    if (strlen(deprem.longtitude) == 0)
    {
        printf("%s ", deprem.longtitude);
    }
    else {
        printf("");
    }
    if (strlen(deprem.country) == 0)
    {
        printf("%s ", deprem.country);
    }
    else {
        printf("");
    }
    if (strlen(deprem.city) == 0)
    {
        printf("%s ", deprem.city);
    }
    else {
        printf("");
    }
    if (strlen(deprem.area) == 0)
    {
        printf("%s ", deprem.area);
    }
    else {
        printf("");
    }
    if (strlen(deprem.direction) == 0)
    {
        printf("%s ", deprem.direction);
    }
    else {
        printf("");
    }
    if (strlen(deprem.distance) == 0)
    {
        printf("%s ", deprem.distance);
    }
    else {
        printf("");
    }
    if (strlen(deprem.depth) == 0)
    {
        printf("%s ", deprem.depth);
    }
    else {
        printf("");
    }
    if (strlen(deprem.xm) == 0)
    {
        printf("%s ", deprem.xm);
    }
    else {
        printf("");
    }
    if (strlen(deprem.md) == 0)
    {
        printf("%s ", deprem.md);
    }
    else {
        printf("");
    }
    if (strlen(deprem.richter) == 0)
    {
        printf("%s ", deprem.richter);
    }
    else {
        printf("");
    }
    if (strlen(deprem.mw) == 0)
    {
        printf("%s ", deprem.mw);
    }
    else {
        printf("");
    }
    if (strlen(deprem.ms) == 0)
    {
        printf("%s ", deprem.ms);
    }
    else {
        printf("");
    }
    if (strlen(deprem.mb) == 0)
    {
        printf("%s ", deprem.mb);
    }
    else {
        printf("");
    }


    */





    return &deprem.id;

}


void satirYazdir(DepremPtr deprem) {

  /* Deprem gelenDeprem;
    DepremPtr gelenDepremPtr = deprem;
    */

    printf("%s ", deprem->id);
    printf("%s ", deprem->time);
    printf("%s ", deprem->latitude);
    printf("%s ", deprem->longtitude);
    printf("%s ", deprem->country);
    printf("%s ", deprem->city);
    printf("%s ", deprem->area);
    printf("%s ", deprem->direction);
    printf("%s ", deprem->distance);
    printf("%s ", deprem->depth);
    printf("%s ", deprem->xm);
    printf("%s ", deprem->md);
    printf("%s ", deprem->richter);
    printf("%s ", deprem->mw);
    printf("%s ", deprem->ms);
    printf("%s ", deprem->mb);


/*    if (strlen(gelenDepremPtr->id) != 0)
    {
        printf("%s ", gelenDepremPtr->id);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->date) != 0)
    {
        printf("%s ", gelenDepremPtr->date);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->time) != 0)
    {
        printf("%s ", gelenDepremPtr->time);

    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->latitude) != 0)
    {
        printf("%s ", gelenDepremPtr->latitude);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->longtitude) != 0)
    {
        printf("%s ", gelenDepremPtr->longtitude);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->country) != 0)
    {
        printf("%s ", gelenDepremPtr->country);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->city) != 0)
    {
        printf("%s ", gelenDepremPtr->city);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->area) != 0)
    {
        printf("%s ", gelenDepremPtr->area);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->direction) != 0)
    {
        printf("%s ", gelenDepremPtr->direction);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->distance) != 0)
    {
        printf("%s ", gelenDepremPtr->distance);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->depth) != 0)
    {
        printf("%s ", gelenDepremPtr->depth);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->xm) != 0)
    {
        printf("%s ", gelenDepremPtr->xm);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->md) != 0)
    {
        printf("%s ", gelenDepremPtr->md);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->richter) != 0)
    {
        printf("%s ", gelenDepremPtr->richter);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->mw) != 0)
    {
        printf("%s ", gelenDepremPtr->mw);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->ms) != 0)
    {
        printf("%s ", gelenDepremPtr->ms);
    }
    else {
        printf("");
    }
    if (strlen(gelenDepremPtr->mb) != 0)
    {
        printf("%s ", gelenDepremPtr->mb);
    }
    else {
        printf("");
    }
    */




}

void sorgula() {

    int secim = 0;

    printf("Hangi Kritere Gore Siralamak Istiyorsunuz?\n");
    printf("Secenekler:\n[1]Zaman Araligi\n[2]Il\n[3]Ilce\n[4]Richter Buyuklugu\n");
    scanf_s("%d", &secim);
    bul(secim);

    /*	Deprem deprem1;
        DepremPtr deprem1Ptr=&deprem1;

        FILE* filePtr;
        char satir[200]="";
        errno_t err=fopen_s(&filePtr,"earthquake.csv","r+");

        if(filePtr==0)
        {
            printf("dosya nerde!!!!");
            return 0;
        }
        int i;
        for(i=0;i<20968;i++) //bul fonk icin
        {
            fgets(satir,199,filePtr);
            deprem1Ptr=yapiyaTasima(satir);
        }
        char bul();
        //if(strlen(deprem.id)==0){
        //	printf(" ");
    */
}
void bul(int gelen) {

    char ara[20];
    ara[19] = '\0';
    char satir[200] = "";

    FILE* filePtr;
    errno_t err = fopen_s(&filePtr, "earthquake.csv", "r");
    if (filePtr == 0)
    {
        printf("dosya nerde !!!");
        return 0;
    }

    Deprem deprem1;
    DepremPtr deprem1Ptr = &deprem1;


    // fgets(satir, 199, filePtr);

   /* for (int i = 0; i < 24008; i++)
    {

        fgets(satir, 199, filePtr);
        deprem1Ptr = yapiyaTasima(satir);

        if (strcmp(deprem1.city, ara) == 0)
        {
            satirYazdir(&deprem1);
        }
        fclose(filePtr);


    }*/

        if (gelen == 2)
        {

            printf("Hangi Ili Aramak Istiyorsunuz\n");
            scanf_s("%s", &ara, 19);

            for (int i = 0; i < 24008; i++)
            {

                fgets(satir, 199, filePtr);
                deprem1Ptr = yapiyaTasima(satir);
               // printf("selam after yapi \n");

             //   satirYazdir(deprem1Ptr);
               /* printf("selam after yazdir \n"); */

                printf("\nOOOOOOOOOOOOOOOOOO %d OOOOOOOOOOOOOOOOOO\n", strcmp( ara , deprem1.city ));

                if (strcmp( deprem1.city,ara  ) == 0)
                {
                    satirYazdir(deprem1Ptr);
                    printf("selam \n");

                }
                


            }

            fclose(filePtr);

        }
        else if (gelen == 3)
        {

            printf("Hangi Ilceyi Aramak Istiyorsunuz\n");
            scanf_s("%s", &ara, 19);

            for (int i = 0; i < 24008; i++)
            {

                fgets(satir, 199, filePtr);
                deprem1Ptr = yapiyaTasima(satir);

                if (strcmp(deprem1.area, ara) == 0)
                {
                    satirYazdir(deprem1Ptr);
                }
               


            }
            fclose(filePtr);

        }
        else if (gelen == 4)
        {

            printf("Hangi Richter Buyuklugunu Aramak Istiyorsunuz\n");
            scanf_s("%s", &ara, 19);

            for (int i = 0; i < 24008; i++)
            {

                fgets(satir, 199, filePtr);
                deprem1Ptr = yapiyaTasima(satir);

                if (strcmp(deprem1.richter, ara) == 0)
                {
                    satirYazdir(deprem1Ptr);
                }
            

            }
            fclose(filePtr);
        }
        else
        {
            printf("secim hatali");
        }
    
}