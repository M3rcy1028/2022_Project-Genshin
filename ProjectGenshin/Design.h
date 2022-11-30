/*�ܼ�â�� �������ϴ� �Լ����� ���� �������*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma once

/*��� ������ �����ϴ� �Լ� ����*/
void ColorSet(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

/*��� ���� ������*/
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

/*Console Windowsâ Title ��ȯ �Լ� ����*/
void TitleChange()
{
    SetConsoleTitle(TEXT("Project_Genshin"));
}

/*�ܼ�â ũ�� ����*/
void SizeChange()
{
    system("mode con:cols=100 lines=100");
}
