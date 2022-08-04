#include <stdio.h>

/*자연수 N이 입력되면 1부터 N까지의 수 중 M의 배수합을 출력하는 프로그램을 만드시오*/

int main() {
 int n,m=0;
 int i=1;
 printf("Enter the number of the limit\n");
 scanf("%d",&n);
 printf("Enter the number that you wanna know in multiple\n");
 scanf("%d",&m);

 while(i<=n){
     if((i%m)==0)
         printf("%d\n",i);
     i++;
 }
}
