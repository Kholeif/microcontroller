void delayMs(int n)				/*delay n ms(16MHz cpu clock)*/
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3180;j++)
		{}											/*Do nothing for 1 ms*/
	}
}