#include <stdio.h>
#include <stdlib.h>
#define SIZE 13

int check_F(int input[]);

int main() {
    char charNumber[SIZE];
    int intNumber[SIZE];
    printf("[ �ֹε�Ϲ�ȣ ��ȿ�� �˻� ]\n\n");
    printf("�ֹε�Ϲ�ȣ �Է�('-'����)>> ");
    scanf("%s", charNumber);
    for (int i=0; i<SIZE; i++) {
        intNumber[i] = charNumber[i]-'0';
    }
    int result = check_F(intNumber);
    if (result == 1) {
        printf("���� ����.\n");
    }
    else{
        printf("���� ����");
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