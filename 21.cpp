//21
#include<stdio.h>

int main(){
	int y,m,d,h,min,s;
	scanf("%d年%d月%d日%d时%d分%d秒",&y,&m,&d,&h,&min,&s);
	bool flag=(y%400!=0&&y%4==0)||(y%400==0);//是否是闰年 
	if(s==59){
		s=0;
		if(min==59){
			min=0;
			if(h==23){
				h=0;
				if((d==31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
					||(d==30&&(m==4||m==6||m==9||m==11))
					||(flag&&d==29)||(!flag&&d==28)){
					d=1;
					if(m==12){
						m=1;
						y++;
					}else m++;
				}else d++;
			}else h++;
		}else min++;
	}else s++;
	
	printf("%d年%d月%d日%d时%d分%d秒\n",y,m,d,h,min,s);
	return 0;
}
