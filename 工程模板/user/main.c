/*******************************************************************************
*                 
*                 		       普中科技
--------------------------------------------------------------------------------
* 实 验 名		 : IIC AT24C02实验
* 实验说明       : 通过printf打印IIC读写数据，读取的数据是写入数据加1结果，只要按下复位按键即可在串口上显示
* 连接方式       : 
* 注    意		 : 	所用函数在头文件.c文件内
*******************************************************************************/


#include "public.h"
#include "printf.h"
#include "ds18b20.h"
#include "systick.h"


/****************************************************************************
* Function Name  : main
* Description    : Main program.
* Input          : None
* Output         : None
* Return         : None
****************************************************************************/
int main()
{	
	double temp;
	printf_init();	//printf初始化
	ds18b20_init();
	while(1){
		temp=readtemp();
		printf("当前温度为:%0.4lf C°\r\n",temp);
	}
	printf("读出来的数据是：%d\r\n",temp);
	while(1);	
}



