#include <stdio.h>

int main(){
	char c;
	printf("Enter any character:");
	scanf("%c",&c);
if(c=='a' || c=='e'|| c=='i' || c=='o'|| c=='u'){
	printf("It is vowel.");
}
else if(c=='A'|| c=='E' || c=='I' || c=='O'|| c=='U'){
	printf("It is vowel.");
}
else
{
	printf("It is consonant.");	
}

}