if((mat[i]<=1999)||(mat[i]>=0))
		{
			cal1[i]=-1;
			while ((cal1[i]>100) || (cal1[i]<0))
			{
				printf("Indique la calificacion 1: "); scanf("%f",&cal1[i]);
				if ((cal1[i]>100) || (cal1[i]<0))
				{
					printf("Error, la calificacion va de 0 a 100\n");
					getche();
				}
			}
			
			cal2[i]=-1;
			while ((cal2[i]>100) || (cal2[i]<0))
			{
				printf("Indique la calificacion 2: "); scanf("%f",&cal2[i]);
				if ((cal2[i]>100) || (cal2[i]<0))
				{
					printf("Error, la calificacion va de 0 a 100\n");
					getche();
				}
			}
			
			cal3[i]=-1;
			while ((cal3[i]>100) || (cal3[i]<0))
			{
				printf("Indique la calificacion 3: "); scanf("%f",&cal3[i]);
				if ((cal3[i]>100) || (cal3[i]<0))
				{
					printf("Error, la calificacion va de 0 a 100\n");
					getche();
				}
			}
