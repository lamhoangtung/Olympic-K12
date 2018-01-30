#include <stdio.h>

int main(void){
  int t,n,songay;
  printf("Nhap thang: ");scanf("%d",&t);
  printf("Nhap nam: ");scanf("%d",&n);
  if (t>=1 && t<=12){
    switch (t){
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12: songay = 31; break;
      case 4:
      case 6:
      case 9:
      case 11: songay = 30; break;
      case 2:
        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
          songay = 29;
        else
          songay = 28;
    }
    printf("Thang %d/%d co %d ngay\n", t, n, songay);
  }
  else printf("Thang khong hop le!\n");
}
