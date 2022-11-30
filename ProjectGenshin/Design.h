/*콘솔창을 디자인하는 함수들을 모은 헤더파일*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma once

/*출력 색상을 조절하는 함수 선언*/
void ColorSet(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

/*출력 색상 열거형*/
typedef enum ColorKinds
{
    black,
    blue,
    green,
    skyBlue,
    red,
    pink,
    orange,
    white,
    gray,
    lightBlue,
    brightGreen,
    sky,
    brightRed,
    brightPink,
    brightYellow,
    brightWhite,
    violet,
} Colorkinds;

/*Console Windows창 Title 변환 함수 선언*/
void TitleChange()
{
    SetConsoleTitle(TEXT("Project_Genshin"));
}

/*콘솔창 크기 제한*/
void SizeChange()
{
    system("mode con:cols=100 lines=100");
}
