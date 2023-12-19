#include <iostream.h>
main()
{
 unsigned int tavan,tahmin,deneme=0,taban=0;
 char tus;
 printf("Lutfen aralik giriniz");
 scanf("%d",&tavan);
 printf("Lutfen girdiginiz aralikta bir sayi tutunuz\n");
 do
 {
  deneme++;
  srand(time(0));
  tahmin=rand()%(tavan-taban)+taban;
  printf("tahminim = %d \ntahminim tuttugunuz sayidan buyukse b kucukse k giriniz\n",tahmin);
  scanf(" %c",&tus);
  switch(tus)
  {
  case 'b':
  tavan=tahmin;
  break;
  case 'k':
  taban=tahmin+1;
  break;
  default:
  printf("%d denemede sayiyi buldum\n",deneme);
  }
 }while(tus=='b'||tus=='k');
 cin.get();
 cin.get();
}
