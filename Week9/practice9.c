#include <stdio.h>

//산술계산기
int main(void) {
    int num1, num2, result;
    char operator;
    int isError = 0;
    printf("수식을 입력하세요. ex) 2 + 5 : ");
    scanf("%d %c %d", &num1, &operator, &num2);
    if(operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%') {
        switch(operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            break;
            case '*':
                result = num1 * num2;
                break;
            break;
            case '/':
                if(num2 == 0) {
                    isError = 1;
                } else {
                    result = num1 / num2;
                }
                break;
            break;
            case '%':
                if(num2 == 0) {
                    isError = 1;
                } else {
                    result = num1 % num2;
                }
                break;
            break;
            default:
            break;
        }    
    } else {isError = 1;}

    if(!isError) {
        printf("%d", result);
    } else {
        printf("잘못된 입력입니다.");
    }
    return 0;
}