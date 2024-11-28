 /*
#include <stdio.h>
int main () {
	int n,m;
	printf("nhap so nguyen n >0 ");
	scanf ("%d",&n);
	m = n%2;
	if (m==0){
		printf(" %d la so chan", n);
	}else {
		printf (" %d la so le", n);
	}
} 
 viet chuong chinh giai phuong trinh bac 1 : ax+b=0
 viet chuong trinh giai phuong trinh bac hai : ax^2+bx+c=0
*/
/*
#include <stdio.h>
int main () {
	float a,b,x;
	printf("gia tri cua a ");
	scanf ("%d",&a);
	printf("gia tri cua b ");
	scanf ("%d",&b);
	if (b==0){
		printf(" phuong trinh vo nghiem");
	}else if 
	   (a==0){
		printf(" phuong trinh co nghiem");
	}else{
		x=-(b/a);
		printf ("  phuong trinh co nghiem x = %f", x );
	}
}
*/
/*
#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c;
	float delta,x1,x2,x3;
	printf("gia tri cua a");
	scanf ("%d",&a);
    printf("gia tri cua b");
	scanf ("%d",&b);
	printf("gia tri cua c");
	scanf ("%d",&c);
	if (b==0){
		printf(" phuong trinh vo nghiem");
	}else if  
	   (a==0){
		printf(" phuong trinh co nghiem");
	}else {
		float d;
	  	d=-b/a;
	 	printf ("phuong trinh co nghiem duy nhat x = %f  ",c);
	 }
	 
	 // tinh delta
	 delta = b*b-4*a*c;
	 if (delta>0){
	 	x1=-b-(sqrt(delta))/2*a;
	 	x1=-b+(sqrt(delta))/2*a;
	 	printf("phuong trinh co hai nghiem phan biet x1 = %f,x2=%f", x1,x2);
	 	
	 }
	 else if (delta<0){
	 	printf(" phuong trinh vo nghiem");
	 }
	 else {
	 	x3=-b/2*a;
	 	printf("phuong trinh co nghiem kep x3 = %f", x3);
	 }
}
*/

//kiem tra so nguyen to

