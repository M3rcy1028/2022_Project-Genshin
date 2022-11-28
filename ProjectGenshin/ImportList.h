/*ĳ������ ����ǥ�� �ҷ����� �������*/
#include <stdio.h>
#include <windows.h>
#pragma once

/*����� ���� �������*/
#include "Design.h"

//�Լ� ����
void Main_ImportList();
void All_element();
void pyro();
void hydro();
void ameno();
void electro();
void dendro();
void cryo();
void geo();

/*��� ������ �����ϴ� �Լ� ����*/
void ColorSet(int color_number);

/*����ǥ�� �ҷ��� �� �����ϴ� �Լ�*/
void Main_ImportList()
{
    /*����ڰ� ���ϴ� ����Ʈ�� �����ϴ� �ݺ���*/
    while (1)
    {
        //�ʿ��� ���� ����
        int select = 0; //������ ��ȣ�� ������ ����
        char str[100]; //����� �Է��� ���� ����

        /*���� ���*/
        printf("  ����Ϸ��� �ƹ� ���̳� �Է��ϼ���...\n");
        printf("\n  ����ǥ�� �ҷ����ðڽ��ϱ�? (����� end �Է�) : ");
        scanf(" %s", str); //����� �Է�
        if (strncmp(str, "end", 3) == 0) //end�� �ԷµǸ� �Լ��� ������.
            break; //���α׷� ����
        else //end �̿��� ���ڰ� �ԷµǸ� ���� �� �����ϰ� ��.
        {
            enum ColorKinds Colorkinds;
            printf("\n  [�ҷ��� ����Ʈ�� ��ȣ�� �����ϼ���.]\n\n"); //����
            //ù��° ����
            printf("  0. ��� ĳ���� �ҷ�����\n");
            //�ι�° ����
            printf("  1. "); //���� ���
            ColorSet(red); //���� ����
            printf("��"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n"); //���� ���
            //����° ����
            printf("  2. "); //���� ���
            ColorSet(skyBlue); //���� ��ī�̺��
            printf("��"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n"); //���� ���
            //�׹�° ����
            printf("  3. "); //���� ���
            ColorSet(brightGreen); //���� ���� �ʷ�
            printf("Ǯ"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n"); //���� ���
            //�ټ���° ����
            printf("  4. "); //���� ���
            ColorSet(sky); //���� �ϴû�
            printf("�ٶ�"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n");
            //������° ����
            printf("  5. "); //���� ���
            ColorSet(blue); //���� �Ķ���
            printf("����"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n");
            //�ϰ���° ����
            printf("  6. "); //���� ���
            ColorSet(lightBlue); //���� ���� �Ķ���
            printf("����"); //���� ���
            ColorSet(brightWhite); //���� ���
            printf(" ���� ĳ���� �ҷ�����\n");
            //������° ����
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
            case 0: //��� ����
            {
                printf("  ��� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                All_element(); //��� ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 0:
            case 1: //�� ����
            {
                ColorSet(red); //���� ������
                printf("\n  ��� �� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                pyro(); //�� ���� ĳ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 1:
            case 2: //�� ����
            {
                ColorSet(skyBlue); //���� ��ī�̺��
                printf("\n  ��� �� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                hydro(); //�� ���� ĳ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 2:
            case 3: //Ǯ ����
            {
                ColorSet(brightGreen); //���� ���� �ʷϻ�
                printf("\n  ��� Ǯ ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                dendro(); //Ǯ ���� ĳ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 3:
            case 4: //�ٶ� ����
            {
                ColorSet(sky); //���� �ϴû�
                printf("\n  ��� �ٶ� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                ameno(); //�ٶ� ���� ĳ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 4:
            case 5: //���� ����
            {
                ColorSet(blue); //���� �Ķ���
                printf("\n  ��� ���� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                electro(); //���� ���� ĳ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 5:
            case 6: //���� ����
            {
                ColorSet(lightBlue); //���� ���� �Ķ���
                printf("\n  ��� ���� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                cryo(); //���� ���� ĳ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 6:
            case 7: //���� ����
            {
                ColorSet(orange); //���� ��Ȳ��
                printf("\n  ��� ���� ���� ĳ���͸� �ҷ����� ���Դϴ�...\n"); //���� ���
                ColorSet(white); //���� ���
                geo(); //���� ���� ĳ������ ����Ʈ�� ����� �Լ� ȣ��
                break; //switch�� Ż��
            } //end of case 7:
            default: //0~7 �̿��� ���� ���� �� ����
            {
                printf("\n  �ش��ϴ� ��ȣ�� �����͸� �ҷ��� �� �����ϴ�.\n\n\n\n"); //���� ���
                continue; //�ٽ� while�� ó������ ���ư��� �����ϰ� ��.
            } //end of default
            } //end of swirch-case
            printf("  ���Ϸ� ���ư��� .txt������ Ȯ���� ��, .csv�� �ٲپ� �ּ���.\n\n"); //���� ���
            break; //switch-case���� ������ ������� ��ȯ�ϰ� while�� ����
        } //end of if-else
    } //end of while 
} //end of function "ImportList"

/*��� ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void All_element()
{
    FILE* fp = fopen("All_element.txt", "w"); //All_element ������ ���� ���(w)�� ����

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //���Ͽ� ���ڿ� ����
    //pyro
    fputs("Klee,,O,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,,O\n", fp); //Ŭ��
    fputs("Hutao,,,,,,,,,O,,,,,,,,,,,,O\n", fp); //ȣ��
    fputs("Yoimiya,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,O,,,,,O\n", fp); //���̹̾�
    //hydro
    fputs("Chlide,,,O,,,,,,,,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,,O\n", fp); //Ÿ��Ż����
    fputs("Kokomi,,,,,,,,,,,,,,,,,,,O,,,,,,,,O,,,,,,,,O\n", fp); //����̾� ���ڹ�
    fputs("Ayato,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //ī�̻��� �ƾ���
    fputs("Yelan,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //�߶�
    fputs("Nilou,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //�ҷ�
    //ameno
    fputs("Venti,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,O,,,,,,,,O\n", fp); //��Ƽ
    fputs("Xiao,,,,,,,O,,,,,,,,,,,,,,,,,O,,,,,,O\n", fp); //��
    fputs("Kazuha,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,O\n", fp); //ī����
    fputs("Wanderer,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //�����
    //electro
    fputs("Keqing,,,,,,,,O\n", fp); //��û
    fputs("Raiden,,,,,,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //���̵� �
    fputs("Yae Miko,,,,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //�߿� ����
    fputs("Cyno,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //���̳�
    //dendro
    fputs("Tighnari,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //Ÿ�̳���
    fputs("Nahida,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //������
    //cryo
    fputs("Ganyu,,,,,,O,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,O\n", fp); //����
    fputs("Eula,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //����
    fputs("Ayaka,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //ī�̻��� �ƾ�ī
    fputs("Shenhe,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //����
    //geo
    fputs("Zhongli,,,,O,,,,,,,,O,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //����
    fputs("Abeldo,,,,,O,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,O\n", fp); //�˺���
    fputs("Ito,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,O\n", fp); //����

    fclose(fp); //���� ������ �ݱ� 
} //end of fuction "All_element"

/*��� �� ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void pyro()
{
    FILE* fp = fopen("Pyro.txt", "w"); //Pyro ������ ���� ���(w)�� ����

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //����
    //character
    fputs("Klee,,O,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,,O\n", fp); //Ŭ��
    fputs("Hutao,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //ȣ��
    fputs("Yoimiya,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,O,,,,,O\n", fp); //���̹̾�

    fclose(fp); //���� ������ �ݱ�
} //end of function "pyro"

/*��� �� ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void hydro()
{
    FILE* fp = fopen("Hydro.txt", "w"); ////Hydro ������ ���� ���(w)�� ����

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //����
    //character
    fputs("Chlide,,,O,,,,,,,,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,,O\n", fp); //Ÿ��Ż����
    fputs("Kokomi,,,,,,,,,,,,,,,,,,,O,,,,,,,,O,,,,,,,,O\n", fp); //����̾� ���ڹ�
    fputs("Ayato,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //ī�̻��� �ƾ���
    fputs("Yelan,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //�߶�
    fputs("Nilou,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //�ҷ�

    fclose(fp); //���� ������ �ݱ�
} //end of fuction "hydro"

/*��� �ٶ� ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void ameno()
{
    FILE* fp = fopen("Ameno.txt", "w"); //Ameo ������ ���� ���(w)�� ����

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //����
    //character
    fputs("Venti,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,O,,,,,,,O\n", fp); //��Ƽ
    fputs("Xiao,,,,,,,O,,,,,,,,,,,,,,,,,,O,,,,,,O\n", fp); //��
    fputs("Kazuha,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,O\n", fp); //ī����
    fputs("Wanderer,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //�����

    fclose(fp); //���� ������ �ݱ�
} //end of function "ameno"

/*��� ���� ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void electro()
{
    FILE* fp = fopen("Elelctro.txt", "w"); //Electro ������ ���� ���(w)�� ����

    //verso=ion
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //����
    //character
    fputs("Keqing,,,,,,,,O\n", fp); //��û
    fputs("Raiden,,,,,,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //���̵� �
    fputs("Yae Miko,,,,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //�߿� ����
    fputs("Cyno,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //���̳�

    fclose(fp); //���� ������ �ݱ�
} //end of funtction "electro"

/*��� Ǯ ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void dendro()
{
    FILE* fp = fopen("Dendro.txt", "w"); //Dendro ������ ���� ���(w)�� ����

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //����
    //chracter
    fputs("Tighnari,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //Ÿ�̳���
    fputs("Nahida,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //������

    fclose(fp); //���� ������ �ݱ�
} //end of fuction "dendro"

/*��� ���� ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void cryo()
{
    FILE* fp = fopen("Cryo.txt", "w"); //Cryo ������ ���� ���(w)�� ����

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //����
    //chracter
    fputs("Ganyu,,,,,,O,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,O\n", fp); //����
    fputs("Eula,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //����
    fputs("Ayaka,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //ī�̻��� �ƾ�ī
    fputs("Shenhe,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //����

    fclose(fp); //���� ������ �ݱ�
} //end of function "cryo"

/*��� ���� ������ ĳ������ ���� ����Ʈ�� ����� �Լ�*/
static void geo()
{
    FILE* fp = fopen("Geo.txt", "w"); //Geo ������ ���� ���(w)�� ����

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //����
    fputs("\n", fp); //����
    //chracter
    fputs("Zhongli,,,,O,,,,,,,,O,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //����
    fputs("Abeldo,,,,,O,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,O\n", fp); //�˺���
    fputs("Ito,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,O\n", fp); //����

    fclose(fp); //���� ������ �ݱ�
} //end of function "geo"