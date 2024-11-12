#include <stdio.h>
#include <stdlib.h>
#define SIZE 13

int check_F(int input[]);

int main() {
    char charNumber[SIZE];
    int intNumber[SIZE];
    printf("[ 주민등록번호 유효성 검사 ]\n\n");
    printf("주민등록번호 입력('-'제외)>> ");
    scanf("%s", charNumber);
    for (int i=0; i<SIZE; i++) {
        intNumber[i] = charNumber[i]-'0';
    }
    int result = check_F(intNumber);
    if (result == 1) {
        printf("인증 성공.\n");
    }
    else{
        printf("인증 실패");
    }
    return 0;
}

int check_F(int input[]){
    int verify = input[SIZE-1];
    int sum=0;
    for (int i=0; i<SIZE; i++) {
        sum += input[i] * (i%10+2);
    }
    sum = 11 - sum%11;
    if (sum == verify){
        return 1;
    }
    else {
        return 0;
    }
}