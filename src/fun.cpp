// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char* str) {
    int count = 0;
    int flag1 = 0, flag2 = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            flag1 = 1;
        }

        if (str[i] != ' ') {
            flag2 = 1;
        }

        if (str[i] == ' ' && flag2 == 1) {
            if (flag1 == 0)
                count++;
            flag1 = 0;
            flag2 = 0;
        }
    }
    return count;
}

unsigned int faStr2(const char* str) {
    int count = 0;
    int flagCorrectWord = 0;
    int flagSpace = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z' && flagSpace != 0) 
            flagCorrectWord = 1;
        if (str[i] >= 'A' && str[i] <= 'z') {
            flagSpace = 0;
        } else if (str[i] != ' ') {
            flagCorrectWord = 0;
        } else {
            if (flagCorrectWord == 1) {
                count++;
            }
            flagSpace = 1;
            flagCorrectWord = 0;
        }
    }
    return count;
}

unsigned int faStr3(const char* str) {
    int countWord = 0;
    int sumChar = 0;
    int flagInWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            sumChar++;
            flagInWord = 1;
        }
        if (str[i] == ' ') {
            if (flagInWord != 0) countWord++;
            flagInWord = 0;
        }
    }

    float average = sumChar / countWord;
    if ((average - static_cast<int>(average)) >= 0.5) {
        return static_cast<int>(average) + 1;
    return static_cast<int>(average);
}
