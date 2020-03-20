#ifndef _OV7725_H
#define _OV7725_H
#include "sys.h"
#include "sccb.h"
//////////////////////////////////////////////////////////////////////////////////
//ALIENTEK MiniSTM32������
//OV7725 ��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2017/11/1
//�汾��V1.0		    							    							  
//////////////////////////////////////////////////////////////////////////////////
 
#define OV7725_MID				0X7FA2    
#define OV7725_PID				0X7721

#define OV7725_WRST		PAout(0)		//дָ�븴λ
#define OV7725_RCK		PAout(1)		//������ʱ��
#define OV7725_RRST		PAout(4)    //��ָ�븴λ
#define OV7725_CS		PAout(11)  		//Ƭѡ�ź�(OE)
#define OV7725_WREN		PAout(12)		//д��FIFOʹ��
#define OV7725_VSYNC  	PAin(15)  //ͬ���źż��IO
															  					 
#define OV7725_DATA   GPIOB->IDR&0x00FF //��������˿�
/////////////////////////////////////////									
	    				 
u8   OV7725_Init(void);		  	   		 
void OV7725_Light_Mode(u8 mode);
void OV7725_Color_Saturation(s8 sat);
void OV7725_Brightness(s8 bright);
void OV7725_Contrast(s8 contrast);
void OV7725_Special_Effects(u8 eft);
void OV7725_Window_Set(u16 width,u16 height,u8 mode);


#endif





















