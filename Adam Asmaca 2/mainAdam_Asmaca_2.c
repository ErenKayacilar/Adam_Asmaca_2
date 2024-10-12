#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



char unluler [][20] = {"paul walker","leonardo dicaprio","magnus carlsen","enes batur","hadise","ataturk","acun ilicali","murat boz","besim tibuk","recep ivedik","kemal sunal","neset ertas","nejat isler","kaan tangöze"};
char filmler [][20]= {"the joker","tomb raider","zindan adasi","dark knight","the godfather","fight club","yuzuklerin efendisi","inception","forrest gump","interstellar","the prestige","yesil yol","harry potter","shrek"};
char diziler [][20] = {"house of the dragon","la casa de papel","prison break","breaking bad","prison break","the walking dead","stranger things","dark","better call saul","peaky blinders","lucifer","merlin","you","sex education"};
char ingA1 [][10] = {"cheap","know","enough","sing","hear","sit","bring","forget","wear","alone","angry","bill","brush","cloud"};
char ingA1tr [][20] = {"ucuz","bilmek","yeter","sarki söylemek","duymak","oturmak","getirmek","unutmak","giymek","yalniz","sinirli","fatura","firca","bulut"};
char ingA2 [][15] = {"ability","able","already","anyway","actually","achieve","belong","care","choice","consider","disappear","finally","catch","chance"};
char ingA2tr[][25] = {"yetenek","yapabilmek / hünerli","coktan / halihazirda","her neyse","aslinda","basarmak","ait olmak","ozen / umursamak","secim","dikkate almak","ortadan kaybolmak","sonunda","yakalamak","sans/firsat"};
char ingB1 [][15] = {"admire","advice","amount","ashamed","citizen","compare","elegant","excuse","funeral","temporary","jealous","regular","coin","soldier"};
char ingB1tr [][20] ={"hayranlik duymak","tavsiye","miktar","mahcup/utanmak","vatandas","kiyaslamak","zarif/elit","bahane","cenaze","gecici","kiskanmak","sürekli","bozuk para","asker"};
char ingB2 [][20] = {"achievement","agreement","arrest","candidate","charming","convert","depend","government","knowledge","marvellous","opportunity","patience","innocent","task"};
char ingB2tr[][24] = {"basari","anlasma/mutabakat","tutuklamak","aday","cazibeli","donusturmek","bagli olmak/duruma gore","hukumet","bilgi","harikulade","olanak/imkan","sabir","masum","gorev"};
char ingC1 [][20] = {"acquisition","artificial","compensation","consequence","dedicate","equivalent","gesture","initial","particularly","stimulate","undertake","manner","savage","yield"};
char ingC1tr[][25]= {"kazanma/edinme","yapay","tazminat","sonuc/netice","adamak","esdeger","iyi niyet/guzel davranis","ilk/bas","ozellikle","uyarmak","yuklenmek/ustlenmek","tutum/tavir","vahþi","verim/getiri"};
char ingC2 [][20] = {"burden","enquiry","gradual","monetary","precise","specimen","vegetation","subtle","inflict","pension","leak","hardware","retain","primitive"};
char ingC2tr[][21]= {"sirtina yuklemek/yuk","sorgu/sorusturma","kademeli/asamali","parasal","kesinlik","numune/ornek","bitki ortusu","hemen goze carpmayan","carptirmak","emekli maasi","sizdirmak/sizinti","donanim","alikoymak","ilkel"};
char ulkeler [][20] = {"ingiltere","malezya","italya","turkiye","almanya","fransa","japonya","karadag","misir","norvec","yunanistan","guney kore","rusya","hirvatistan"};
char baskentler [][20] = {"berlin","ankara","washington","viyana","baku","bruksel","sofya","prag","pekin","londra","paris","dublin","kopenhag","seul"};
char oyunlar [][25] = {"ea fc","god of war","counter strike","grand theft auto","red dead redemption","league of legends","valorant","assassins creed","ark","farming simulator","resident evil","the witcher","minecraft","wolfenistein"};
char dizi [8];

char *tahmin;
int size; 
char *kelime;
char *kelimetr;

