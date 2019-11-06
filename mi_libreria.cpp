void cuadro(int col, int ren, int no_col, int no_ren)
{
	for (int i=0;i<no_ren;i++)
	{
		for (int j=0;j<no_col;j++)
		{
			gotoxy(col+j*6,ren+i*2);   printf("|-----|");
			gotoxy(col+j*6,ren+1+i*2); printf("|     |");
			gotoxy(col+j*6,ren+2+i*2); printf("|-----|");
		}
	}
}
