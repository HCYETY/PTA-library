/*
题目描述：
给定一个有 n 个单词的词典 。
有 q 次询问，每次询问给定一个单词，询问有多少个单词可以通过交换相邻字母（也可以不交换）变成给定的单词  。

输入描述:
第一行一个整数 n 。
接下来 n 行，每行一个单词 。
第 n+2 行一个整数 q 。
接下来 q 行每行一个单词，表示询问 。
输出描述:
共 q 行，每行一个整数，表示有多少个所求单词 。

输入：
4
aa
bb
ab
ba
2
aa
ba
输出：
1
2
备注:
n，q <= 10^4，单词长度 <= 2，单词中的字母全为小写。
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, q;
    int i, j, count;
    char word[10005][5], ask[10005][5];
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%s\n", &word[i]);
    }
    scanf("%d\n", &q);
    for(j=0; j<q; j++) {
        scanf("%s\n", &ask[j]);
    }
     for(i=0;i<q;i++)
    {
        count = 0;
        for(j=0;j<n;j++)
        {
            if((word[j][0] == ask[i][0] && word[j][1] == ask[i][1]) || (word[j][0] == ask[i][1] && word[j][1] == ask[i][0]))
                count++;
        }
        printf("%d\n",count);
    }
}