void kelimeOlustur()         
{
	printf("\033[0m");
	int indis;
	int s1,s2;
	printf("\n\n\tingilizce : 1\n\n\tfilmler : 2\n\n\tdiziler : 3\n\n\tunluler : 4\n\n\tulkeler : 5\n\n\tbaskentler : 6\n\n\toyunlar : 7\n\n");
	scanf("%d",&s1);
	system("cls");
	indis= rand() %14; 
	if(s1 == 1){
		printf("\nHangi seviyede oynamak istersiniz?\n\n\n\tA1 = 1  A2 = 2\n\tB1 = 3  B2 = 4\n\tC1 = 5  C2 = 6\n\n");
		scanf("%d",&s2);
		system("cls");
		if(s2 == 1){
			kelime= ingA1[indis];
			kelimetr = ingA1tr[indis];
			printf("\nturkcesi = %s\n\n",kelimetr);
		}
		else if(s2 == 2){
			kelime= ingA2[indis];
			kelimetr = ingA2tr[indis];
			printf("\nturkcesi = %s\n\n",kelimetr);
		}
		else if(s2 == 3){
			kelime= ingB1[indis];
			kelimetr = ingB1tr[indis];
			printf("\nturkcesi = %s\n\n",kelimetr);
		}
		else if(s2 == 4){
			kelime= ingB2[indis];
			kelimetr = ingB2tr[indis];
			printf("\nturkcesi = %s\n\n",kelimetr);
		}
		else if(s2 == 5){
			kelime= ingC1[indis];
			kelimetr = ingC1tr[indis];
			printf("\nturkcesi = %s\n\n",kelimetr);
		}
		else if(s2== 6 ){
			kelime= ingC2[indis];
			kelimetr = ingC2tr[indis];
			printf("\nturkcesi = %s\n\n",kelimetr);
		}
		else{
			printf("Yanlis rakam!");
		}
	}
	else if(s1 == 2){
		kelime= filmler[indis];	
	}	
	else if(s1 == 3){
		kelime= diziler[indis];	
	}	
	else if(s1 == 4){
		kelime= unluler[indis];	
	}	
	else if(s1 == 5){
		kelime= ulkeler[indis];	
	}		
	else if(s1 == 6){
		kelime= baskentler[indis];	
	}		
	else if(s1 == 7){
		kelime = oyunlar[indis];
	}
	else{
		printf("Yanlis rakam!");
	}

	size = strlen(kelime); 	
	tahmin= (char*)	 malloc((size+1) * sizeof(char)); 
	int i=0; 
	while( i<size)
	{
		tahmin[i]= '-'; 
		if(kelime[i] == ' '){
			tahmin[i] = ' ';
		}
		i++; 		
	}
	tahmin[i] = '\0' ;                                                  
	
//	printf("kelime       :  %s \n", kelime) ; 
	printf("uzunluk      :  %d \n", size) ; 
	printf("tahmininiz   :  %s \n", tahmin) ; 
}

int harfKontrol( char harf ,int n) 
{
	int size2;
	int i=0, sonuc=0; 
	size2 = strlen(dizi);
	while( i<size  )
	{
		if( harf == kelime[i] ) 
		{
			tahmin[i] = harf; 
			sonuc=1; 
		}
		else{
			
			dizi[n] = harf; 
		}
		i++; 
	}
	
	printf("\n"); 
	return sonuc; 	
}
int kelimeKontrol(int n) 
{
	int j;
	int i=0;
	int sonuc=1;  	
	while( i<size )
	{
		if( tahmin[i] =='-' )
		{
			sonuc=0;			
		}
		i++; 
	}
	printf("tahmininiz   : %s\n\n", tahmin) ; 
	printf("yanlis harfler = ");
	for (j=0;j<=n;j++){
    printf("%c ",dizi[j]);
   }
   printf("\n\n");
	return sonuc; 	
}

