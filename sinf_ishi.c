#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    printf("Nechta Savolga javob berasiz: ");
    
	int a,r_1,r_2,jav,b,amal,res,j,qw = 0;
	char amal1;
	scanf("%d",&b);
	for(int i = 1;i<=b;i++){
	    printf("Savol %d\n",i);
	    r_1 = rand()%10+1;
	    r_2 = rand()%10+1;
	    amal = rand()%4;
	    if(amal == 0){
	        res = r_1+r_2;
	        amal1 = '+';
	    }else if(amal == 1){
	        res = r_1-r_2;
	        amal1 = '-';
	    }else if(amal == 2){
	        res = r_1/r_2;
	        amal1 = '/';
	    }else{
	        res = r_1*r_2;
	        amal1 = '*';
	    }
	    printf("\t%d %c %d = ",r_1,amal1,r_2);
	    scanf("%d",&jav);
	    if (res == jav){
	        qw++;
	    }else{
	        printf("\t\tXato! %d %c %d = %d buladi!\n",r_1,amal1,r_2,res);
	    }
	}
	printf("\t\tSiz %d ta savolga tugri javob berdingiz\n",qw);
	return 0;
}
