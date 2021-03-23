乒乓球早期曾采用21分制，经过改革后现在的赛制主流采用11分制，现在需要对多年比赛的统计数据进行一些分析。 具体通过以下方式进行分析，首先将比赛每个球的胜负列成一张表，然后分别计算在11分制和21分制下，双方的比赛结果（截至记录末尾）。 比如现在有这么一份记录，（其中W表示我国队员获得一分，L表示外国对手获得一分）： WWWWWWWWWWWWWWWWWWWWWWLW。
在11分制下，此时比赛的结果是我国队员第一局11比0获胜，第二局11比0获胜，正在进行第三局，当前比分1比1。而在21分制下，此时比赛结果是我国队员第一局21比0获胜，正在进行第二局，比分2比1。如果一局比赛刚开始，则此时比分为0比0。 你的程序就是要对于一系列比赛信息的输入（WL形式），输出正确的结果。

输入格式:
每个输入文件包含若干行字符串（每行至多20个字母），字符串有大写的W、L和E组成。其中E表示比赛信息结束，程序应该忽略E之后的所有内容。

输出格式:
输出由两部分组成，每部分有若干行，每一行对应一局比赛的比分（按比赛信息输入顺序）。其中第一部分是11分制下的结果，第二部分是21分制下的结果，两部分之间由一个空行分隔。

输入样例:
在这里给出一组输入。例如：

WWWWWWWWWWWWWWWWWWWW
WWLWE
输出样例:
在这里给出相应的输出。例如：

11:0
11:0
1:1

21:0
2:1

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//解析wls，打印比赛得分
//wls里头是得分记录，max_num是每局得分上限，取11或21
void handle_wls(string wls, int max_num);

int main()
{
	string wls;
	string line;
	//1. 读入记录
	while(cin>>line)
	{
		wls += line;
	}
	//cout<<wls<<endl;

	handle_wls(wls, 11);
	cout<<endl;
	handle_wls(wls, 21);
}

void handle_wls(string wls, int max_num)
{
	int win_num = 0;
	int lose_num = 0;
	for(int i=0; wls[i]!='E'; i++)
	{
		if (wls[i] == 'W')
			win_num += 1;
		else
			lose_num += 1;
		//11分一局，打印结果
		if ((win_num >= max_num && win_num - lose_num >= 2)
		      || (lose_num >= max_num && lose_num - win_num >= 2))

		{
			cout<<win_num<<":"<<lose_num<<endl;
			win_num = 0;
			lose_num = 0;
		}
	}
	//打印最后一局，即使0:0
	cout<<win_num<<":"<<lose_num<<endl;
}
