
uchar Tim0 = 0, Tim1 =0 , Tim2 = 0, Tim3 = 0;
void Task0()
{

}

void Task1()
{
	
}

void Task2()
{
	
}

void SubTask1()
{
	
}

void INTT0(void) interrupt 1 using 1
{
    TL0=0Xff;    //10ms 重装
    TH0=0XDB;//b7;    
    if(Tim0 != 0 && Tim1 != 255)
       Tim0--;
	if(Tim1!= 0 && Tim1 != 255)
	   Tim1--;
	if(Tim2!=0 && Tim1 != 255)
	   Tim2--;
}

void main()
{
	while(1)
	{
		if(Tim0 == 0)
		{
			Task0(); //Task0只会执行一次
			Tim0 = 255; 
		}

		if(Tim1 == 0)
		{
			Task1();
			Tim1 = 1;
			continue;
		}

		if(Tim2 == 0)
		{
			Task2();
			Tim2 = 10; //100ms
			continue;
		}

    }
}