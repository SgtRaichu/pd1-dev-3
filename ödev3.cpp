#include<stdio.h>

main(){
	
	int a,b,c,d,e,f,r,N,n,pi=3.14 ;
	int sum=1,sumcift=0;
	//1
	/*
	printf("1. sayiyi giriniz");scanf("%d",&a);
	printf("2. sayiyi giriniz");scanf("%d",&b);
	printf("toplam = %d ",a+b); 
	*/
	//2
	/*
	printf("yari capi giriniz ;");scanf("%d",&r);
	printf("Çemberin alaný %d",pi*r*r);
	*/
    //3 
    /*
    printf("sayiyi giriniz");scanf("%d",&c);
    if(c%2==0){
    	printf("sayi cift");
    }
    else 
       	printf("sayi tek");
	*/
	//4
	/*
	printf("sicakligi giriniz ;");scanf("%d",&d);
	if(d<0) 
	printf("Su donma sicaklýginda;");
	else
	printf("Su donma sicakliginda degil ;");
    */
    //5
    /*
     printf("Sicaklik degeri giriniz F :");scanf("%d",&e);
     printf(" %d Calcius ",(100*((e-32)/180)));
     */
     //6
     /*
     printf("Uzunluk degeri giriniz feet :");scanf("%d",&f);
      printf("Cm : %f ",f*(30.48));
     */
     //7
     /*
     for(int g ; g<11;g++){
     	
     	printf("%d \n",g*g);
     	
	 }
     */
     
     // 8 ve 9da ne demek istediðini anlamadým.
     
     //10
     /*
     int a1 =1,b1=2,c1=0;
     if(a1>b1 && a1>c1)
     printf("a1 max");
     else if(b1>a1 && b1>c1)
     printf("b1 max");
     else 
     printf("c1 max");
     */
     //11
     /*
     int a1 , sum=0 ;
     for(int j;j<11;j++){
     	
     	 printf("sayi giriniz");
     	 scanf("%d",&a1);
         sum+=a1;
	 }
     	 printf("sayilar %d \n toplamlari %d ",a1,sum);
     */
     //12
     /*
     for(int i=0;i<=100;i=i+5){
     	
     	printf("%d\n",i);
     	
	 }
     
     */
     //13
     /*
     for(int i;i<11;i++){
     	
     	
     	printf("6 x %d = %d\n",i,i*6);
     	
	 }
     */
     //14
     /*
     printf("N gir : ");scanf("%d",&N);
        for(int i;i<=N;i++){
     	
        	sum=i*sum;	
     	    
   		 }
     printf("%d",sum);
     */
     //15
     /*
    printf("N gir : ");scanf("%d",&N);
        while(N>=1){
        	
        	printf("%d\n",N);
        	N--;
        	
		}
     */
     //16
     /*
     for(int i=1000;i<=2000;i=i+2){
     	
     	
     	printf("%d\n",i);
     	sumcift=sumcift+i;
     	
     	
	 }
     	printf("%d\n",sumcift);
     
     */
     //17
	 /*
     int S=0;
     printf("N gir : ");scanf("%d",&N);
     for(int i=2;i<=N;i=i+2){
     	
     
     	S=S+(1/i);
     	       	
	 }
	 printf("%d",S);
	   */
	//18  matematiksel
	//19
	/*
	printf("N gir : ");scanf("%d",&N);
	for(int i;i<11;i++){
		
		
		printf("%d X %d = %d\n",N,i,i*N);
		
		
	}
	*/
	//20
	//hem basamaklarýna hemde tersten yazdýrýyor
   /*
	int S;
   	printf("N gir : ");scanf("%d",&N);
 
   	while(N>0){
   		S=N%10;
   		N=N/10;
   	    printf("%d ",S);
   		
	   }
	   */
    //21
       /*
    int num, last ;
    printf("Enter any number : ");
    scanf("%d", &num);
 
    last = num%10;
    printf("The last digit of entered number: %d\n", last);
 
    while(num>=10)
    {
        num = num/10;
    }
 
    printf("The first digit of entered number: %d\n", num);
   */
    //22
    /*
    int num, last, first, temp, swap, count = 0;
 
    printf("Enter any number: ");
    scanf("%d", &num);
 
    temp = num;
    last = temp % 10;
    count = (int)log10(temp);
 
    while(temp>=10)
    {
        temp /= 10;
    }
    first = temp;
    swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));
 
    printf("Last Digit: %d\n", last);
 
    printf("First Digit: %d\n", first);
 
    printf("%d is swapped to %d\n", num, swap);
	  */    
    //23
    /*  
    int toplam=0,sayi1;    
    printf("Bir sayi giriniz:");    
    scanf("%d",&n);    
    sayi1=n;    
    while(n>0){
       
         r=n%10;    
         toplam=(toplam*10)+r;    
         n=n/10;    
    }    
    if(sayi1==toplam)    
     printf("Girdiginiz sayi palindrom sayidir. ");    
    else   
     printf("Girdiginiz sayi palindrom sayi degildir.");   
   */

     
     
     
     
     
     
     
     
     
     
     
     
     
    
}
