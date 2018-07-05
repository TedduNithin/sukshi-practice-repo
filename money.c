#include<stdio.h>
void main()
{
int amount,two_thou,o,fivehun,q,hun,s,fif,u,twen,x,tens,z,fives,a,twos,ones;
printf("Enter the Amount:");
scanf("%d", & amount);
//----------------------------------
two_thou = amount/2000;
printf("The requirede notes are\n");
if(two_thou !=0)
{
printf("%d two thousand rupees notes\n",two_thou);
}
//----------------------------------
o=amount-(two_thou*2000);
fivehun= o/500;
if(fivehun !=0)
{
printf("%d five hundred rupees notes\n",fivehun);
}
//-----------------------------------
q=o-(fivehun*500);
hun=q/100;
if(hun !=0)
{
printf("%d hundred rupees notes\n",hun);
}
//------------------------------------
s=q-(hun*100);
fif=s/50;
if(fif !=0)
{
printf("%d fifty rupees notes\n",fif);
}
//------------------------------------
u=s-(fif*50);
twen=u/20;
if(twen !=0)
{
printf("%d twenty rupees notes\n",twen);
}
//------------------------------------
x=u-(twen*20);
tens=x/10;
if(tens !=0)
{
printf("%d ten rupees notes\n",tens);
}
//------------------------------------
z=x-(tens*10);
fives=z/5;
if(fives !=0)
{
printf("%d five rupee coins or notes \n",fives);
}
//------------------------------------
a=z-(fives*5);
twos=a/2;
if(twos !=0)
{
printf("%d two rupee coins\n",twos);
}
//-----------------------------------
ones=a-(twos*2);
if(ones !=0)
{
printf("%d one rupee coins\n",ones);
}
//printf("the required notes are\n%d two thousands\n%d five hundreds\n%d hundreds\n%d fifties\n%d twenties\n%d tens\n%d fives\n%d two rupee coins\n%d one rupee coins\n",two_thou,fivehun,hun,fif,twen,tens,fives,twos,ones); 
}
