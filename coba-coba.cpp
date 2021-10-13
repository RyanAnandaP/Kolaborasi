//Kalkulator Potensi Genetik

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int tpgPria(int ta,int ti){
	int potensi = 0;
	potensi=((ti+13)+ta)/2;
	return potensi;
	
}

int tpgWanita(int ta,int ti){
	int potensi=0;
	potensi=((ta-13)+ti)/2;
	return potensi;	
}

int main(){
	char jenis[55];
	int ayah;
	int ibu;
	
	printf("\t====================================\n");
	printf("        | Kalkulator Tinggi Potensi Genetik|\n");
	printf("\t====================================\n");
	
	getchar();
	system("cls");
	
	
	//Jika Jenis Kelamin "Pria",program akan keluar dari loop

	while(strcmp(jenis,"pria")!=0&&strcmp(jenis,"wanita")){
		
	
	printf("Masukkan Jenis Kelamin (Pria/Wanita): ");
	scanf("%s",&jenis);
	getchar();
}
	

	
	printf("Masukkan tinggi ayah (cm): ");
	scanf("%d",&ayah);
	getchar();
	
	printf("Masukkan tinggi ibu (cm): ");
	scanf("%d",&ibu);
	getchar();
	

	
	if(strcmp(jenis,"pria")==0){
		float tinggi_min1=(tpgPria(ayah,ibu))-8.5;
		float tinggi_max1=(tpgPria(ayah,ibu))+8.5;
		printf("\n\nTinggi yang diperkirakan antara %.1f sampai dengan %.1f\n",tinggi_min1,tinggi_max1);
	
	}
	else if(strcmp(jenis,"wanita")==0){
		float tinggi_min2=(tpgWanita(ayah,ibu))-8.5;
		float tinggi_max2=(tpgWanita(ayah,ibu))+8.5;
		printf("\n\nTinggi yang diperkirakan antara %.1f sampai dengan %.1f\n",tinggi_min2,tinggi_max2);
		
	}

	
	return 0;
}
