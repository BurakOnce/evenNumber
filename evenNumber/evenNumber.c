#include <stdio.h>

/* Burak Önce 20120205052
Bu program 100 ile 400 arasında tüm rakamları
çift olan sayıları bulur.
*/

int main() 
{  
    int rakam,sayi,op,z=0; 

/* değişkenleri tanımlarız.
sayi değişkeni programı 100 ile 400 arasına kısıtlar.
rakam değişkeni sayının rakamlarının 2 ile bölünüşüne bakar.
op değişkeni de sayının rakamlarının 2 ile bölünüşüne bakar.
z ise kaç sayının tüm rakamlarının 2'nin katı olduğunu bulur.
*/ 
  
    for(sayi=100; sayi<=400; sayi++) 

/* for döngüsü ile sayıyı 
100 ile 400 arasına kısıtlarız ve her dönüşte sayının 1 artmasını 
sağlarız
*/ 

    if(sayi%2==0) // sayının 2 ile bölümüne bakarız
    {
      rakam=sayi/10 ; //sayının basamaklarını bulmak için sayıyı 10 a böleriz
      if(rakam%2==0)  //tekrar 2 ye bölümüne bakarız
      {
        op=rakam/10 ; //tekrar basamaklarını bulmak için böleriz

        if(op%2==0) //son olarak yine 2 ye bölümüne bakarız
        {
          printf("%d \n",sayi) ; 
          z++;
        } 

      }



    }
      printf("Tüm basamakları çift %d sayi vardır",z); //son çıktı
    return 0;  
}  