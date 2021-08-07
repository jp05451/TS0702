#include"Atoi.h"

Atoi::Atoi()
{
				beTrans = "";
}
Atoi::Atoi(string s)
{
				beTrans = s;
}
void Atoi::SetString(string s)
{
				beTrans = s;
}
const string Atoi::GetString()
{
				//cout << beTrans << " ";
				return beTrans;
}
int Atoi::Length()
{
				int len= beTrans.length();
				if (beTrans[0] == '-')
								len--;
				return len;
}
bool Atoi::IsDigital()
{
				int i;
				if (beTrans[0] == '-')
								i = 1;
				else
								i = 0;
				for (i; i < beTrans.length(); i++)
				{
								if (!isdigit(beTrans[i]))
												return 0;
				}
				return 1;
}
int Atoi::StringToInteger()
{
				string s = GetString();
				int temp=0;//save the result of the integer
				int i=0;//from 0 or 1 to end of beTrans
				int select=1;
				if (s[0] == '-')
				{
								i = 1;
								select = -1;
				}
				for (i; i < s.length(); i++)
				{
								temp *= 10;
								temp += s[i] - '0';
				}
				temp *= select;
				return temp;
}