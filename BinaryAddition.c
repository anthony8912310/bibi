//
//  main.c
//  BinaryAddition
//
//  Created by admin on 2021/3/10.
//

#include <stdio.h>
#include <stdlib.h>
int dec2bin(int dec);
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d",&n);
    char *bin1,*bin2;
    bin1=(char*)malloc(sizeof(char));
    bin2=(char*)malloc(sizeof(char));
    sprintf(bin1,"%d",dec2bin(n));
    sprintf(bin2,"%d",dec2bin(n+1));
    int i=0,count=0;
    while (bin2[i]!='\0') {
//        printf("i:%d bin1:%c bin2:%c\n",i,bin1[i],bin2[i]);
        if (bin2[i]=='0')
            if (bin1[i]=='1'||bin1[i]=='\0')
                count++;
        i++;
    }
    printf("%d %d",dec2bin(n+1),count);
    return 0;
}
int dec2bin(int dec){
    int bin;
    if (dec == 0)
        bin = 0;
    else
        bin = (dec%2+10*dec2bin(dec/2));
    return  bin;
}
