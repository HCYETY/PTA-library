/*
在老电影“007之生死关头”（Live and Let Die）中有一个情节，007被毒贩抓到一个鳄鱼池中心的小岛上，他用了一种极为大胆的方法逃脱 —— 直接踩着池子里一系列鳄鱼的大脑袋跳上岸去！（据说当年替身演员被最后一条鳄鱼咬住了脚，幸好穿的是特别加厚的靴子才逃过一劫。）
设鳄鱼池是长宽为100米的方形，中心坐标为 (0, 0)，且东北角坐标为 (50, 50)。池心岛是以 (0, 0) 为圆心、直径15米的圆。给定池中分布的鳄鱼的坐标、以及007一次能跳跃的最大距离，你需要告诉他是否有可能逃出生天。

输入格式：
首先第一行给出两个正整数：鳄鱼数量 N（≤100）和007一次能跳跃的最大距离 D。随后 N 行，每行给出一条鳄鱼的 (x,y) 坐标。注意：不会有两条鳄鱼待在同一个点上。

输出格式：
如果007有可能逃脱，就在一行中输出"Yes"，否则输出"No"。

输入样例 1：
14 20
25 -15
-25 28
8 49
29 15
-35 -2
5 28
27 -29
-8 -28
-20 -35
-25 -20
-13 29
-30 15
-35 40
12 12
输出样例 1：
Yes

输入样例 2：
4 13
-12 12
12 12
-12 -12
12 -12
输出样例 2：
No
*/


#include <bits/stdc++.h>
using namespace std;

struct node {
    int x,y; // 分别表示鳄鱼的横坐标和纵坐标
}crocodile[110];

int vis[110];
int flag = 0;
int n, jump_distance;

int keyi(int x) { //如果可以成功到达岸边
    if( (crocodile[x].x - jump_distance <= -50) || (crocodile[x].x + jump_distance >= 50) || (crocodile[x].y - jump_distance <= -50) || (crocodile[x].y + jump_distance >= 50) )
        return 1;
    return 0;
}

int first(int x) { //第一步
    int cro1 = pow(crocodile[x].x, 2);
    int cro2 = pow(crocodile[x].y, 2);
    int r = pow((jump_distance + 7.5), 2);
//    int r = (jump_distance + 7.5) * (jump_distance + 7.5);
    if(cro1 + cro2 <= r)
        return 1;
    return 0;
}

int jump(int x,int y) { //能否从一个鳄鱼头跳到另一个鳄鱼头
    int cro1 = pow(crocodile[x].x - crocodile[y].x, 2);
    int cro2 = pow(crocodile[x].y - crocodile[y].y, 2);
    int r = pow(jump_distance, 2);
//    int r = jump_distance * jump_distance;
    if(cro1 + cro2 <= r)
        return 1;
    return 0;
}

int dfs(int t) {
    vis[t] = 1;
    if(keyi(t) == 1)
        flag = 1;
    for(int i = 0; i < n; i++)
        if(!vis[i] && jump(t,i))
            flag = dfs(i);
    return flag;
}

int main()
{
    memset(vis,0,sizeof(vis));
    scanf("%d %d", &n, &jump_distance);
    for(int i = 0; i < n; i++)
        scanf("%d %d", &crocodile[i].x, &crocodile[i].y);
    if(jump_distance >= 42.5)
        printf("Yes\n");
    else {
        for(int i = 0; i < n; i++)
            if(!vis[i] && first(i))
                dfs(i);
        if(flag == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
