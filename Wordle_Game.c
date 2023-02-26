#include <stdio.h>

void printArry(char ary[5], int sayac);
bool control(char ary1[5], char ary2[5]);

int main(){
	char cevap[5] = {'R','O','K','E','T'};
	char inputword[5];
	char myword[5] = {'_','_','_','_','_'};
	char olmayan[100];
	int sayac2 = 0;
	int size = 5;
	bool control_;
	
	
	printArry(myword, size);
	printf(" -Yeri yanlis harfler: ");
	printf(" - Olmayan harfler: ");
	
	
	while(0==0){
	char yeriyanlis[100];
	
	int sayac1 = 0;
	
	printf("\nTahmin :");
	scanf("%s",inputword);
	for(int j=0; j<5;j++){
		int buldu = 0;
		for(int i=0; i<5;i++){
			
			if (inputword[j] == cevap[j]){
				myword[j] = cevap[j];
				buldu = 1;
				break;
			}
			else if(inputword[j] == cevap[i] && inputword[i] != cevap[i]){
				yeriyanlis[sayac1] = inputword[j];
				sayac1++;
				buldu = 1;
				break;
			}
			}
			if(!buldu){
				olmayan[sayac2] = inputword[j];
				sayac2++;
			}
		
	}

	printArry(myword, size);
	printf(" - Yeri yanlis harfler: ");
	printArry(yeriyanlis,sayac1);
	printf(" - Olmayan harfler: ");
	printArry(olmayan,sayac2);
	control_ = control(myword,cevap);
	if (control_ == true){
		printf("\n--------------------------------");
		printf("\nTebrikler, dogru kelimeyi buldunuz!!!");
		break;
	}
	}
}
void printArry(char ary[5],int sayac){
	for(int i = 0; i < sayac;i++){
		printf("%c ",ary[i]);
	}
}
bool control(char ary1[5], char ary2[5]){
	int sayac = 0;
	for (int i = 0;i<5;i++){
		if(ary1[i] == ary2[i]){
			sayac++;
		}
	}
	if(sayac == 5)
	 return true;
	
	else
	 return false;
}
