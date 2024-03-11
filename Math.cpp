#include "Math.h"
#include <cstring>

int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add(int a, int b, int c) {
    return a + b + c;
}

int Math::Add(double a, double b) {
    return int(a + b);
}

int Math::Add(double a, double b, double c) {
    return int(a + b + c);
}

int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul(int a, int b, int c) {
    return a * b * c;
}

int Math::Mul(double a, double b) {
    return int(a * b);
}

int Math::Mul(double a, double b, double c) {
    return int(a * b * c);
}

int Math::Add(int count, ...) {
    int sum = 0;

    if (count <= 0) {
        return sum;
    }

    int* values = &count + 1;

    for (int i = 0; i < count; ++i) {
        sum += values[i];
    }

    return sum;
}

char* Math::Add(const char* str1, const char* str2) {
    if (!str1 || !str2) {
        return nullptr;
    }

    int len1 = 0;
    int len2 = 0;
    while (str1[len1] != '\0') {
        ++len1;
    }
    while (str2[len2] != '\0') {
        ++len2;
    }

    char* result = new char[len1 + len2 + 1];

    for (int i = 0; i < len1; ++i) {
        result[i] = str1[i];
    }

    for (int i = 0; i < len2; ++i) {
        result[len1 + i] = str2[i];
    }

    result[len1 + len2] = '\0';
    return result;
}
