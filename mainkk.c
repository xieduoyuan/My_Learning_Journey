#include "stm32f10x.h"
#include "OLED.h"
#include "Delay.h"




 int main()
 {
  PWM1_Init();
	        
  OLED_Init();
	OLED_Clear();	 
	OLED_ShowChar(1, 1, 'RS');
	OLED_ShowString(1, 3, "lov");
	OLED_ShowNum(2, 1, 12345, 5);
	OLED_ShowSignedNum(2, 7, -66, 2);
	OLED_ShowHexNum(3, 1, 0xAA55, 4);
	OLED_ShowBinNum(4, 1, 0xAA55, 16);
	 
  
	 
	 while(1)
	 {
	  
    TIM_SetCompare2(TIM2,5);//0.5ms --> 正向最大转速
	  Delay_ms(5000);
 	
		TIM_SetCompare2(TIM2,15);//1.5ms --> 速度为0
		Delay_ms(2000);
		
		TIM_SetCompare2(TIM2,25);//2.5ms --> 反向最大转速
		Delay_ms(5000); 
	 
	 }
	 
	 return 0;
 
 
 }
 