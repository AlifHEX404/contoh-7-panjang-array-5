#include <stdio.h>
void cetak_mundur(char s[]){
int i,n;
for (n=0;n<s[n];n++);
printf ("panjang array = %d\n",n);
for(i=n-i;i>=0;i--){
    printf("%c",s[i]);
}
}
int main (){
char str[50]="Anton";
cetak_mundur(str);
}
