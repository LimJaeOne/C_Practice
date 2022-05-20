//전자공학과 219125138 임재원 B반 수요일 과제(2)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int s= 12;
	int m;
	int c;
	srand(time(NULL));

	printf("현재 스틱의 개수:%d개\n", s);
	
	while (1) //게임이 끝날 때까지 프로그램이 끝나면 안되기 때문에 반복문 사용 
	{
		printf("몇개의 스틱을 가져가시겠습니까?");
		scanf("%d", &m); 

		if (m < 1 || m>3) //게임의 조건에 가져갈 수 있는 스틱의 개수가 정해져 있기 때문에 예외 처리
		{
			printf("스틱은 1개 이상 3개 이하로 가져갈 수 있습니다.\n\n");
			continue; 
		}

		s -= m;

		if (s == 1) 
		{
			printf("현재 스틱의 개수:%d\n\n", s);
			printf("컴퓨터가 마지막 스틱을 가져가야 합니다.\n당신의 승리입니다.");
			return 0; //승패가 결정되었기 때문에 프로그램 종료를 위해 return 사용
		}		
		if (s == 0) 
		{
			printf("현재 스틱의 개수:%d\n\n", s);
			printf("당신이 마지막 스틱을 가져갔습니다.\n당신의 패배입니다.");
			return 0; //승패가 결정되었기 때문에 프로그램 종료를 위해 return 사용
		}
		if (s < 0) //남은 스틱의 개수보다 더 많은 스틱을 가져간 것이기 때문에 예외 처리
		{
			printf("가져갈 수 있는 스틱의 개수를 초과했습니다.\n\n");
			s += m; //뺀 수를 더하지 않으면 s값이 빠진 채로 올라가 s-=m;을 실행하기 때문
			continue; //스틱을 다시 가져가야 하기 때문에 반복문의 처음으로 돌아가가야 함
		}

		while (1) // 이 while이 없으면 맨 위로 올라가서 반복되기 때문
		{
			c = rand() % 3 + 1;
			printf("**컴퓨터는 %d의 스틱을 가져갔습니다.\n", c);

			s -= c;

			if (s < 0) 
			{
				printf("가져갈 수 있는 스틱의 개수를 초과했습니다.\n\n");
				s += c; //뺀 수를 더하지 않으면 s값이 빠진 채로  현재 스틱의 개수가 나오기 때문
				printf("현재 스틱의 개수:%d\n", s);
				continue; //스틱을 다시 가져가야 하기 때문에 반복문의 처음으로 돌아가가야 함
			}

			printf("현재 스틱의 개수:%d개\n\n", s);

			if (s == 1) 
			{
				printf("당신이 마지막 스틱을 가져가야 합니다.\n당신의 패배입니다.");
				return 0; //승패가 결정되었기 때문에 프로그램 종료를 위해 return 사용
			}
			if (s == 0) 
			{
				printf("컴퓨터가 마지막 스틱을 가져갔습니다.\n당신의 승리입니다.");
				return; //승패가 결정되었기 때문에 프로그램 종료를 위해 return 사용
			}break;//48번째 줄에 있는 반복문을 벗어나기 위해 사용
		} 
	}
	return 0;
}