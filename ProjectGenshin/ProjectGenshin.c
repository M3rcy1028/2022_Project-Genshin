#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning(disable : 4996)

/*bgm 관련*/
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment (lib, "winmm.lib")
#define bgm

/*사용자지정 헤더파일*/
#include "ImportList.h"
#include "ChracterInfo.h"
#include "Design.h"

/*
    포인터 (Y)
    함수 (Y)
    배열 (Y)
    문자처리 (Y)
    문자열처리 (Y)
    구조체 배열 
    중첩 구조체
    구조체와 포인터 (Y)
    함수 공용체와 열거형 (Y)
    전처리 (Y)
    파일 입출력 (Y)
    텍스트 파일 (Y)
    이진 파일
    순차 선형 리스트
    연결 리스트
    스택큐
*/

/*캐릭터의 정보를 찾는 함수 선언*/
void Main_SelectCh();
void ch_ameno();
void ch_cryo();
void ch_dendro();
void ch_electro();
void ch_geo();
void ch_hydro();
void ch_pyro();

/*출력 색상을 조절하는 함수 선언*/
void ColorSet(int color_number);
/*Console Windows창 Title을 변환하는 함수 선언*/
void TitleChange();
/*콘솔창 크기를 변경하는 함수*/
void SizeChange();


