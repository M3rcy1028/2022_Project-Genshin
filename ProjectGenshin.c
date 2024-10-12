#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning(disable : 4996)

/*bgm ����*/
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment (lib, "winmm.lib")
#define bgm

/*��������� �������*/
#include "ImportList.h"
#include "ChracterInfo.h"
#include "Design.h"

/*
    ������ (Y)
    �Լ� (Y)
    �迭 (Y)
    ����ó�� (Y)
    ���ڿ�ó�� (Y)
    ����ü �迭 
    ��ø ����ü
    ����ü�� ������ (Y)
    �Լ� ����ü�� ������ (Y)
    ��ó�� (Y)
    ���� ����� (Y)
    �ؽ�Ʈ ���� (Y)
    ���� ����
    ���� ���� ����Ʈ
    ���� ����Ʈ
    ����ť
*/

/*ĳ������ ������ ã�� �Լ� ����*/
void Main_SelectCh();
void ch_ameno();
void ch_cryo();
void ch_dendro();
void ch_electro();
void ch_geo();
void ch_hydro();
void ch_pyro();

/*��� ������ �����ϴ� �Լ� ����*/
void ColorSet(int color_number);
/*Console Windowsâ Title�� ��ȯ�ϴ� �Լ� ����*/
void TitleChange();
/*�ܼ�â ũ�⸦ �����ϴ� �Լ�*/
void SizeChange();


