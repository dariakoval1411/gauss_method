#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
    /**
  	 * Tutaj należy umieścić właściwą implemntację.
		 */	
		int n=mat->r;

		for(int c=0;c<n-1;r++)
		{
			for(int r=c+1;r<n;r++)
			{
				if(mat->data[c][c]==0)
					return 1;
					double m=mat->data[r][c]/mat->data[c][c];
					for(int i=c;i<n;i++)
						mat->data[r][i]-=m*(mat->data[c][i]);
						b->data[r][0]-=m*(b->data[c][0]);
			}
		}

		return 0;
}

