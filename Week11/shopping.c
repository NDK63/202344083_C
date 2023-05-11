#include <stdio.h>

int solution(int price, char* grade);

int main(void) {
    int price1 = 2500;
    char* grade1 = "V";
    int ret1 = solution(price1, grade1);
    printf("Solution: return value of the function is %d .\n", ret1);

    int price2 = 96900;
    char* grade2 = "S";
    int ret2 = solution(price2, grade2);
    printf("Solution: return value of the function is %d .\n", ret2);
}

int solution(int price, char* grade) {
    int answer = 0;
    float sale = 0;
    switch(*grade) {
        case 'S':
            sale = 0.95;
            break;
        
        case 'G':
            sale = 0.9;
            break;

        case 'V':
            sale = 0.85;
            break;

        default:
            break;
    }

    answer = price * sale;
    return answer;
}