/*프로그램 실행*/
int main()
{

    void TitleChange(); //Console Windows창 Title 변환

    PlaySound(TEXT("bgm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); // wave 음악 재생 (배경음악)

    printf("  프로그램이 성공적으로 실행되었습니다\n"); //첫 실행 메세지
    int repeat = 0; //프로그램 반복 횟수
    
    while (repeat <= 10) //총 10번까지 반복
    {
        int select = 0; //실행할 기능의 번호
        char* str = (char*)malloc(sizeof(char)*100); //입력값을 받을 변수 메모리 할당

        printf("  -----------------------------------------------------------------\n"); //문구 출력
        printf("  계속하려면 아무값이나 입력하세요...(종료는 end 입력) "); //문구 출력
        scanf(" %s", str); //사용자 입력
        if (strncmp(str, "end", 3) == 0) //end 가 입력되면 함수문 종료함.
            break; //반복문 탈출
        else //end 이외의 문자가 입력되면 else문 실행
        {
            printf("\n  원하는 실행을 선택하세요\n");  //문구 출력
            printf("  1. 캐릭터 복각표 불러오기\n"); //문구 출력
            printf("  2. 캐릭터 정보 찾기\n"); //문구 출력
            printf("  [입력] : "); //문구 출력
            scanf(" %d", &select); //번호 입력받기
            switch (select)
            {
            case 1: //복각표 리스트 불러오기
            {
                printf("\n  캐릭터의 리스트를 불러오는 중입니다...\n"); //문구 출력
                Main_ImportList(); //"ImportList.h"의 함수 실행
                repeat++; //실행 반복 횟수 +1
                break; //case문 탈출
            } //end of case 1
            case 2: //캐릭터 정보 찾기
            {
                printf("\n  캐릭터의 정보를 불러오는 중입니다...\n"); //문구 출력
                Main_SelectCh();
                repeat++; //실행 반복 횟수 +1
                break; //case문 탈출
            } //end of case 2
            default:  //다른 값이 들어왔을 때
            {
                printf("\n  원하는 번호의 기능을 찾을 수 없습니다...\n"); //문구 출력
                continue;
            } //end of defualt
            } //end of switch-case
        } //end of if-else statement
        printf("\n\n"); //개행
        free(str); //메모리 해제
    } //end of while statement
    if (repeat >= 10)
    {
        printf("\n\n  [[프로그램을 너무 많이 실행하였습니다.");
    }
    else
    {
        printf("\n\n  [[프로그램을 종료합니다...]]\n\n");
    }
    return 0;
} //end of main


/*캐릭터의 정보를 선택하는 함수*/    
void Main_SelectCh()
{
    while (1) //while statement start
    {
        int select = 0; //실행할 기능의 번호
        char str[100]; //입력값을 받을 변수

        printf("  캐릭터의 정보를 찾으시겠습니까? (종료는 end 입력) : "); //문구 출력
        scanf(" %s", str); //사용자 입력
        if (strncmp(str, "end", 3) == 0) //end가 입력되면 함수문 종료함.
            break;
        else //end 이외의 문자가 입력되면 다음 중 선택하게 함.
        {
            enum ColorKinds Colorkinds; //색상 열거형 불러오기
            printf("\n  [캐릭터의 원소를 선택하세요.]\n\n"); //문구 출력
            //첫번째 보기
            printf("  1. "); //문구 출력
            ColorSet(red); //색상 빨강
            printf("불"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n"); //문구 출력
            //두번째 보기
            printf("  2. "); //문구 출력
            ColorSet(skyBlue); //색상 스카이블루
            printf("물"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n"); //문구 출력
            //세번째 보기
            printf("  3. "); //문구 출력
            ColorSet(brightGreen); //색상 밝은 초록
            printf("풀"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n"); //문구 출력
            //네번째 보기
            printf("  4. "); //문구 출력
            ColorSet(sky); //색상 하늘색
            printf("바람"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n");
            //다섯번째 보기
            printf("  5. "); //문구 출력
            ColorSet(blue); //색상 파랑색
            printf("번개"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n");
            //여섯번째 보기
            printf("  6. "); //문구 출력
            ColorSet(lightBlue); //색상 밝은 파랑색
            printf("얼음"); //문구 출력
            ColorSet(brightWhite); //색상 흰색
            printf(" 원소 캐릭터 불러오기\n");
            //일곱번째 보기
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
            case 1: //불 원소
            {
                ColorSet(red); //색상 빨간색
                printf("\n  불 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ch_pyro(); //불 원소 캐릭터 리스트를 불러올 함수 호출
                break; //case문 탈출
            } //end of case 1:
            case 2: //물 원소
            {
                ColorSet(skyBlue); //색상 스카이블루
                printf("\n  물 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ch_hydro(); //물 원소 캐릭터 리스트를 불러올 함수 호출
                break; //case문 탈출
            } //end of case 2:
            case 3: //풀 원소
            {
                ColorSet(brightGreen); //색상 밝은 초록색
                printf("\n  풀 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ch_dendro(); //풀 원소 캐릭터 리스트를 불러올 함수 호출
                break; //case문 탈출
            } //end of case 3:
            case 4: //바람 원소
            {
                ColorSet(sky); //색상 하늘색
                printf("\n  바람 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ch_ameno(); //바람 원소 캐릭터 리스트를 불러올 함수 호출
                break; //case문 탈출
            } //end of case 4:
            case 5: //번개 원소
            {
                ColorSet(blue); //색상 파란색
                printf("\n  번개 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ch_electro(); //번개 원소 캐릭터 리스트를 불러올 함수 호출
                break; //case문 탈출
            } //end of case 5:
            case 6: //얼음 원소
            {
                ColorSet(lightBlue); //색상 밝은 파란색
                printf("\n  얼음 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ch_cryo(); //얼음 원소 캐릭터 리스트를 불러올 함수 호출
                break; //case문 탈출
            } //end of case 6:
            case 7: //바위 원소
            {
                ColorSet(orange); //색상 주황색
                printf("\n  바위 원소 캐릭터를 불러오는 중입니다...\n"); //문구 출력
                ColorSet(white); //색상 흰색
                ch_geo(); //바위 원소 캐릭터 리스트를 불러올 함수 호출
                break; //case문 탈출
            } //end of case 7:
            default: //0~7 이외의 값이 들어올 때 실행
            {
                printf("\n  해당하는 번호의 데이터를 불러올 수 없습니다.\n\n\n\n"); //문구 출력
                continue; //다시 while문 처음으로 돌아가서 선택하게 함.
            } //end of default
            } //end of swirch-case
            break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
        } //end of if-else
    } //end of while 
} //end of function "Main_SelectCh"

/*Ameno(바람)*/
void ch_ameno()
{
    while (1)
    {
        int select; //필요한 변수 선언
        ColorSet(brightWhite); //색상 흰색
        printf("\n  1. 벤티\n  2. 소\n  3. 카에데하라 카즈하\n  4. 방랑자\n"); //보기
        printf("\n  [정보를 불러올 캐릭터의 번호를 입력하세요...]"); //문구 출력
        printf("\n  [입력] : "); //문구 출력
        scanf_s(" %d", &select); //사용자 입력
        printf("\n\n"); //개행
        ColorSet(white); //색상 흰색

        switch (select)
        {
        case 1: //Venti
        {
            ch_Venti(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 1
        case 2: //Xiao
        {
            ch_Xiao(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 2
        case 3: //Kaedehara Kazuha
        {
            ch_Kazuha(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 3
        case 4:
        {
            ch_Wanderer(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 4
        default: //이외의 값이 들어왔을 때
        {
            printf("선택한 캐릭터의 정보를 불러올 수 없습니다.\n"); //문구 출력
            continue; //while문 다시 실행
        } //end of default:
        } //end of switch-case
        break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
    } //end of while statement
} //end of function "ch_ameno"

/*cryo(얼음)*/
void ch_cryo()
{
    while (1)
    {
        int select; //필요한 변수 선언
        ColorSet(brightWhite); //색상 흰색
        printf("\n  1. 감우\n  2. 유라\n  3. 카미사토 아야카\n  4. 신학\n  5. 미카\n"); //보기
        printf("\n  [정보를 불러올 캐릭터의 번호를 입력하세요...]"); //문구 출력
        printf("\n  [입력] : "); //문구 출력
        scanf_s(" %d", &select); //사용자 입력
        printf("\n\n"); //개행
        ColorSet(white); //색상 흰색

        switch (select)
        {
        case 1: //Ganyu
        {
            ch_Ganyu(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 1
        case 2: //Eula
        {
            ch_Eula(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 2
        case 3: //Ayaka
        {
            ch_Ayaka(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 3
        case 4: //Shene
        {
            ch_Shenhe(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 4
        case 5: //Mika
        {
            ch_Mika(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 5
        default: //이외의 값이 들어왔을 때
        {
            printf("선택한 캐릭터의 정보를 불러올 수 없습니다.\n"); //문구 출력
            continue; //while문 다시 실행
        } //end of default
        } //end of switch-case
        break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
    } //end of while statement
} //end of function "ch_cryo"

/*dendro(바람)*/
void ch_dendro()
{
    while (1)
    {
        int select; //필요한 변수 선언
        ColorSet(brightWhite); //색상 흰색
        printf("\n  1. 타이나리\n  2. 나히다\n"); //보기
        printf("\n  [정보를 불러올 캐릭터의 번호를 입력하세요...]"); //문구 출력
        printf("\n  [입력] : "); //문구 출력
        scanf_s(" %d", &select); //사용자 입력
        printf("\n\n"); //개행
        ColorSet(white); //색상 흰색

        switch (select)
        {
        case 1: //Tighnari
        {
            ch_Tighnari(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 1
        case 2: //Nahida
        {
            ch_Nahida(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 2
        default: //이외의 값이 들어왔을 때
        {
            printf("선택한 캐릭터의 정보를 불러올 수 없습니다.\n"); //문구 출력
            continue; //while문 다시 실행
        } //end of default
        } //end of switch-case
        break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
    } //end of while statement
} //end of function "ch_dendro"

/*electro(번개)*/
void ch_electro()
{
    while (1)
    {
        int select; //필요한 변수 선언
        ColorSet(brightWhite); //색상 흰색
        printf("\n  1. 각청\n  2. 라이덴 쇼군\n  3. 아에 미코\n  4. 사이노\n"); //보기
        printf("\n  [정보를 불러올 캐릭터의 번호를 입력하세요...]"); //문구 출력
        printf("\n  [입력] : "); //문구 출력
        scanf_s(" %d", &select); //사용자 입력
        printf("\n\n"); //개행
        ColorSet(white); //색상 흰색

        switch (select)
        {
        case 1: //Keqing
        {
            ch_Keqing(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 1:
        case 2: //Raiden_Shougun
        {
            ch_Raiden(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 2:
        case 3: //Yae_Miko
        {
            ch_Miko(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 3:
        case 4: //Cyno
        {
            ch_Cyno(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 4:
        default: //이외의 값이 들어왔을 때
        {
            printf("선택한 캐릭터의 정보를 불러올 수 없습니다.\n"); //문구 출력
            continue; //while문 다시 실행
        } //end of default
        } //end of switch-case
        break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
    } //end of while statement
} //end of function "ch_electro"

/*geo(바위)*/
void ch_geo()
{
    while (1)
    {
        int select; //필요한 변수 선언
        ColorSet(brightWhite); //색상 흰색
        printf("\n  1. 종려\n  2. 알베도\n  3. 아라타키 이토\n"); //보기
        printf("\n  [정보를 불러올 캐릭터의 번호를 입력하세요...]"); //문구 출력
        printf("\n  [입력] : "); //문구 출력
        scanf_s(" %d", &select); //사용자 입력
        printf("\n\n"); //개행
        ColorSet(white); //새상 흰색

        switch (select)
        {
        case 1: //Zhongli
        {
            ch_Zhongli(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 1:
        case 2: //Albedo
        {
            ch_Albedo(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 2:
        case 3: //Ito
        {
            ch_Ito(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 3:
        default: //이외의 값이 들어왔을 때
        {
            printf("선택한 캐릭터의 정보를 불러올 수 없습니다.\n"); //문구 출력
            continue; //while문 다시 실행
        } //end of default:
        } //end of switch-case
        break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
    } //end of while
} //end of function "ch_geo"

/*Hydro(물)*/
void ch_hydro()
{
    while (1)
    {
        int select; //필요한 변수 선언
        ColorSet(brightWhite); //색상 흰색
        printf("\n  1. 타르탈리아\n  2. 산고노미아 코코미\n  3. 카미사토 아야토\n  4. 야란\n  5. 닐루\n"); //보기
        printf("\n  [정보를 불러올 캐릭터의 번호를 입력하세요...]"); //문구 출력
        printf("\n  [입력] : ");  //문구 출력
        scanf_s(" %d", &select); //사용자 입력
        printf("\n\n"); //개행
        ColorSet(white); //색상 흰색

        switch (select)
        {
        case 1: //Childe
        {
            ch_Chlide(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 1:
        case 2: //Kokomi
        {
            ch_Kokomi(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 2:
        case 3: //Ayato
        {
            ch_Ayato(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 3:
        case 4: //Yelan
        {
            ch_Yelan(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 4:
        case 5: //Nilou
        {
            ch_Nilou(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 5:
        default: //이외의 값이 들어왔을 때
        {
            printf("선택한 캐릭터의 정보를 불러올 수 없습니다.\n"); //문구 출력
            continue; //while문 다시 실행
        } //end of default:
        } //end of switch-case
        break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
    } //end of while statement
} //end of function "ch_hydro"

/*Pyro(불)*/
void ch_pyro()
{
    while (1)
    {
        ColorSet(brightWhite); //색상 흰색
        int select; //필요한 변수 선언
        printf("\n  1. 클레\n  2. 호두\n  3. 요이미아\n"); //보기
        printf("\n  [정보를 불러올 캐릭터의 번호를 입력하세요...]"); //문구 출력
        printf("\n  [입력] : "); //문구 출력
        scanf_s(" %d", &select); //사용자 입력
        printf("\n\n"); //개행
        ColorSet(white); //색상 흰색

        switch (select)
        {
        case 1: //Klee
        {
            ch_Klee(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 1:
        case 2: //Hutao
        {
            ch_Hutao(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 2:
        case 3: //Yoimiya
        {
            ch_Yoimiya(); //"ChacaterInfo.h" 헤더 파일의 함수 불러오기
            break; //case문 탈출
        } //end of case 3:
        default: //이외의 값이 들어왔을 때
        {
            printf("선택한 캐릭터의 정보를 불러올 수 없습니다.\n"); //문구 출력
            continue; //while문 다시 실행
        } //end of default:
        } //end of switch-case
        break; //switch-case문이 끝나면 결과값을 반환하고 while문 종료
    } //end of while statement
} //end of function "ch_pyro"