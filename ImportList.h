/*캐릭터의 복각표를 불러오는 헤더파일*/
#include <stdio.h>
#include <windows.h>
#pragma once

/*사용자 지정 헤더파일*/
#include "Design.h"

//함수 선언
void Main_ImportList();
void All_element();
void pyro();
void hydro();
void ameno();
void electro();
void dendro();
void cryo();
void geo();

/*출력 색상을 조절하는 함수 선언*/
void ColorSet(int color_number);

/*복각표를 불러올 때 실행하는 함수*/
void Main_ImportList()
{
    /*사용자가 원하는 리스트를 선택하는 반복문*/
    while (1)
    {
        //필요한 변수 선언
        int select = 0; //선택한 번호를 저장할 변수
        char str[100]; //사용자 입력을 받을 변수

        /*문구 출력*/
        printf("  계속하려면 아무 값이나 입력하세요...\n");
        printf("\n  복각표를 불러오시겠습니까? (종료는 end 입력) : ");
        scanf(" %s", str); //사용자 입력
        if (strncmp(str, "end", 3) == 0) //end가 입력되면 함수문 종료함.
            break; //프로그램 종료
        else //end 이외의 문자가 입력되면 다음 중 선택하게 함.
        {
            enum ColorKinds Colorkinds;
            printf("\n  [불러올 리스트의 번호를 선택하세요.]\n\n"); //보기
            //첫번째 보기
            printf("  0. 모든 캐릭터 불러오기\n");
            //두번째 보기
            printf("  1. "); //문구 출력
            ColorSet(red); //색상 빨강
            printf("불"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n"); //문구 출력
            //세번째 보기
            printf("  2. "); //문구 출력
            ColorSet(skyBlue); //색상 스카이블루
            printf("물"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n"); //문구 출력
            //네번째 보기
            printf("  3. "); //문구 출력
            ColorSet(brightGreen); //색상 밝은 초록
            printf("풀"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n"); //문구 출력
            //다섯번째 보기
            printf("  4. "); //문구 출력
            ColorSet(sky); //색상 하늘색
            printf("바람"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n");
            //여섯번째 보기
            printf("  5. "); //문구 출력
            ColorSet(blue); //색상 파랑색
            printf("번개"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n");
            //일곱번째 보기
            printf("  6. "); //문구 출력
            ColorSet(lightBlue); //색상 밝은 파랑색
            printf("얼음"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n");
            //여덟번째 보기
            printf("  7. "); //문구 출력
            ColorSet(orange); //색상 주황색
            printf("바위"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n"); //문구 출력
            printf("\n  [입력] : "); //문구 출력
            scanf_s(" %d", &select); //번호의 값 입력받기

            /*입력받은 값으로 다음 중 하나의 switch-case문을 실행함*/
            switch (select)
            {
            case 0: //모든 원소
            {
                printf("  모든 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                All_element(); //모든 원소의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 0:
            case 1: //불 원소
            {
                ColorSet(red); //색상 빨간색
                printf("\n  모든 불 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                pyro(); //불 원소 캐릭터의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 1:
            case 2: //물 원소
            {
                ColorSet(skyBlue); //색상 스카이블루
                printf("\n  모든 물 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                hydro(); //물 원소 캐릭터의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 2:
            case 3: //풀 원소
            {
                ColorSet(brightGreen); //색상 밝은 초록색
                printf("\n  모든 풀 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                dendro(); //풀 원소 캐릭터의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 3:
            case 4: //바람 원소
            {
                ColorSet(sky); //색상 하늘색
                printf("\n  모든 바람 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ameno(); //바람 원소 캐릭터의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 4:
            case 5: //번개 원소
            {
                ColorSet(blue); //색상 파란색
                printf("\n  모든 번개 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                electro(); //번개 원소 캐릭터의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 5:
            case 6: //얼음 원소
            {
                ColorSet(lightBlue); //색상 밝은 파란색
                printf("\n  모든 얼음 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                cryo(); //얼음 원소 캐릭터의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 6:
            case 7: //바위 원소
            {
                ColorSet(orange); //색상 주황색
                printf("\n  모든 바위 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                geo(); //바위 원소 캐릭터의 리스트를 만드는 함수 호출
                break; //switch문 탈출
            } //end of case 7:
            default: //0~7 이외의 값이 들어올 때 실행
            {
                printf("\n  해당하는 번호의 데이터를 불러올 수 없습니다.\n\n\n\n"); //문구 출력
                continue; //다시 while문 처음으로 돌아가서 선택하게 함.
            } //end of default
            } //end of swirch-case
            printf("  파일로 돌아가서 .txt파일을 확인한 후, .csv로 바꾸어 주세요.\n\n"); //문구 출력
            break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
        } //end of if-else
    } //end of while 
} //end of function "ImportList"

/*모든 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void All_element()
{
    FILE* fp = fopen("All_element.txt", "w"); //All_element 파일을 쓰기 모드(w)로 열기

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //파일에 문자열 저장
    //pyro
    fputs("Klee,,O,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,,O\n", fp); //클레
    fputs("Hutao,,,,,,,,,O,,,,,,,,,,,,O\n", fp); //호두
    fputs("Yoimiya,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,O,,,,,O\n", fp); //요이미아
    //hydro
    fputs("Chlide,,,O,,,,,,,,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,,O\n", fp); //타르탈리야
    fputs("Kokomi,,,,,,,,,,,,,,,,,,,O,,,,,,,,O,,,,,,,,O\n", fp); //산고노미야 코코미
    fputs("Ayato,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //카미사토 아야토
    fputs("Yelan,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //야란
    fputs("Nilou,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //닐루
    //ameno
    fputs("Venti,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,O,,,,,,,,O\n", fp); //벤티
    fputs("Xiao,,,,,,,O,,,,,,,,,,,,,,,,,O,,,,,,O\n", fp); //소
    fputs("Kazuha,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,O\n", fp); //카즈하
    fputs("Wanderer,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //방랑자
    //electro
    fputs("Keqing,,,,,,,,O\n", fp); //각청
    fputs("Raiden,,,,,,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //라이덴 쇼군
    fputs("Yae Miko,,,,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //야에 미코
    fputs("Cyno,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //사이노
    //dendro
    fputs("Tighnari,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //타이나리
    fputs("Nahida,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //나히다
    //cryo
    fputs("Ganyu,,,,,,O,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,O\n", fp); //감우
    fputs("Eula,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //유라
    fputs("Ayaka,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //카미사토 아야카
    fputs("Shenhe,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //신학
    //geo
    fputs("Zhongli,,,,O,,,,,,,,O,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //종려
    fputs("Abeldo,,,,,O,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,O\n", fp); //알베도
    fputs("Ito,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,O\n", fp); //이토

    fclose(fp); //파일 포인터 닫기 
} //end of fuction "All_element"

/*모든 불 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void pyro()
{
    FILE* fp = fopen("Pyro.txt", "w"); //Pyro 파일을 쓰기 모드(w)로 열기

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //개행
    //character
    fputs("Klee,,O,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,,O\n", fp); //클레
    fputs("Hutao,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //호두
    fputs("Yoimiya,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,O,,,,,O\n", fp); //요이미아

    fclose(fp); //파일 포인터 닫기
} //end of function "pyro"

/*모든 물 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void hydro()
{
    FILE* fp = fopen("Hydro.txt", "w"); ////Hydro 파일을 쓰기 모드(w)로 열기

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //개행
    //character
    fputs("Chlide,,,O,,,,,,,,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,,O\n", fp); //타르탈리아
    fputs("Kokomi,,,,,,,,,,,,,,,,,,,O,,,,,,,,O,,,,,,,,O\n", fp); //산고노미아 코코미
    fputs("Ayato,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //카미사토 아야토
    fputs("Yelan,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //야란
    fputs("Nilou,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //닐루

    fclose(fp); //파일 포인터 닫기
} //end of fuction "hydro"

/*모든 바람 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void ameno()
{
    FILE* fp = fopen("Ameno.txt", "w"); //Ameo 파일을 쓰기 모드(w)로 열기

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //개행
    //character
    fputs("Venti,O,,,,,,,,,O,,,,,,,,,,,,,,,,,,O,,,,,,,O\n", fp); //벤티
    fputs("Xiao,,,,,,,O,,,,,,,,,,,,,,,,,,O,,,,,,O\n", fp); //소
    fputs("Kazuha,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,,,O\n", fp); //카즈하
    fputs("Wanderer,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //방랑자

    fclose(fp); //파일 포인터 닫기
} //end of function "ameno"

/*모든 번개 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void electro()
{
    FILE* fp = fopen("Elelctro.txt", "w"); //Electro 파일을 쓰기 모드(w)로 열기

    //verso=ion
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //개행
    //character
    fputs("Keqing,,,,,,,,O\n", fp); //각청
    fputs("Raiden,,,,,,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //라이덴 쇼군
    fputs("Yae Miko,,,,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //야에 미코
    fputs("Cyno,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //사이노

    fclose(fp); //파일 포인터 닫기
} //end of funtction "electro"

/*모든 풀 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void dendro()
{
    FILE* fp = fopen("Dendro.txt", "w"); //Dendro 파일을 쓰기 모드(w)로 열기

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //개행
    //chracter
    fputs("Tighnari,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //타이나리
    fputs("Nahida,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,O\n", fp); //나히다

    fclose(fp); //파일 포인터 닫기
} //end of fuction "dendro"

/*모든 얼음 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void cryo()
{
    FILE* fp = fopen("Cryo.txt", "w"); //Cryo 파일을 쓰기 모드(w)로 열기

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //개행
    //chracter
    fputs("Ganyu,,,,,,O,,,,,,,,,,,,,,,,,,,O,,,,,,,,,,O\n", fp); //감우
    fputs("Eula,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //유라
    fputs("Ayaka,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,O\n", fp); //카미사토 아야카
    fputs("Shenhe,,,,,,,,,,,,,,,,,,,,,,,,O", fp); //신학

    fclose(fp); //파일 포인터 닫기
} //end of function "cryo"

/*모든 바위 원소의 캐릭터의 복각 리스트를 만드는 함수*/
static void geo()
{
    FILE* fp = fopen("Geo.txt", "w"); //Geo 파일을 쓰기 모드(w)로 열기

    //version
    fputs("chracter, 1.0 ver,,1.1 ver,,1.2 ver,,1.3 ver,,,1.4 ver,,1.5 ver,,1.6 ver,,2.0 ver,,2.1 ver,,2.2 ver,,2.3 ver,,2.4 ver,,2.5 ver,,2.6 ver,,2.7 ver,,2.8 ver,,3.0 ver,,3.1 ver,,3.2 ver,,3.3 ver,,", fp); //버전
    fputs("\n", fp); //개행
    //chracter
    fputs("Zhongli,,,,O,,,,,,,,O,,,,,,,,,,,,,O,,,,,,,,,O\n", fp); //종려
    fputs("Abeldo,,,,,O,,,,,,,,,,,,,,,,,O,,,,,,,,,,,,,,,O\n", fp); //알베도
    fputs("Ito,,,,,,,,,,,,,,,,,,,,,,,O,,,,,,,,O\n", fp); //이토

    fclose(fp); //파일 포인터 닫기
} //end of function "geo"