void chercher_max (int t[], int n, int *max)
{
	int val_max; 
	int i;
	val_max = t[0];
	for (i=0; i<n; i++)
	{
		if (t[i] > val_max) 
		{
			val_max = t[i];
		}
	}
	
	*max = val_max; 
}