/*���α׷� ����*/
int main()
{

    void TitleChange(); //Console Windowsâ Title ��ȯ

    PlaySound(TEXT("bgm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); // wave ���� ��� (�������)

    printf("  ���α׷��� ���������� ����Ǿ����ϴ�\n"); //ù ���� �޼���
    int repeat = 0; //���α׷� �ݺ� Ƚ��
    
    while (repeat <= 10) //�� 10������ �ݺ�
    {
        int select = 0; //������ ����� ��ȣ
        char* str = (char*)malloc(sizeof(char)*100); //�Է°��� ���� ���� �޸� �Ҵ�

        printf("  -----------------------------------------------------------------\n"); //���� ���
        printf("  ����Ϸ��� �ƹ����̳� �Է��ϼ���...(����� end �Է�) "); //���� ���
        scanf(" %s", str); //����� �Է�
        if (strncmp(str, "end", 3) == 0) //end �� �ԷµǸ� �Լ��� ������.
            break; //�ݺ��� Ż��
        else //end �̿��� ���ڰ� �ԷµǸ� else�� ����
        {
            printf("\n  ���ϴ� ������ �����ϼ���\n");  //���� ���
            printf("  1. ĳ���� ����ǥ �ҷ�����\n"); //���� ���
            printf("  2. ĳ���� ���� ã��\n"); //���� ���
            printf("  [�Է�] : "); //���� ���
            scanf(" %d", &select); //��ȣ �Է¹ޱ�
            switch (select)
            {
            case 1: //����ǥ ����Ʈ �ҷ�����
            {
                printf("\n  ĳ������ ����Ʈ�� �ҷ����� ���Դϴ�...\n"); //���� ���
                Main_ImportList(); //"ImportList.h"�� �Լ� ����
                repeat++; //���� �ݺ� Ƚ�� +1
                break; //case�� Ż��
            } //end of case 1
            case 2: //ĳ���� ���� ã��
            {
                printf("\n  ĳ������ ������ �ҷ����� ���Դϴ�...\n"); //���� ���
                Main_SelectCh();
                repeat++; //���� �ݺ� Ƚ�� +1
                break; //case�� Ż��
            } //end of case 2
            default:  //�ٸ� ���� ������ ��
            {
                printf("\n  ���ϴ� ��ȣ�� ����� ã�� �� �����ϴ�...\n"); //���� ���
                continue;
            } //end of defualt
            } //end of switch-case
        } //end of if-else statement
        printf("\n\n"); //����
        free(str); //�޸� ����
    } //end of while statement
    if (repeat >= 10)
    {
        printf("\n\n  [[���α׷��� �ʹ� ���� �����Ͽ����ϴ�.");
    }
    else
    {
        printf("\n\n  [[���α׷��� �����մϴ�...]]\n\n");
    }
    return 0;
} //end of main


/*ĳ������ ������ �����ϴ� �Լ�*/    
void Main_SelectCh()
{
    while (1) //while statement start
    {
        int select = 0; //������ ����� ��ȣ
        char str[100]; //�Է°��� ���� ����

        printf("  ĳ������ ������ ã���ðڽ��ϱ�? (����� end �Է�) : "); //���� ���
        scanf(" %s", str); //����� �Է�
        if (strncmp(str, "end", 3) == 0) //end�� �ԷµǸ� �Լ��� ������.
            break;
        else //end �̿��� ���ڰ� �ԷµǸ� ���� �� �����ϰ� ��.
        {
            enum ColorKinds Colorkinds; //���� ������ �ҷ�����
            printf("\n  [ĳ������ ���Ҹ� �����ϼ���.]\n\n"); //���� ���
            //ù��° ����
            printf("  1. "); //���� ���
            ColorSet(red); //���� ����
            printf("��"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n"); //���� ���
            //�ι�° ����
            printf("  2. "); //���� ���
            ColorSet(skyBlue); //���� ��ī�̺��
            printf("��"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n"); //���� ���
            //����° ����
            printf("  3. "); //���� ���
            ColorSet(brightGreen); //���� ���� �ʷ�
            printf("Ǯ"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n"); //���� ���
            //�׹�° ����
            printf("  4. "); //���� ���
            ColorSet(sky); //���� �ϴû�
            printf("�ٶ�"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n");
            //�ټ���° ����
            printf("  5. "); //���� ���
            ColorSet(blue); //���� �Ķ���
            printf("����"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n");
            //������° ����
            printf("  6. "); //���� ���
            ColorSet(lightBlue); //���� ���� �Ķ���
            printf("����"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n");
            //�ϰ���° ����
            printf("  7. "); //���� ���
            ColorSet(orange); //���� ��Ȳ��
            printf("����"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n"); //���� ���
            printf("\n  [�Է�] : "); //���� ���
            scanf_s(" %d", &select); //��ȣ�� �� �Է¹ޱ�

            /*�Է¹��� ������ ���� �� �ϳ��� switch-case���� ������*/
            switch (select)
            {
            case 1: //�� ����
            {
                ColorSet(red); //���� ������
                printf("\n  �� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ch_pyro(); //�� ���� ĳ���� ����Ʈ�� �ҷ��� �Լ� ȣ��
                break; //case�� Ż��
            } //end of case 1:
            case 2: //�� ����
            {
                ColorSet(skyBlue); //���� ��ī�̺��
                printf("\n  �� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ch_hydro(); //�� ���� ĳ���� ����Ʈ�� �ҷ��� �Լ� ȣ��
                break; //case�� Ż��
            } //end of case 2:
            case 3: //Ǯ ����
            {
                ColorSet(brightGreen); //���� ���� �ʷϻ�
                printf("\n  Ǯ ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ch_dendro(); //Ǯ ���� ĳ���� ����Ʈ�� �ҷ��� �Լ� ȣ��
                break; //case�� Ż��
            } //end of case 3:
            case 4: //�ٶ� ����
            {
                ColorSet(sky); //���� �ϴû�
                printf("\n  �ٶ� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ch_ameno(); //�ٶ� ���� ĳ���� ����Ʈ�� �ҷ��� �Լ� ȣ��
                break; //case�� Ż��
            } //end of case 4:
            case 5: //���� ����
            {
                ColorSet(blue); //���� �Ķ���
                printf("\n  ���� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ch_electro(); //���� ���� ĳ���� ����Ʈ�� �ҷ��� �Լ� ȣ��
                break; //case�� Ż��
            } //end of case 5:
            case 6: //���� ����
            {
                ColorSet(lightBlue); //���� ���� �Ķ���
                printf("\n  ���� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ch_cryo(); //���� ���� ĳ���� ����Ʈ�� �ҷ��� �Լ� ȣ��
                break; //case�� Ż��
            } //end of case 6:
            case 7: //���� ����
            {
                ColorSet(orange); //���� ��Ȳ��
                printf("\n  ���� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ch_geo(); //���� ���� ĳ���� ����Ʈ�� �ҷ��� �Լ� ȣ��
                break; //case�� Ż��
            } //end of case 7:
            default: //0~7 �̿��� ���� ���� �� ����
            {
                printf("\n  �ش��ϴ� ��ȣ�� �����͸� �ҷ��� �� �����ϴ�.\n\n\n\n"); //���� ���
                continue; //�ٽ� while�� ó������ ���ư��� �����ϰ� ��.
            } //end of default
            } //end of swirch-case
            break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
        } //end of if-else
    } //end of while 
} //end of function "Main_SelectCh"

/*Ameno(�ٶ�)*/
void ch_ameno()
{
    while (1)
    {
        int select; //�ʿ��� ���� ����
        ColorSet(brightWhite); //���� ���
        printf("\n  1. ��Ƽ\n  2. ��\n  3. ī�����϶� ī����\n  4. �����\n"); //����
        printf("\n  [������ �ҷ��� ĳ������ ��ȣ�� �Է��ϼ���...]"); //���� ���
        printf("\n  [�Է�] : "); //���� ���
        scanf_s(" %d", &select); //����� �Է�
        printf("\n\n"); //����
        ColorSet(white); //���� ���

        switch (select)
        {
        case 1: //Venti
        {
            ch_Venti(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 1
        case 2: //Xiao
        {
            ch_Xiao(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 2
        case 3: //Kaedehara Kazuha
        {
            ch_Kazuha(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 3
        case 4:
        {
            ch_Wanderer(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 4
        default: //�̿��� ���� ������ ��
        {
            printf("������ ĳ������ ������ �ҷ��� �� �����ϴ�.\n"); //���� ���
            continue; //while�� �ٽ� ����
        } //end of default:
        } //end of switch-case
        break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
    } //end of while statement
} //end of function "ch_ameno"

/*cryo(����)*/
void ch_cryo()
{
    while (1)
    {
        int select; //�ʿ��� ���� ����
        ColorSet(brightWhite); //���� ���
        printf("\n  1. ����\n  2. ����\n  3. ī�̻��� �ƾ�ī\n  4. ����\n  5. ��ī\n"); //����
        printf("\n  [������ �ҷ��� ĳ������ ��ȣ�� �Է��ϼ���...]"); //���� ���
        printf("\n  [�Է�] : "); //���� ���
        scanf_s(" %d", &select); //����� �Է�
        printf("\n\n"); //����
        ColorSet(white); //���� ���

        switch (select)
        {
        case 1: //Ganyu
        {
            ch_Ganyu(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 1
        case 2: //Eula
        {
            ch_Eula(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 2
        case 3: //Ayaka
        {
            ch_Ayaka(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 3
        case 4: //Shene
        {
            ch_Shenhe(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 4
        case 5: //Mika
        {
            ch_Mika(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 5
        default: //�̿��� ���� ������ ��
        {
            printf("������ ĳ������ ������ �ҷ��� �� �����ϴ�.\n"); //���� ���
            continue; //while�� �ٽ� ����
        } //end of default
        } //end of switch-case
        break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
    } //end of while statement
} //end of function "ch_cryo"

/*dendro(�ٶ�)*/
void ch_dendro()
{
    while (1)
    {
        int select; //�ʿ��� ���� ����
        ColorSet(brightWhite); //���� ���
        printf("\n  1. Ÿ�̳���\n  2. ������\n"); //����
        printf("\n  [������ �ҷ��� ĳ������ ��ȣ�� �Է��ϼ���...]"); //���� ���
        printf("\n  [�Է�] : "); //���� ���
        scanf_s(" %d", &select); //����� �Է�
        printf("\n\n"); //����
        ColorSet(white); //���� ���

        switch (select)
        {
        case 1: //Tighnari
        {
            ch_Tighnari(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 1
        case 2: //Nahida
        {
            ch_Nahida(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 2
        default: //�̿��� ���� ������ ��
        {
            printf("������ ĳ������ ������ �ҷ��� �� �����ϴ�.\n"); //���� ���
            continue; //while�� �ٽ� ����
        } //end of default
        } //end of switch-case
        break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
    } //end of while statement
} //end of function "ch_dendro"

/*electro(����)*/
void ch_electro()
{
    while (1)
    {
        int select; //�ʿ��� ���� ����
        ColorSet(brightWhite); //���� ���
        printf("\n  1. ��û\n  2. ���̵� �\n  3. �ƿ� ����\n  4. ���̳�\n"); //����
        printf("\n  [������ �ҷ��� ĳ������ ��ȣ�� �Է��ϼ���...]"); //���� ���
        printf("\n  [�Է�] : "); //���� ���
        scanf_s(" %d", &select); //����� �Է�
        printf("\n\n"); //����
        ColorSet(white); //���� ���

        switch (select)
        {
        case 1: //Keqing
        {
            ch_Keqing(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 1:
        case 2: //Raiden_Shougun
        {
            ch_Raiden(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 2:
        case 3: //Yae_Miko
        {
            ch_Miko(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 3:
        case 4: //Cyno
        {
            ch_Cyno(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 4:
        default: //�̿��� ���� ������ ��
        {
            printf("������ ĳ������ ������ �ҷ��� �� �����ϴ�.\n"); //���� ���
            continue; //while�� �ٽ� ����
        } //end of default
        } //end of switch-case
        break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
    } //end of while statement
} //end of function "ch_electro"

/*geo(����)*/
void ch_geo()
{
    while (1)
    {
        int select; //�ʿ��� ���� ����
        ColorSet(brightWhite); //���� ���
        printf("\n  1. ����\n  2. �˺���\n  3. �ƶ�ŸŰ ����\n"); //����
        printf("\n  [������ �ҷ��� ĳ������ ��ȣ�� �Է��ϼ���...]"); //���� ���
        printf("\n  [�Է�] : "); //���� ���
        scanf_s(" %d", &select); //����� �Է�
        printf("\n\n"); //����
        ColorSet(white); //���� ���

        switch (select)
        {
        case 1: //Zhongli
        {
            ch_Zhongli(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 1:
        case 2: //Albedo
        {
            ch_Albedo(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 2:
        case 3: //Ito
        {
            ch_Ito(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 3:
        default: //�̿��� ���� ������ ��
        {
            printf("������ ĳ������ ������ �ҷ��� �� �����ϴ�.\n"); //���� ���
            continue; //while�� �ٽ� ����
        } //end of default:
        } //end of switch-case
        break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
    } //end of while
} //end of function "ch_geo"

/*Hydro(��)*/
void ch_hydro()
{
    while (1)
    {
        int select; //�ʿ��� ���� ����
        ColorSet(brightWhite); //���� ���
        printf("\n  1. Ÿ��Ż����\n  2. ����̾� ���ڹ�\n  3. ī�̻��� �ƾ���\n  4. �߶�\n  5. �ҷ�\n"); //����
        printf("\n  [������ �ҷ��� ĳ������ ��ȣ�� �Է��ϼ���...]"); //���� ���
        printf("\n  [�Է�] : ");  //���� ���
        scanf_s(" %d", &select); //����� �Է�
        printf("\n\n"); //����
        ColorSet(white); //���� ���

        switch (select)
        {
        case 1: //Childe
        {
            ch_Chlide(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 1:
        case 2: //Kokomi
        {
            ch_Kokomi(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 2:
        case 3: //Ayato
        {
            ch_Ayato(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 3:
        case 4: //Yelan
        {
            ch_Yelan(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 4:
        case 5: //Nilou
        {
            ch_Nilou(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 5:
        default: //�̿��� ���� ������ ��
        {
            printf("������ ĳ������ ������ �ҷ��� �� �����ϴ�.\n"); //���� ���
            continue; //while�� �ٽ� ����
        } //end of default:
        } //end of switch-case
        break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
    } //end of while statement
} //end of function "ch_hydro"

/*Pyro(��)*/
void ch_pyro()
{
    while (1)
    {
        ColorSet(brightWhite); //���� ���
        int select; //�ʿ��� ���� ����
        printf("\n  1. Ŭ��\n  2. ȣ��\n  3. ���̹̾�\n"); //����
        printf("\n  [������ �ҷ��� ĳ������ ��ȣ�� �Է��ϼ���...]"); //���� ���
        printf("\n  [�Է�] : "); //���� ���
        scanf_s(" %d", &select); //����� �Է�
        printf("\n\n"); //����
        ColorSet(white); //���� ���

        switch (select)
        {
        case 1: //Klee
        {
            ch_Klee(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 1:
        case 2: //Hutao
        {
            ch_Hutao(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 2:
        case 3: //Yoimiya
        {
            ch_Yoimiya(); //"ChacaterInfo.h" ��� ������ �Լ� �ҷ�����
            break; //case�� Ż��
        } //end of case 3:
        default: //�̿��� ���� ������ ��
        {
            printf("������ ĳ������ ������ �ҷ��� �� �����ϴ�.\n"); //���� ���
            continue; //while�� �ٽ� ����
        } //end of default:
        } //end of switch-case
        break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
    } //end of while statement
} //end of function "ch_pyro"