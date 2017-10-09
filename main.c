#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cevap1[50];
    char cevap2[50];
    char isim[20];
    int i,yas=0,c_deger=0;

    printf("Merhaba! naber?\n");
    gets(cevap1);
    for(i=0;i<strlen(cevap1);i++){
    cevap1[i]=tolower(cevap1[i]);}
    if(strstr(cevap1,"kotu"))
    {
        printf("neden? ne oldu?\n");
        gets(cevap1);
        for(i=0;i<strlen(cevap1);i++){
    cevap1[i]=tolower(cevap1[i]);}
        printf("bosver, takma kafana :)\n");
    }
    else if(strstr(cevap1,"sen"))
    {
        printf("ben cok iyiyim.\n");

    }
    else if(strstr(cevap1,"iyi"))
    {
        printf("Ne guzel.\n");
    }
    else
    {
        printf("Anladim.\n");
    }
    printf("Bu arada ismin ne?\n");
    gets(isim);
    for(i=0;i<strlen(isim);i++){
    isim[i]=tolower(isim[i]);}
    isim[0]=toupper(isim[0]);
    printf("%s neler yapmaktan hoslanirsin?\n",isim);
    gets(cevap1);
    for(i=0;i<strlen(cevap1);i++){
    cevap1[i]=tolower(cevap1[i]);}
    if(strstr(cevap1,"muzik"))
    {
        printf("en sevdigin sanatci hangisi?\n");
        gets(cevap2);
        printf("mutlaka dinleyecegim :)\n");
        c_deger=1;
    }
    if(strstr(cevap1,"film") || strstr(cevap1,"sinema"))
    {
        printf("En son hangi filmi izledin?\n");
        gets(cevap2);
        for(i=0;i<strlen(cevap2);i++){
    cevap2[i]=tolower(cevap2[i]);}
        printf("%s'yi cok severim.\n",cevap2);
        c_deger=1;
    }
    if(strstr(cevap1,"spor"))
    {
        printf("Hangi sporu yapiyorsun?\n");
        gets(cevap2);
        for(i=0;i<strlen(cevap2);i++){
    cevap2[i]=tolower(cevap2[i]);}
        printf("Demek %s. Cok guzel.\n",cevap2);
        c_deger=1;
    }
    if(strstr(cevap1,"calis") || strstr(cevap1,"is"))
    {
        printf("Arada kendine de vakit ayirmalisin :)\n");
        c_deger=1;
    }
    if(strstr(cevap1,"gez"))
    {
        printf("En son nereyi gezdin?\n");
        gets(cevap2);
        printf("Orayi gormeyi cok istiyorum.");
        c_deger=1;
    }
    if(c_deger==0)
    {
        if(strstr(cevap1,"tan") || strstr(cevap1,"ten"))
        {
            printf("Demek %s hoslaniyorsun. Deneyecegim ben de :)\n",cevap1);
        }
        else printf("Demek %s'tan hoslaniyorsun. Deneyecegim ben de :)\n",cevap1);
    }
    printf("Pekala.\n");
    do{
    printf("Kac yasindasin?\n");
    gets(cevap1);
    for(i=0;i<strlen(cevap1);i++){
    cevap1[i]=tolower(cevap1[i]);}
    yas=atoi(cevap1);
    if(yas>0)
    {
        printf("Demek %d yasindasin.\n",yas);
    }
    if(yas>100 || yas<0)
    {
        printf("Yalan soyluyorsun. :(\n");
    }
    else printf("En guzel yillar.\n");
    }while(yas<=0 || yas>100);
    printf("Bana sormak istedigin bir sey var mi?\n");
    gets(cevap1);
    printf("Saka yapmistim %s.\n Burada sorulari ben sorarim :)",isim);



    return 0;
}
