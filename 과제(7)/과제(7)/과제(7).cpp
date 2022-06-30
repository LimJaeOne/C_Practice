//���ڰ��а� 219125138 ����� C��� �����Ϲ� ���� (7)
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
	printf("1. ���� ��ȣ�� å ã��\n");
	printf("2. ���� �̸����� å ã��\n");
	printf("3. �������� å ã��\n");
	printf("4. ���ο� å �߰�\n");
	printf("5. �������� ������ ������ �� ǥ��\n");
	printf("==================================\n");

	while (1)
	{
		int ch;
		printf("�޴� �߿��� �ϳ��� �����ϼ���:");
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
	printf("���� ��ȣ�� �Է��ϼ���:");
	scanf("%d", &id);
	for (i = 0; i < SIZE; i++)
	{
		if (s[i].book_id == id)
		{
			printf("%d %s %s\n", s[i].book_id, s[i].author, s[i].title);
			return;
		}
	}
	printf("��ϵ��� ���� å�Դϴ�.\n");
}

void author()
{
	printf("���ڸ� �Է��ϼ���:");
	scanf("%s", _author);
	for (i = 0; i < SIZE; i++)
	{
		if (strcmp(s[i].author, _author) == 0)
		{
			printf("%d %s %s\n", s[i].book_id, s[i].author, s[i].title);
			return;
		}
	}
	printf("��ϵ��� ���� å�Դϴ�.\n");
}

void title()
{
	printf("������ �Է��ϼ���:");
	scanf("%s", _title);
	for (i = 0; i < SIZE; i++)
	{
		if (strcmp(s[i].title, _title) == 0)
		{
			printf("%d %s %s\n", s[i].book_id, s[i].author, s[i].title);
			return;
		}
	}
	printf("��ϵ��� ���� å�Դϴ�.\n");
}

void add(int n)
{
	printf("���� ��ȣ �Է�:");
	scanf("%d", &s[n].book_id);
	printf("���� �Է�:");
	scanf("%s", s[n].author);
	printf("���� �Է�:");
	scanf("%s", s[n].title);
}