/*
#include <stdio.h>
#include <math.h>
int main (){
    int n,m=1;
	printf("nhap mot so nguyen : ");
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i == 0){
		  m=2;
		}		
	}
	if(m==2){
		printf(" %d khong la so nguyen to ",n);
	   }else{
		printf(" %d la so nguyen to ",n);
    }
		
}


//hinh chu nhat rong
#include <stdio.h>
int main()
{
   int cc,cr,i,j;
   printf("Nhap chieu cao:\n");
   scanf("%d",&cc);
   printf("Nhap chieu rong:\n");
   scanf("%d",&cr);
   for (i=1;i<=cc;i++)
   {
   	for (j=1;j<=cr;j++)
			if (i==1 || j==1 || i==cc || j==cr)
				printf("* ");
			else printf("  ");
		printf("\n");
	}
}
*/
/*
//hinh chu nhat 
#include <stdio.h>
int main (){
	//1.Hinh Chu nhat
	int a;
	printf("vui long nhap vao canh hinh chu nhat:");
	scanf("%d",&a);
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++ ){
			printf("* ");
		}
		printf("\n");
	}
}  
*/ 
/*
#include <stdio.h>
int main() {
   int n,i,j;
   n = 6;
   printf("nhap vao canh tam giac sao vuong can:\n");
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= i; j++)
         printf("* ");
 
      printf("\n");
   }
   
}
*/ 
/*
#include<stdio.h>
int main(){
int a, b, ucln = 1;
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b; // Tìm so nho hon

    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i; // Cap nhat UCLN
        }
        printf("uoc chung lon nhat la %d",i);
    }
}
*/
// Nhap vao mang n phan tu tu ban phim
// tim so co gia tri lon nhat
// tim so co gia tri nho nhat
//dao nguoc mang ban dau 
//int  arr = {1,2}
//int  arr1 = {2,1}
/*
#include <stdio.h>
int main ()
{
	int a;
	int max,min;
	printf(" nhap phan tu so vao mang:\n");
	scanf("%d",&a);	
	int mang[a];
	
	for (int i=0; i<a; i++){
	     printf("nhap vao phan tu thu %d :", i+1);
	     scanf("%d",&mang[i]);
    }
    int left = 0, right = a - 1;
    while (left < right) {
    int temp = mang[left];
    mang[left] = mang[right];
    mang[right] = temp;
    left++;
    right--;
    }
    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < a; i++) {
         printf("%d ", mang[i]);
    }
printf("\n");
	 printf("gia tri cua mang vua nhap la : " );
     for ( int i=0; i<a; i++){
    	printf("%d",mang[i]);
	}
	for(int i=0; i<a;i++){
		if(mang[i] > max)
		max = mang[i];
	}
	printf("\n phan tu lon nhat la %d",max);
	for(int i=0; i<a;i++){
		if(mang[i] < min)
		min = mang[i];
	}
	printf("\n phan tu nho nhat la %d",min);
}
*/ 
// Nhap vao mang so nguyen n phan tu 
// sap xep theo thu tu giam gian
//nhap vao so a bat ky,kiem tra xem a xuat hien bao nhieu lan trong mang
/*
#include<stdio.h>
int main(){
	int a[100] count=0;
	int n;
	printf("nhap so phan tu cua mang n = ");
	do{
		scanf("%d",&n);
		if(n <= 0){
			printf("nhap lai n =");
		}
	}while(n <=0);
	for(int i=0; i < n;i++){
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int tg;
	printf("sap xep thu tu mang giam dan: \n");
	for(int i=1; i<n ; i++){
		for(int j= 0; j<n-i-1; j++ ){
			if (a[i] < a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		} 

    }
    	printf("Mang da sap xep la:  ");
    for(int i = 0; i < n; i++){
        printf("%d", a[i]);
    }

	printf("nhap so can kiem tra: ");
	scanf("%d",&a);
	for(int i=0; i<n; i++){
		if(a[i]){
		   count++;
		}	}
	printf("so %d xuat hien %d lan trong mang.n",a,count);
}

*/
/*
#include <stdio.h>

int main(){
    int a[100];
    int n;
    printf("Nhap so luong phan tu n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("nNhap lai n = ");
        }
    }while(n <= 0);
    
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    
    // Sap xep dung thuat toan sap xep chon
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    
    printf("Mang da sap xep giam dan la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
    
    printf("nhap so can kiem tra : \n");
    scanf("%d",&n);
    
}
*/
// function
// nhap vao mang so nguyen n phan tu kiem tra co phai do la so nguyen to hay khong
/*
#include<stdio.h> 
#include<math.h>
int swap (int n);
int main() {
	int n 
} 
*/ 
//struct

//#include<stdio.h>
//struct student{
//	char name[20];
//	int age;
//};
//int main(){
//	struct student std1 = {
//		"T2410E",
//		20
//	};
//   student std1 = {
//      "T2410E",
//       20
//   };
//	printf("name : %s\n", std1.name);
//	printf("age : %d\n", std1.age);
//}

//viet chuong trinh quan ly thong tin sinh vien : name ,age ,phone
//tim kiem sinh vien : so dien thoai
//them sinh vien : khong duoc trung so dien thoai
/*
#include<stdio.h>
struct SinhVien{
	char name[20];
	int age;
	char phone[10];	
};
struct SinhVien sv[2];
void Nhap( ){	
   for (int i=0; i<2; i++){
	   printf("\nNhap ten sinh vien :");
	   gets(sv[i].name);
	   printf("\nNhap tuoi sinh vien :");
	   scanf("%d",&sv[i].age);
	   printf("\n nhap so dien thoai sinh vien :");
	   getchar();
	   gets(sv[i].phone);
    }
	
}
void Xuat(){
    printf("\n-----THONG TIN SINH VIEN----\n");
    printf("name \t\t age \t phone \n");
    for(int i=0; i<2; i++){
        printf("%s \t %d \t %s \n",sv[i].name,sv[i].age,sv[i].phone);
    }	
}

int main(){
	Nhap();
	Xuat();
}
*/
#include<stdio.h>
#include<math.h>
int main(){
	char Kitu;
	scanf("%c",&Kitu);
	printf("%d",Kitu);
}






































