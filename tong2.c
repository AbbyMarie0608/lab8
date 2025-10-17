#include <stdio.h>

int main() {
	float temp;
	printf("Enter a temperature value: ");
	scanf("%e", &temp);
	float org_temp = temp;

	char scale;
	printf("Enter the original scale (C, F, or K): ");
	scanf(" %c", &scale);

	char convert;
	printf("Enter the conversion scale (C, F, or K): ");
	scanf(" %c", &convert);
	float celcius_temp;
	if (scale == 'C' && convert == 'F') {
		temp = (temp*1.8) +32.0;
		printf("Converted temperature: %.2f F\n", temp);
	} else if (scale == 'C' && convert == 'K') {
		temp = temp + 273.15;
		printf("Converted temperature: %.2f K\n", temp);
	} else if (scale == 'F' && convert == 'C') {
		temp = (temp - 32)/1.8;
		printf("Converted temperature: %.2f C\n", temp);
		celcius_temp = temp;
	} else if (scale == 'F' && convert == 'K') {
		temp = (temp - 32)*(5.0/9.0) + 273.15;
		printf("Converted temperature: %.2f K\n", temp);
	} else if (scale == 'K' && convert == 'C') {
		temp = temp - 273.15;
		printf("Converted temperature: %.2f C\n", temp);
		celcius_temp = temp;
	} else if (scale == 'K' && convert == 'F') {
		temp = (temp - 273.15)*(9.0/5.0) + 32;
		printf("Converted temperature: %.2f F\n", temp);
	}
	if (scale == 'C') {
		celcius_temp = org_temp;
	} else if (scale == 'F') {
		celcius_temp = (temp - 32)/1.8;
	} else if (scale == 'K') {
		celcius_temp = temp - 273.15;
	}
	
	if (celcius_temp < 0){
		printf("Temperature Category: Freezing\n");
		printf("Weather Advisory: Stay indoors\n");
	} else if (celcius_temp >= 0 &&  celcius_temp < 10) {
		printf("Temperature Category: Cold\n");
                printf("Weather Advisory: Bring a jacket!\n");
	} else if (celcius_temp >= 10 && celcius_temp < 25) { 
                printf("Temperature Category: Comfortable\n");
                printf("Weather Advisory: Nice Weather!\n");
        } else if (celcius_temp >= 25 && celcius_temp < 35) { 
                printf("Temperature Category: Hot\n");
                printf("Weather Advisory: Wear light clothing!\n");
        } else if (celcius_temp >= 35) { 
                printf("Temperature Category: Extreme Heat\n");
                printf("Weather Advisory: Drink lots of water!\n");
        }



}
