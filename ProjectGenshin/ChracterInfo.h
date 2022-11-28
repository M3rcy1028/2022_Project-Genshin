/*ĳ������ ������ �ҷ����� �������*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma once

/*����� ���� �������*/
#include "Design.h"

/*���� ������ ������ ���� ���� �迭 ����*/
double rerunVer[10][10] = { 0 }; //0���� �ʱ�ȭ

/*ĳ������ ������ ������ ����ü*/
typedef struct ChracterInfo
{
    char name[50]; //ĳ���� �̸� �迭
    char sig[30]; //ĳ���� ���� ���� �̸� �迭
    int nTimes, nLocal, nSort, nElem; //���� Ƚ��, �������, ��������, ����ϴ� ���� ����
} StInfo; //����ü ����

/*��� ������ �����ϴ� �Լ� ����*/
void ColorSet(int color_number);

/*ĳ������ ������ ����ϴ� �Լ�*/
void PrintInfo(StInfo CH, double rerunVer[][10])
{
    printf("  �̸� : %s ", CH.name); //ĳ���� �̸� ���
    /*ĳ���Ͱ� ����ϴ� ������ ������ ����ϴ� �Լ�*/
    switch (CH.nElem)
    {
    case 0: //�� ����
    {
        ColorSet(red); //���� ������
        printf("(��)\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 0:
    case 1: //�� ����
    {
        ColorSet(skyBlue); //���� ��ī�̺��
        printf("(��)\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 1:
    case 2: //Ǯ ����
    {
        ColorSet(brightGreen); //���� ���� �ʷ�
        printf("(Ǯ)\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 2:
    case 3: //�ٶ� ����
    {
        ColorSet(sky); //���� �ϴû�
        printf("(�ٶ�)\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 3:
    case 4: //���� ����
    {
        ColorSet(blue); //���� �Ķ���
        printf("(����)\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 4:
    case 5: //���� ����
    {
        ColorSet(lightBlue); //���� ���� �Ķ���
        printf("(����)\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 5:
    case 6: //���� ����
    {
        ColorSet(orange); //���� ��Ȳ��
        printf("(����)\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 6:
    default: //�̿��� ���� ���� ��
        printf("(�� �� ����)\n"); //���� ���
        break; //case�� Ż��
    } //end of default:
    
    printf("  ��� ���� : ");  //���� ���
    /*ĳ������ ��� ������ ���*/
    switch (CH.nLocal)
    {
    case 0: //Mondstadt
    {
        ColorSet(sky); //���� �ϴû�
        printf("��� "); //���� ���
        ColorSet(white); //���� ���
        printf("(�ٶ��� ������ ����)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 0:
    case 1: //Liyue
    {
        ColorSet(orange); //���� ��Ȳ��
        printf("���� "); //���� ���
        ColorSet(white); //���� ���
        printf("(������ ����� �ױ�)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 1:
    case 2: //Inazuma
    {
        ColorSet(blue); //���� �Ķ���
        printf("�̳�� "); //���� ���
        ColorSet(white); //���� ���
        printf("(������ ������ ����)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 2:
    case 3: //Sumeru
    {
        ColorSet(brightGreen); //���� ���� �ʷϻ�
        printf("���޸� "); //���� ���
        ColorSet(white); //���� ���
        printf("(Ǯ�� ������ �츲)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 3:
    case 4: //Fontaine
    {
        ColorSet(skyBlue); //���� ��ī�̺��
        printf("��Ÿ��\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż�� 
    } //end of case 4:
    case 5: //Natlan
    {
        ColorSet(red); //���� ������
        printf("��Ÿ\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 5:
    case 6: //Snezhunaya
    {
        ColorSet(lightBlue); //���� ��ī�̺��
        printf("�������\n"); //���� ���
        ColorSet(white); //���� ���
        break; //case�� Ż��
    } //end of case 6:
    default: //�̿��� ���� ���� ��
        printf("�� �� ���� \n"); //���� ���
        break; //case�� Ż��
    } //end of switch-case statement

    printf("  ���� ���� : %s", CH.sig); //ĳ������ ���� ���� �̸� ���
    /*ĳ���Ͱ� ����ϴ� ������ ������ ���*/
    switch (CH.nSort)
    {
    case 0: //�Ѽհ�
    {
        printf(" (�Ѽհ�)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 0:
    case 1: //����
    {
        printf(" (����)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 1:
    case 2: //��հ�
    {
        printf(" (��հ�)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 2:
    case 3: //Ȱ
    {
        printf(" (Ȱ)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 3:
    case 4: //�庴��
    {
        printf(" (�庴��)\n"); //���� ���
        break; //case�� Ż��
    } //end of case 4:
    default: //�̿��� ���� ���� ��
        printf(" (�� �� ����)\n"); //���� ���
        break; //case�� Ż��
    } //end of default:

    printf("  ������ Ƚ�� : %d\n", CH.nTimes); //ĳ���Ͱ� ������ Ƚ�� ���
    /*ĳ���Ͱ� ������ ������ ���*/
    printf("  ó�� ���� ���� : %.1f\n", rerunVer[0][0]); //ó�� ���� ���� ���
    printf("  ������ ���� : "); //���� ���
    if (CH.nTimes == 1) /*ĳ������ ���� Ƚ���� 1���� ��*/
    {
        printf("%s  ", "��������"); //���� ���
    } //end of if statement
    else if (CH.nTimes == 0) /*ĳ������ ���� Ƚ���� 0�� ��*/
    {
        printf("%s  ", "���� ������ ���� ĳ����"); //���� ���
    }
    else //ĳ������ ���� Ƚ���� 2�� �̻��� ��
    { //ĳ������ �������� ����ϴ� �ݺ���
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                /*ĳ������ ������ ���*/
                if (rerunVer[i][j] == 0)
                {
                    /*�迭�� �� ���� 0�� �� �ݺ��� Ż��*/
                    break;
                } //end of if statement
                else
                {
                    printf("%.1lf  ", rerunVer[i][j]); //ĳ������ ���� ���� ���
                } //end of else statement
            } //end of for-j
        } //end of for-i
    } //end of if-else
    printf("\n\n  �ٸ� ����� �����Ϸ��� �ƹ����̳� �Է��Ͻÿ�..."); //�ٸ� ����� ���࿩�� ����
    //���� �� ���� ó������ ������ �Լ� �۵�
}


/*AMENO*/
//Venti
void ch_Venti()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Venti;
    strcpy(St_Venti.name, "��Ƽ"); //�̸�
    strcpy(St_Venti.sig, "���� ź���� �뷡"); //����ϴ� ���� ����
    St_Venti.nElem = 3; //����ϴ� ���� �ڵ�
    St_Venti.nSort = 3; //����ϴ� ���� �ڵ�
    St_Venti.nTimes = 4; //������ Ƚ��
    St_Venti.nLocal = 0; //��� ���� �ڵ�
   
    rerunVer[0][0] = 1.0; //ó�� �����
    rerunVer[0][1] = 1.4;
    rerunVer[1][0] = 2.6;
    rerunVer[2][0] = 3.1;
    

    PrintInfo(St_Venti, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Xiao
void ch_Xiao()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Xiao;
    strcpy(St_Xiao.name, "��"); //�̸�
    strcpy(St_Xiao.sig, "ȭ�ڿ�"); //����ϴ� ���� ����
    St_Xiao.nElem = 3; //����ϴ� ���� �ڵ�
    St_Xiao.nSort = 4; //����ϴ� ���� �ڵ�
    St_Xiao.nTimes = 3; //������ Ƚ��
    St_Xiao.nLocal = 1; //��� ���� �ڵ�

    rerunVer[0][0] = 1.3; //ó�� �����
    rerunVer[1][0] = 2.4;
    rerunVer[1][1] = 2.7;

    PrintInfo(St_Xiao, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 


//Kazuha
void ch_Kazuha()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Kazuha;
    strcpy(St_Kazuha.name, "ī�����϶� ī����"); //�̸�
    strcpy(St_Kazuha.sig, "������ ������ ����"); //����ϴ� ���� ����
    St_Kazuha.nElem = 3; //����ϴ� ���� �ڵ�
    St_Kazuha.nSort = 0; //����ϴ� ���� �ڵ�
    St_Kazuha.nTimes = 2; //������ Ƚ��
    St_Kazuha.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 1.6; //ó�� �����
    rerunVer[1][0] = 2.8;

    PrintInfo(St_Kazuha, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Wanderer
void ch_Wanderer()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Wanderer;
    strcpy(St_Wanderer.name, "�����"); //�̸�
    strcpy(St_Wanderer.sig, "������������ ���"); //����ϴ� ���� ����
    St_Wanderer.nElem = 3; //����ϴ� ���� �ڵ�
    St_Wanderer.nSort = 1; //����ϴ� ���� �ڵ�
    St_Wanderer.nTimes = 1; //������ Ƚ��
    St_Wanderer.nLocal = 3; //��� ���� �ڵ�

    rerunVer[0][0] = 3.3; //ó�� �����

    PrintInfo(St_Wanderer, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function


/*DENFRO*/
//Tighnari
void ch_Tighnari()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Tighnari;
    strcpy(St_Tighnari.name, "Ÿ�̳���"); //�̸�
    strcpy(St_Tighnari.sig, "��ɲ��� ��"); //����ϴ� ���� ����
    St_Tighnari.nElem = 2; //����ϴ� ���� �ڵ�
    St_Tighnari.nSort = 3; //����ϴ� ���� �ڵ�
    St_Tighnari.nTimes = 1; //������ Ƚ��
    St_Tighnari.nLocal = 3; //��� ���� �ڵ�

    rerunVer[0][0] = 3.1; //ó�� �����

    PrintInfo(St_Tighnari, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Nahida
void ch_Nahida()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Nahida;
    strcpy(St_Nahida.name, "������"); //�̸�
    strcpy(St_Nahida.sig, "�������� õ�� ���� ��"); //����ϴ� ���� ����
    St_Nahida.nElem = 2; //����ϴ� ���� �ڵ�
    St_Nahida.nSort = 1; //����ϴ� ���� �ڵ�
    St_Nahida.nTimes = 1; //������ Ƚ��
    St_Nahida.nLocal = 3; //��� ���� �ڵ�

    rerunVer[0][0] = 3.2; //ó�� �����

    PrintInfo(St_Nahida, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 



/*CRYO*/
//Ganyu
void ch_Ganyu()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Ganyu;
    strcpy(St_Ganyu.name, "����"); //�̸�
    strcpy(St_Ganyu.sig, "�Ƹ��� Ȱ"); //����ϴ� ���� ����
    St_Ganyu.nElem = 5; //����ϴ� ���� �ڵ�
    St_Ganyu.nSort = 3; //����ϴ� ���� �ڵ�
    St_Ganyu.nTimes = 3; //������ Ƚ��
    St_Ganyu.nLocal = 1; //��� ���� �ڵ�

    rerunVer[0][0] = 1.2; //ó�� �����
    rerunVer[1][0] = 2.4;
    rerunVer[2][0] = 3.0;

    PrintInfo(St_Ganyu, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Eula
void ch_Eula()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Eula;
    strcpy(St_Eula.name, "����"); //�̸�
    strcpy(St_Eula.sig, "�۷ڰ� �︱ ����"); //����ϴ� ���� ����
    St_Eula.nElem = 5; //����ϴ� ���� �ڵ�
    St_Eula.nSort = 2; //����ϴ� ���� �ڵ�
    St_Eula.nTimes = 2; //������ Ƚ��
    St_Eula.nLocal = 0; //��� ���� �ڵ�

    rerunVer[0][0] = 1.5; //ó�� �����
    rerunVer[1][0] = 2.3;

    PrintInfo(St_Eula, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Ayaka
void ch_Ayaka()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Ayaka;
    strcpy(St_Ayaka.name, "ī�̻��� �ƾ�ī"); //�̸�
    strcpy(St_Ayaka.sig, "�Ȱ��� ������ ȸ��"); //����ϴ� ���� ����
    St_Ayaka.nElem = 5; //����ϴ� ���� �ڵ�
    St_Ayaka.nSort = 0; //����ϴ� ���� �ڵ�
    St_Ayaka.nTimes = 2; //������ Ƚ��
    St_Ayaka.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.0; //ó�� �����
    rerunVer[1][0] = 2.6;

    PrintInfo(St_Ayaka, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Shenhe
void ch_Shenhe()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Shenhe;
    strcpy(St_Shenhe.name, "����"); //�̸�
    strcpy(St_Shenhe.sig, "����"); //����ϴ� ���� ����
    St_Shenhe.nElem = 5; //����ϴ� ���� �ڵ�
    St_Shenhe.nSort = 4; //����ϴ� ���� �ڵ�
    St_Shenhe.nTimes = 1; //������ Ƚ��
    St_Shenhe.nLocal = 1; //��� ���� �ڵ�

    rerunVer[0][0] = 2.4; //ó�� �����

    PrintInfo(St_Shenhe, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Mika
void ch_Mika()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Mika;
    strcpy(St_Mika.name, "��ī"); //�̸�
    strcpy(St_Mika.sig, "(�� �� ����)"); //����ϴ� ���� ����
    St_Mika.nElem = 5; //����ϴ� ���� �ڵ�
    St_Mika.nSort = 4; //����ϴ� ���� �ڵ�
    St_Mika.nTimes = 0; //������ Ƚ��
    St_Mika.nLocal = 0; //��� ���� �ڵ�

    rerunVer[0][0] = 0; //ó�� �����

    PrintInfo(St_Mika, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 



/*ELECTRO*/
//Keqing
void ch_Keqing()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Keqing;
    strcpy(St_Keqing.name, "��û"); //�̸�
    strcpy(St_Keqing.sig, "(����)"); //����ϴ� ���� ����
    St_Keqing.nElem = 4; //����ϴ� ���� �ڵ�
    St_Keqing.nSort = 0; //����ϴ� ���� �ڵ�
    St_Keqing.nTimes = 1; //������ Ƚ��
    St_Keqing.nLocal = 1; //��� ���� �ڵ�

    rerunVer[0][0] = 1.3; //ó�� �����

    PrintInfo(St_Keqing, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Raiden_Shougun
void ch_Raiden()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Raiden;
    strcpy(St_Raiden.name, "���̵� �"); //�̸�
    strcpy(St_Raiden.sig, "������ ����"); //����ϴ� ���� ����
    St_Raiden.nElem = 4; //����ϴ� ���� �ڵ�
    St_Raiden.nSort = 4; //����ϴ� ���� �ڵ�
    St_Raiden.nTimes = 2; //������ Ƚ��
    St_Raiden.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.1; //ó�� �����
    rerunVer[1][0] = 2.5;

    PrintInfo(St_Raiden, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Yae_Miko
void ch_Miko()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Miko;
    strcpy(St_Miko.name, "�߿� ����"); //�̸�
    strcpy(St_Miko.sig, "ī������ ����"); //����ϴ� ���� ����
    St_Miko.nElem = 4; //����ϴ� ���� �ڵ�
    St_Miko.nSort = 1; //����ϴ� ���� �ڵ�
    St_Miko.nTimes = 2; //������ Ƚ��
    St_Miko.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.5; //ó�� �����
    rerunVer[1][0] = 3.2;

    PrintInfo(St_Miko, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function

//Cyno
void ch_Cyno()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Cyno;
    strcpy(St_Cyno.name, "���̳�"); //�̸�
    strcpy(St_Cyno.sig, "���� �縷�� ������"); //����ϴ� ���� ����
    St_Cyno.nElem = 4; //����ϴ� ���� �ڵ�
    St_Cyno.nSort = 4; //����ϴ� ���� �ڵ�
    St_Cyno.nTimes = 1; //������ Ƚ��
    St_Cyno.nLocal = 3; //��� ���� �ڵ�

    rerunVer[0][0] = 3.1; //ó�� �����

    PrintInfo(St_Cyno, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 



/*HYDRO*/
//Chlide
void ch_Chlide()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Chlide;
    strcpy(St_Chlide.name, "Ÿ��Ż����"); //�̸�
    strcpy(St_Chlide.sig, "������ ��"); //����ϴ� ���� ����
    St_Chlide.nElem = 1; //����ϴ� ���� �ڵ�
    St_Chlide.nSort = 3; //����ϴ� ���� �ڵ�
    St_Chlide.nTimes = 4; //������ Ƚ��
    St_Chlide.nLocal = 6; //��� ���� �ڵ�

    rerunVer[0][0] = 1.1; //ó�� �����
    rerunVer[0][1] = 1.4;
    rerunVer[1][0] = 2.2;
    rerunVer[2][0] = 3.2;

    PrintInfo(St_Chlide, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Kokomi
void ch_Kokomi()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Kokomi;
    strcpy(St_Kokomi.name, "����̾� ���ڹ�"); //�̸�
    strcpy(St_Kokomi.sig, "�Ҹ��� �޺�"); //����ϴ� ���� ����
    St_Kokomi.nElem = 1; //����ϴ� ���� �ڵ�
    St_Kokomi.nSort = 1; //����ϴ� ���� �ڵ�
    St_Kokomi.nTimes = 3; //������ Ƚ��
    St_Kokomi.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.1; //ó�� �����
    rerunVer[1][0] = 2.5;
    rerunVer[2][0] = 3.0;

    PrintInfo(St_Kokomi, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Ayato
void ch_Ayato()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Ayato;
    strcpy(St_Ayato.name, "ī�̻��� �ƾ���"); //�̸�
    strcpy(St_Ayato.sig, "�϶� ������ ����"); //����ϴ� ���� ����
    St_Ayato.nElem = 1; //����ϴ� ���� �ڵ�
    St_Ayato.nSort = 0; //����ϴ� ���� �ڵ�
    St_Ayato.nTimes = 4; //������ Ƚ��
    St_Ayato.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.6; //ó�� �����

    PrintInfo(St_Ayato, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Yelan
void ch_Yelan()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Yelan;
    strcpy(St_Yelan.name, "�߶�"); //�̸�
    strcpy(St_Yelan.sig, "���"); //����ϴ� ���� ����
    St_Yelan.nElem = 1; //����ϴ� ���� �ڵ�
    St_Yelan.nSort = 3; //����ϴ� ���� �ڵ�
    St_Yelan.nTimes = 1; //������ Ƚ��
    St_Yelan.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.7; //ó�� �����

    PrintInfo(St_Yelan, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Nilou
void ch_Nilou()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Nilou;
    strcpy(St_Nilou.name, "�ҷ�"); //�̸�
    strcpy(St_Nilou.sig, "������ ����"); //����ϴ� ���� ����
    St_Nilou.nElem = 1; //����ϴ� ���� �ڵ�
    St_Nilou.nSort = 0; //����ϴ� ���� �ڵ�
    St_Nilou.nTimes = 1; //������ Ƚ��
    St_Nilou.nLocal = 4; //��� ���� �ڵ�

    rerunVer[0][0] = 3.1; //ó�� �����

    PrintInfo(St_Nilou, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 



/*GEO*/
//Zhongli
void ch_Zhongli()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Zhongli;
    strcpy(St_Zhongli.name, "����"); //�̸�
    strcpy(St_Zhongli.sig, "��ȫ�� â"); //����ϴ� ���� ����
    St_Zhongli.nElem = 6; //����ϴ� ���� �ڵ�
    St_Zhongli.nSort = 4; //����ϴ� ���� �ڵ�
    St_Zhongli.nTimes = 4; //������ Ƚ��
    St_Zhongli.nLocal = 1; //��� ���� �ڵ�

    rerunVer[0][0] = 1.1; //ó�� �����
    rerunVer[0][1] = 1.5;
    rerunVer[1][0] = 2.4;
    rerunVer[2][0] = 3.0;

    PrintInfo(St_Zhongli, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Albedo
void ch_Albedo()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Albedo;
    strcpy(St_Albedo.name, "�˺���"); //�̸�
    strcpy(St_Albedo.sig, "(����)"); //����ϴ� ���� ����
    St_Albedo.nElem = 6; //����ϴ� ���� �ڵ�
    St_Albedo.nSort = 0; //����ϴ� ���� �ڵ�
    St_Albedo.nTimes = 3; //������ Ƚ��
    St_Albedo.nLocal = 0; //��� ���� �ڵ�

    rerunVer[0][0] = 1.2; //ó�� �����
    rerunVer[1][0] = 2.3;
    rerunVer[2][0] = 3.1;

    PrintInfo(St_Albedo, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Ito
void ch_Ito()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Ito;
    strcpy(St_Ito.name, "�ƶ�ŸŰ ����"); //�̸�
    strcpy(St_Ito.sig, "�⼮�� ���� ��"); //����ϴ� ���� ����
    St_Ito.nElem = 6; //����ϴ� ���� �ڵ�
    St_Ito.nSort = 2; //����ϴ� ���� �ڵ�
    St_Ito.nTimes = 2; //������ Ƚ��
    St_Ito.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.3; //ó�� �����
    rerunVer[1][0] = 2.7;

    PrintInfo(St_Ito, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 



/*PYRO*/
//Klee
void ch_Klee()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Klee;
    strcpy(St_Klee.name, "Ŭ��"); //�̸�
    strcpy(St_Klee.sig, "��ǳ ����"); //����ϴ� ���� ����
    St_Klee.nElem = 0; //����ϴ� ���� �ڵ�
    St_Klee.nSort = 1; //����ϴ� ���� �ڵ�
    St_Klee.nTimes = 3; //������ Ƚ��
    St_Klee.nLocal = 0; //��� ���� �ڵ�

    rerunVer[0][0] = 1.0; //ó�� �����
    rerunVer[0][1] = 1.6;
    rerunVer[1][0] = 2.8;

    PrintInfo(St_Klee, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Hutao
void ch_Hutao()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Hutao;
    strcpy(St_Hutao.name, "ȣ��"); //�̸�
    strcpy(St_Hutao.sig, "ȣ���� ������"); //����ϴ� ���� ����
    St_Hutao.nElem = 0; //����ϴ� ���� �ڵ�
    St_Hutao.nSort = 4; //����ϴ� ���� �ڵ�
    St_Hutao.nTimes = 2; //������ Ƚ��
    St_Hutao.nLocal = 1; //��� ���� �ڵ�

    rerunVer[0][0] = 1.0; //ó�� �����
    rerunVer[0][1] = 2.2;

    PrintInfo(St_Hutao, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 

//Yoimia
void ch_Yoimiya()
{
    /*ĳ���� ����ü ����*/
    StInfo St_Yoimiya;
    strcpy(St_Yoimiya.name, "���̹̾�"); //�̸�
    strcpy(St_Yoimiya.sig, "����� ��"); //����ϴ� ���� ����
    St_Yoimiya.nElem = 0; //����ϴ� ���� �ڵ�
    St_Yoimiya.nSort = 3; //����ϴ� ���� �ڵ�
    St_Yoimiya.nTimes = 3; //������ Ƚ��
    St_Yoimiya.nLocal = 2; //��� ���� �ڵ�

    rerunVer[0][0] = 2.0; //ó�� �����
    rerunVer[0][1] = 2.8;
    rerunVer[1][0] = 3.2;

    PrintInfo(St_Yoimiya, rerunVer); //ĳ���� ���� ����ϱ�
} //end of function 