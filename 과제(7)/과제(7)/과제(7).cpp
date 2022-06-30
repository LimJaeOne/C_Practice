//전자공학과 219125138 임재원 C언어 수요일반 과제 (7)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int i = 0;
int count = 0;

int id;
char _author[20];
char _title[20];

struct library {
	int book_id;
	char author[20];
	char title[20];
};

struct library s[SIZE];

void book_id();
void author();
void title();
void add(int n);

int main(void)
{
	printf("==================================\n");
	printf("1. 도서 번호로 책 찾기\n");
	printf("2. 저자 이름으로 책 찾기\n");
	printf("3. 제목으로 책 찾기\n");
	printf("4. 새로운 책 추가\n");
	printf("5. 도서관이 소장한 도서의 수 표시\n");
	printf("==================================\n");

	while (1)
	{
		int ch;
		printf("메뉴 중에서 하나를 선택하세요:");
		scanf("%d", &ch);

		if (ch == 1)
		{
			book_id();
		}
		if (ch == 2)
		{
			author();
		}
		if (ch == 3)
		{
			title();
		}
		if (ch == 4)
		{
			count++;
			add(count);
		}
		if (ch == 5)
		{
			printf("%d\n", count);
		}
	}
}

void book_id()
{
	printf("도서 번호를 입력하세요:");
	scanf("%d", &id);
	for (i = 0; i < SIZE; i++)
	{
		if (s[i].book_id == id)
		{
			printf("%d %s %s\n", s[i].book_id, s[i].author, s[i].title);
			return;
		}
	}
	printf("등록되지 않은 책입니다.\n");
}

void author()
{
	printf("저자를 입력하세요:");
	scanf("%s", _author);
	for (i = 0; i < SIZE; i++)
	{
		if (strcmp(s[i].author, _author) == 0)
		{
			printf("%d %s %s\n", s[i].book_id, s[i].author, s[i].title);
			return;
		}
	}
	printf("등록되지 않은 책입니다.\n");
}

void title()
{
	printf("제목을 입력하세요:");
	scanf("%s", _title);
	for (i = 0; i < SIZE; i++)
	{
		if (strcmp(s[i].title, _title) == 0)
		{
			printf("%d %s %s\n", s[i].book_id, s[i].author, s[i].title);
			return;
		}
	}
	printf("등록되지 않은 책입니다.\n");
}

void add(int n)
{
	printf("도서 번호 입력:");
	scanf("%d", &s[n].book_id);
	printf("저자 입력:");
	scanf("%s", s[n].author);
	printf("제목 입력:");
	scanf("%s", s[n].title);
}