void mekanCiz(int n ) 
{
	int j;
	system("cls"); 
	printf("\033[0m");
	printf("\n\n\t\tAdam Asmaca 2 \n\n")   ; 
	printf("\n\n\t\tBol Sans \n\n")   ;
	    
        printf("\t\t                       _______                         _______                 Can            \n");
        printf("\t\t                   ___|      |____                 ___|      |____                          \n");
 		if(n==0){
			printf("\t\t                   |__        ___|                 |__        ___|          ^ ^ ^ ^ ^ ^   \n");
		}                                                                                                                                                                    
		if(n==1){
			printf("\t\t                   |__        ___|                 |__        ___|          ^ ^ ^ ^ ^        \n");	
		}
		if(n==2){
			printf("\t\t                   |__        ___|                 |__        ___|          ^ ^ ^ ^       \n");	
		}
		if(n==3){
			printf("\t\t                   |__        ___|                 |__        ___|          ^ ^ ^       \n");
		}
		if(n==4){
			printf("\t\t                   |__        ___|                 |__        ___|          ^ ^          \n");
		}        
		if(n==5){
			printf("\t\t                   |__        ___|                 |__        ___|          ^              \n");
		}
		if(n==6){
			printf("\t\t                   |__        ___|                 |__        ___|                     \n");
		}
        printf("\t\t                     |________|                      |________|                                \n");
        printf("\t\t          /_\\                                                                             \n");
        printf("\t\t         /___\\                                                                                 \n");
        printf("\t\t        /_____\\                                                ______________                \n");
        printf("\t\t       /_______\\                                              /____________/|_________       \n");
		printf("\t\t      /_________\\                                             | ___   ___  |/________/|      \n") ; 
		if(n==0){
			
			printf("\t\t     /____|  |___\\     O ___                      O           | |_|   |_|  | ___ ___ ||      \n");
		}
		if(n==1){
			
			printf("\t\t     /____|  |___\\     O __   _                   O           | |_|   |_|  | ___ ___ ||      \n");	
		}
		if(n==2){
			printf("\t\t     /____|  |___\\     O __       _               O           | |_|   |_|  | ___ ___ ||      \n") ;	
		}
		if(n==3){
			printf("\t\t     /____|  |___\\     O __           _           O           | |_|   |_|  | ___ ___ ||      \n") ;
		}
		if(n==4){
			printf("\t\t     /____|  |___\\     O __               _       O           | |_|   |_|  | ___ ___ ||      \n") ;
		} 
		if(n==5){
			system("COLOR 4");
		    printf("\t\t     /____|  |___\\     O __                   _   O           | |_|   |_|  | ___ ___ ||      \n") ;
		}
		if(n==6){
			system("COLOR 4");
		    printf("\t\t     /____|  |___\\     O __                         O  _      | |_|   |_|  | ___ ___ ||      \n") ;
		    printf("\t\t          |  |         |_l                         /\\\\        |    ____    | |_| |_| ||      \n") ;
			printf("\t\t          |  |         |                          /      ___p |    |  |    |   ____  ||      \n") ;
			printf("\t\t__________|__|________/ \\________________________/ \\_0___I_I__|____|__|____|___|__|__||__   \n") ;  
	    	printf("\n\nkelimemimiz  : %s\n\n", kelime);   
	    	printf("\nTekrar oynamak icin 1 e cikmak icin 0 a basiniz\n");
	    	scanf("%d",&j);
			if(j==1){
				main();
			}

		}
		if(n!=6){
		printf("\t\t          |  |         |_l                        |\\/         |    ____    | |_| |_| ||      \n") ; 
		printf("\t\t          |  |         |                          |     q___  |    |  |    |   ____  ||      \n") ; 
     	printf("\t\t__________|__|________/ \\_________________________LL_O___I_I__|____|__|____|___|__|__||__   \n") ;			
    }
     
	
	printf("\n\n")	 ; 
}

int main() 
{
    printf("\033[0m");
	system("cls"); 
	printf("\n\n\t\tAdam Asmaca 2 \n\n")   ; 
	srand(time(0)) ; 
	kelimeOlustur();
	char harf; 
	int j;
	int adet=0, sonuc1, sonuc2; 

	while( adet<6  )
	{
		adet++; 
		printf("harf girin   : ") ;
		scanf(" %c",&harf) ; 
		if(harfKontrol(harf,adet) )  {
		adet--; 
	}
	    mekanCiz(adet );		

		if(kelimeKontrol (adet)  )
		{
			printf("kelimemimiz  : %s\n\n", kelime);  
			printf("Tebrikler!\n\n");
			
			printf("Tekrar oynamak icin 1 e cikmak icin 0 a basiniz\n");
			scanf("%d",&j);
			if(j==1){
				main();
			}
			else{
				break;
			}
					
		}				
	}

	return 0; 
}
