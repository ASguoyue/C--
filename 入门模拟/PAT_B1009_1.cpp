//˵����
#include <string.h>
#include <stdio.h>
//��̵�˼·
//����һλ������洢�ַ�����Ϣ
//���տո�Ļ��֣���ÿ�����ʴ�ŵ���ά������
//�����з������ÿ�еĵ���

int main()
{
    char str[90][90];
    int num = 0;
    char s[100];
    gets(s);
    int r = 0, l = 0;
    int len = strlen(s);

    //�����ʷ��뵽��ά������
    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
        {
            str[r][l++] = s[i];
        }
        else
        {
            str[r][l] = '\0'; //ÿ���ַ��������и��ո�
            r++;
            l = 0;
        }
    }
    for (int j = r; j >= 0; j--)
    {
        printf("%s", str[j]);
        if (j > 0)
        {
            printf(" ");
        }
    }

    return 0;
}
