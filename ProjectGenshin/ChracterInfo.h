/*캐릭터의 정보를 불러오는 헤더파일*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma once

/*사용자 지정 헤더파일*/
#include "Design.h"

/*복각 버전을 저장할 전역 변수 배열 선언*/
double rerunVer[10][10] = { 0 }; //0으로 초기화

/*캐릭터의 정보를 저장할 구조체*/
typedef struct ChracterInfo
{
    char name[50]; //캐릭터 이름 배열
    char sig[30]; //캐릭터 전용 무기 이름 배열
    int nTimes, nLocal, nSort, nElem; //복각 횟수, 출신지역, 무기종류, 사용하는 원소 변수
} StInfo; //구조체 선언

/*출력 색상을 조절하는 함수 선언*/
void ColorSet(int color_number);

/*캐릭터의 정보를 출력하는 함수*/
void PrintInfo(StInfo CH, double rerunVer[][10])
{
    printf("  이름 : %s ", CH.name); //캐릭터 이름 출력
    /*캐릭터가 사용하는 원소의 종류를 출력하는 함수*/
    switch (CH.nElem)
    {
    case 0: //불 원소
    {
        ColorSet(red); //색상 빨간색
        printf("(불)\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 0:
    case 1: //물 원소
    {
        ColorSet(skyBlue); //색상 스카이블루
        printf("(물)\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 1:
    case 2: //풀 원소
    {
        ColorSet(brightGreen); //색상 밝은 초록
        printf("(풀)\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 2:
    case 3: //바람 원소
    {
        ColorSet(sky); //색상 하늘색
        printf("(바람)\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 3:
    case 4: //번개 원소
    {
        ColorSet(blue); //색상 파란색
        printf("(번개)\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 4:
    case 5: //얼음 원소
    {
        ColorSet(lightBlue); //색상 밝은 파란색
        printf("(얼음)\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 5:
    case 6: //바위 원소
    {
        ColorSet(orange); //색상 주황색
        printf("(바위)\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 6:
    default: //이외의 값이 들어올 때
        printf("(알 수 없음)\n"); //문구 출력
        break; //case문 탈출
    } //end of default:
    
    printf("  출신 지역 : ");  //문구 출력
    /*캐릭터의 출신 지역을 출력*/
    switch (CH.nLocal)
    {
    case 0: //Mondstadt
    {
        ColorSet(sky); //색상 하늘색
        printf("몬드 "); //문구 출력
        ColorSet(white); //색상 흰색
        printf("(바람과 자유의 도시)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 0:
    case 1: //Liyue
    {
        ColorSet(orange); //색상 주황색
        printf("리월 "); //문구 출력
        ColorSet(white); //색상 흰색
        printf("(바위와 계약의 항구)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 1:
    case 2: //Inazuma
    {
        ColorSet(blue); //색상 파란색
        printf("이나즈마 "); //문구 출력
        ColorSet(white); //색상 흰색
        printf("(번개와 영원의 군도)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 2:
    case 3: //Sumeru
    {
        ColorSet(brightGreen); //색상 밝은 초록색
        printf("수메르 "); //문구 출력
        ColorSet(white); //색상 흰색
        printf("(풀과 지혜의 우림)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 3:
    case 4: //Fontaine
    {
        ColorSet(skyBlue); //색상 스카이블루
        printf("폰타인\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출 
    } //end of case 4:
    case 5: //Natlan
    {
        ColorSet(red); //색상 빨간색
        printf("나타\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 5:
    case 6: //Snezhunaya
    {
        ColorSet(lightBlue); //색상 스카이블루
        printf("스네즈나야\n"); //문구 출력
        ColorSet(white); //색상 흰색
        break; //case문 탈출
    } //end of case 6:
    default: //이외의 값이 들어올 때
        printf("알 수 없음 \n"); //문구 출력
        break; //case문 탈출
    } //end of switch-case statement

    printf("  전용 무기 : %s", CH.sig); //캐릭터의 전용 무기 이름 출력
    /*캐릭터가 사용하는 무기의 종류를 출력*/
    switch (CH.nSort)
    {
    case 0: //한손검
    {
        printf(" (한손검)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 0:
    case 1: //법구
    {
        printf(" (법구)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 1:
    case 2: //양손검
    {
        printf(" (양손검)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 2:
    case 3: //활
    {
        printf(" (활)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 3:
    case 4: //장병기
    {
        printf(" (장병기)\n"); //문구 출력
        break; //case문 탈출
    } //end of case 4:
    default: //이외의 값이 들어올 때
        printf(" (알 수 없음)\n"); //문구 출력
        break; //case문 탈출
    } //end of default:

    printf("  복각한 횟수 : %d\n", CH.nTimes); //캐릭터가 복각한 횟수 출력
    /*캐릭터가 복각한 버전을 출력*/
    printf("  처음 나온 버전 : %.1f\n", rerunVer[0][0]); //처음 나온 버전 출력
    printf("  복각한 버전 : "); //문구 출력
    if (CH.nTimes == 1) /*캐릭터의 복각 횟수가 1번일 때*/
    {
        printf("%s  ", "아직없음"); //문구 출력
    } //end of if statement
    else if (CH.nTimes == 0) /*캐릭터의 복각 횟수가 0일 때*/
    {
        printf("%s  ", "아직 나오지 않은 캐릭터"); //문구 출력
    }
    else //캐릭터의 복각 횟수가 2번 이상일 때
    { //캐릭터의 복각일을 출력하는 반복문
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                /*캐릭터의 복각일 출력*/
                if (rerunVer[i][j] == 0)
                {
                    /*배열에 든 값이 0일 때 반복문 탈출*/
                    break;
                } //end of if statement
                else
                {
                    printf("%.1lf  ", rerunVer[i][j]); //캐릭터의 복각 버전 출력
                } //end of else statement
            } //end of for-j
        } //end of for-i
    } //end of if-else
    printf("\n\n  다른 기능을 실행하려면 아무값이나 입력하시오..."); //다른 기능의 실행여부 묻기
    //대충 이 모든걸 처음으로 돌리는 함수 작동
}


/*AMENO*/
//Venti
void ch_Venti()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Venti;
    strcpy(St_Venti.name, "벤티"); //이름
    strcpy(St_Venti.sig, "종말 탄식의 노래"); //사용하는 전용 무기
    St_Venti.nElem = 3; //사용하는 원소 코드
    St_Venti.nSort = 3; //사용하는 무기 코드
    St_Venti.nTimes = 4; //복각한 횟수
    St_Venti.nLocal = 0; //출신 지역 코드
   
    rerunVer[0][0] = 1.0; //처음 출시일
    rerunVer[0][1] = 1.4;
    rerunVer[1][0] = 2.6;
    rerunVer[2][0] = 3.1;
    

    PrintInfo(St_Venti, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Xiao
void ch_Xiao()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Xiao;
    strcpy(St_Xiao.name, "소"); //이름
    strcpy(St_Xiao.sig, "화박연"); //사용하는 전용 무기
    St_Xiao.nElem = 3; //사용하는 원소 코드
    St_Xiao.nSort = 4; //사용하는 무기 코드
    St_Xiao.nTimes = 3; //복각한 횟수
    St_Xiao.nLocal = 1; //출신 지역 코드

    rerunVer[0][0] = 1.3; //처음 출시일
    rerunVer[1][0] = 2.4;
    rerunVer[1][1] = 2.7;

    PrintInfo(St_Xiao, rerunVer); //캐릭터 정보 출력하기
} //end of function 


//Kazuha
void ch_Kazuha()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Kazuha;
    strcpy(St_Kazuha.name, "카에데하라 카즈하"); //이름
    strcpy(St_Kazuha.sig, "오래된 자유의 서약"); //사용하는 전용 무기
    St_Kazuha.nElem = 3; //사용하는 원소 코드
    St_Kazuha.nSort = 0; //사용하는 무기 코드
    St_Kazuha.nTimes = 2; //복각한 횟수
    St_Kazuha.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 1.6; //처음 출시일
    rerunVer[1][0] = 2.8;

    PrintInfo(St_Kazuha, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Wanderer
void ch_Wanderer()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Wanderer;
    strcpy(St_Wanderer.name, "방랑자"); //이름
    strcpy(St_Wanderer.sig, "툴레이툴라의 기억"); //사용하는 전용 무기
    St_Wanderer.nElem = 3; //사용하는 원소 코드
    St_Wanderer.nSort = 1; //사용하는 무기 코드
    St_Wanderer.nTimes = 1; //복각한 횟수
    St_Wanderer.nLocal = 3; //출신 지역 코드

    rerunVer[0][0] = 3.3; //처음 출시일

    PrintInfo(St_Wanderer, rerunVer); //캐릭터 정보 출력하기
} //end of function


/*DENFRO*/
//Tighnari
void ch_Tighnari()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Tighnari;
    strcpy(St_Tighnari.name, "타이나리"); //이름
    strcpy(St_Tighnari.sig, "사냥꾼의 길"); //사용하는 전용 무기
    St_Tighnari.nElem = 2; //사용하는 원소 코드
    St_Tighnari.nSort = 3; //사용하는 무기 코드
    St_Tighnari.nTimes = 1; //복각한 횟수
    St_Tighnari.nLocal = 3; //출신 지역 코드

    rerunVer[0][0] = 3.1; //처음 출시일

    PrintInfo(St_Tighnari, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Nahida
void ch_Nahida()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Nahida;
    strcpy(St_Nahida.name, "나히다"); //이름
    strcpy(St_Nahida.sig, "떠오르는 천일 밤의 꿈"); //사용하는 전용 무기
    St_Nahida.nElem = 2; //사용하는 원소 코드
    St_Nahida.nSort = 1; //사용하는 무기 코드
    St_Nahida.nTimes = 1; //복각한 횟수
    St_Nahida.nLocal = 3; //출신 지역 코드

    rerunVer[0][0] = 3.2; //처음 출시일

    PrintInfo(St_Nahida, rerunVer); //캐릭터 정보 출력하기
} //end of function 



/*CRYO*/
//Ganyu
void ch_Ganyu()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Ganyu;
    strcpy(St_Ganyu.name, "감우"); //이름
    strcpy(St_Ganyu.sig, "아모스의 활"); //사용하는 전용 무기
    St_Ganyu.nElem = 5; //사용하는 원소 코드
    St_Ganyu.nSort = 3; //사용하는 무기 코드
    St_Ganyu.nTimes = 3; //복각한 횟수
    St_Ganyu.nLocal = 1; //출신 지역 코드

    rerunVer[0][0] = 1.2; //처음 출시일
    rerunVer[1][0] = 2.4;
    rerunVer[2][0] = 3.0;

    PrintInfo(St_Ganyu, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Eula
void ch_Eula()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Eula;
    strcpy(St_Eula.name, "유라"); //이름
    strcpy(St_Eula.sig, "송뢰가 울릴 무렵"); //사용하는 전용 무기
    St_Eula.nElem = 5; //사용하는 원소 코드
    St_Eula.nSort = 2; //사용하는 무기 코드
    St_Eula.nTimes = 2; //복각한 횟수
    St_Eula.nLocal = 0; //출신 지역 코드

    rerunVer[0][0] = 1.5; //처음 출시일
    rerunVer[1][0] = 2.3;

    PrintInfo(St_Eula, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Ayaka
void ch_Ayaka()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Ayaka;
    strcpy(St_Ayaka.name, "카미사토 아야카"); //이름
    strcpy(St_Ayaka.sig, "안개를 가르는 회광"); //사용하는 전용 무기
    St_Ayaka.nElem = 5; //사용하는 원소 코드
    St_Ayaka.nSort = 0; //사용하는 무기 코드
    St_Ayaka.nTimes = 2; //복각한 횟수
    St_Ayaka.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.0; //처음 출시일
    rerunVer[1][0] = 2.6;

    PrintInfo(St_Ayaka, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Shenhe
void ch_Shenhe()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Shenhe;
    strcpy(St_Shenhe.name, "신학"); //이름
    strcpy(St_Shenhe.sig, "식재"); //사용하는 전용 무기
    St_Shenhe.nElem = 5; //사용하는 원소 코드
    St_Shenhe.nSort = 4; //사용하는 무기 코드
    St_Shenhe.nTimes = 1; //복각한 횟수
    St_Shenhe.nLocal = 1; //출신 지역 코드

    rerunVer[0][0] = 2.4; //처음 출시일

    PrintInfo(St_Shenhe, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Mika
void ch_Mika()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Mika;
    strcpy(St_Mika.name, "미카"); //이름
    strcpy(St_Mika.sig, "(알 수 없음)"); //사용하는 전용 무기
    St_Mika.nElem = 5; //사용하는 원소 코드
    St_Mika.nSort = 4; //사용하는 무기 코드
    St_Mika.nTimes = 0; //복각한 횟수
    St_Mika.nLocal = 0; //출신 지역 코드

    rerunVer[0][0] = 0; //처음 출시일

    PrintInfo(St_Mika, rerunVer); //캐릭터 정보 출력하기
} //end of function 



/*ELECTRO*/
//Keqing
void ch_Keqing()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Keqing;
    strcpy(St_Keqing.name, "각청"); //이름
    strcpy(St_Keqing.sig, "(없음)"); //사용하는 전용 무기
    St_Keqing.nElem = 4; //사용하는 원소 코드
    St_Keqing.nSort = 0; //사용하는 무기 코드
    St_Keqing.nTimes = 1; //복각한 횟수
    St_Keqing.nLocal = 1; //출신 지역 코드

    rerunVer[0][0] = 1.3; //처음 출시일

    PrintInfo(St_Keqing, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Raiden_Shougun
void ch_Raiden()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Raiden;
    strcpy(St_Raiden.name, "라이덴 쇼군"); //이름
    strcpy(St_Raiden.sig, "예초의 번개"); //사용하는 전용 무기
    St_Raiden.nElem = 4; //사용하는 원소 코드
    St_Raiden.nSort = 4; //사용하는 무기 코드
    St_Raiden.nTimes = 2; //복각한 횟수
    St_Raiden.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.1; //처음 출시일
    rerunVer[1][0] = 2.5;

    PrintInfo(St_Raiden, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Yae_Miko
void ch_Miko()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Miko;
    strcpy(St_Miko.name, "야에 미코"); //이름
    strcpy(St_Miko.sig, "카구라의 진의"); //사용하는 전용 무기
    St_Miko.nElem = 4; //사용하는 원소 코드
    St_Miko.nSort = 1; //사용하는 무기 코드
    St_Miko.nTimes = 2; //복각한 횟수
    St_Miko.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.5; //처음 출시일
    rerunVer[1][0] = 3.2;

    PrintInfo(St_Miko, rerunVer); //캐릭터 정보 출력하기
} //end of function

//Cyno
void ch_Cyno()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Cyno;
    strcpy(St_Cyno.name, "사이노"); //이름
    strcpy(St_Cyno.sig, "적색 사막의 지팡이"); //사용하는 전용 무기
    St_Cyno.nElem = 4; //사용하는 원소 코드
    St_Cyno.nSort = 4; //사용하는 무기 코드
    St_Cyno.nTimes = 1; //복각한 횟수
    St_Cyno.nLocal = 3; //출신 지역 코드

    rerunVer[0][0] = 3.1; //처음 출시일

    PrintInfo(St_Cyno, rerunVer); //캐릭터 정보 출력하기
} //end of function 



/*HYDRO*/
//Chlide
void ch_Chlide()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Chlide;
    strcpy(St_Chlide.name, "타르탈리아"); //이름
    strcpy(St_Chlide.sig, "극지의 별"); //사용하는 전용 무기
    St_Chlide.nElem = 1; //사용하는 원소 코드
    St_Chlide.nSort = 3; //사용하는 무기 코드
    St_Chlide.nTimes = 4; //복각한 횟수
    St_Chlide.nLocal = 6; //출신 지역 코드

    rerunVer[0][0] = 1.1; //처음 출시일
    rerunVer[0][1] = 1.4;
    rerunVer[1][0] = 2.2;
    rerunVer[2][0] = 3.2;

    PrintInfo(St_Chlide, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Kokomi
void ch_Kokomi()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Kokomi;
    strcpy(St_Kokomi.name, "산고노미아 코코미"); //이름
    strcpy(St_Kokomi.sig, "불멸의 달빛"); //사용하는 전용 무기
    St_Kokomi.nElem = 1; //사용하는 원소 코드
    St_Kokomi.nSort = 1; //사용하는 무기 코드
    St_Kokomi.nTimes = 3; //복각한 횟수
    St_Kokomi.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.1; //처음 출시일
    rerunVer[1][0] = 2.5;
    rerunVer[2][0] = 3.0;

    PrintInfo(St_Kokomi, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Ayato
void ch_Ayato()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Ayato;
    strcpy(St_Ayato.name, "카미사토 아야토"); //이름
    strcpy(St_Ayato.sig, "하란 월백의 후츠"); //사용하는 전용 무기
    St_Ayato.nElem = 1; //사용하는 원소 코드
    St_Ayato.nSort = 0; //사용하는 무기 코드
    St_Ayato.nTimes = 4; //복각한 횟수
    St_Ayato.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.6; //처음 출시일

    PrintInfo(St_Ayato, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Yelan
void ch_Yelan()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Yelan;
    strcpy(St_Yelan.name, "야란"); //이름
    strcpy(St_Yelan.sig, "약수"); //사용하는 전용 무기
    St_Yelan.nElem = 1; //사용하는 원소 코드
    St_Yelan.nSort = 3; //사용하는 무기 코드
    St_Yelan.nTimes = 1; //복각한 횟수
    St_Yelan.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.7; //처음 출시일

    PrintInfo(St_Yelan, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Nilou
void ch_Nilou()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Nilou;
    strcpy(St_Nilou.name, "닐루"); //이름
    strcpy(St_Nilou.sig, "성현의 열쇠"); //사용하는 전용 무기
    St_Nilou.nElem = 1; //사용하는 원소 코드
    St_Nilou.nSort = 0; //사용하는 무기 코드
    St_Nilou.nTimes = 1; //복각한 횟수
    St_Nilou.nLocal = 4; //출신 지역 코드

    rerunVer[0][0] = 3.1; //처음 출시일

    PrintInfo(St_Nilou, rerunVer); //캐릭터 정보 출력하기
} //end of function 



/*GEO*/
//Zhongli
void ch_Zhongli()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Zhongli;
    strcpy(St_Zhongli.name, "종려"); //이름
    strcpy(St_Zhongli.sig, "관홍의 창"); //사용하는 전용 무기
    St_Zhongli.nElem = 6; //사용하는 원소 코드
    St_Zhongli.nSort = 4; //사용하는 무기 코드
    St_Zhongli.nTimes = 4; //복각한 횟수
    St_Zhongli.nLocal = 1; //출신 지역 코드

    rerunVer[0][0] = 1.1; //처음 출시일
    rerunVer[0][1] = 1.5;
    rerunVer[1][0] = 2.4;
    rerunVer[2][0] = 3.0;

    PrintInfo(St_Zhongli, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Albedo
void ch_Albedo()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Albedo;
    strcpy(St_Albedo.name, "알베도"); //이름
    strcpy(St_Albedo.sig, "(없음)"); //사용하는 전용 무기
    St_Albedo.nElem = 6; //사용하는 원소 코드
    St_Albedo.nSort = 0; //사용하는 무기 코드
    St_Albedo.nTimes = 3; //복각한 횟수
    St_Albedo.nLocal = 0; //출신 지역 코드

    rerunVer[0][0] = 1.2; //처음 출시일
    rerunVer[1][0] = 2.3;
    rerunVer[2][0] = 3.1;

    PrintInfo(St_Albedo, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Ito
void ch_Ito()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Ito;
    strcpy(St_Ito.name, "아라타키 이토"); //이름
    strcpy(St_Ito.sig, "쇄석의 붉은 뿔"); //사용하는 전용 무기
    St_Ito.nElem = 6; //사용하는 원소 코드
    St_Ito.nSort = 2; //사용하는 무기 코드
    St_Ito.nTimes = 2; //복각한 횟수
    St_Ito.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.3; //처음 출시일
    rerunVer[1][0] = 2.7;

    PrintInfo(St_Ito, rerunVer); //캐릭터 정보 출력하기
} //end of function 



/*PYRO*/
//Klee
void ch_Klee()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Klee;
    strcpy(St_Klee.name, "클레"); //이름
    strcpy(St_Klee.sig, "사풍 원서"); //사용하는 전용 무기
    St_Klee.nElem = 0; //사용하는 원소 코드
    St_Klee.nSort = 1; //사용하는 무기 코드
    St_Klee.nTimes = 3; //복각한 횟수
    St_Klee.nLocal = 0; //출신 지역 코드

    rerunVer[0][0] = 1.0; //처음 출시일
    rerunVer[0][1] = 1.6;
    rerunVer[1][0] = 2.8;

    PrintInfo(St_Klee, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Hutao
void ch_Hutao()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Hutao;
    strcpy(St_Hutao.name, "호두"); //이름
    strcpy(St_Hutao.sig, "호마의 지팡이"); //사용하는 전용 무기
    St_Hutao.nElem = 0; //사용하는 원소 코드
    St_Hutao.nSort = 4; //사용하는 무기 코드
    St_Hutao.nTimes = 2; //복각한 횟수
    St_Hutao.nLocal = 1; //출신 지역 코드

    rerunVer[0][0] = 1.0; //처음 출시일
    rerunVer[0][1] = 2.2;

    PrintInfo(St_Hutao, rerunVer); //캐릭터 정보 출력하기
} //end of function 

//Yoimia
void ch_Yoimiya()
{
    /*캐릭터 구조체 선언*/
    StInfo St_Yoimiya;
    strcpy(St_Yoimiya.name, "요이미아"); //이름
    strcpy(St_Yoimiya.sig, "비뢰의 고동"); //사용하는 전용 무기
    St_Yoimiya.nElem = 0; //사용하는 원소 코드
    St_Yoimiya.nSort = 3; //사용하는 무기 코드
    St_Yoimiya.nTimes = 3; //복각한 횟수
    St_Yoimiya.nLocal = 2; //출신 지역 코드

    rerunVer[0][0] = 2.0; //처음 출시일
    rerunVer[0][1] = 2.8;
    rerunVer[1][0] = 3.2;

    PrintInfo(St_Yoimiya, rerunVer); //캐릭터 정보 출력하기
} //end of function 