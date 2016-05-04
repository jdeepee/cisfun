int square_root(int n){
	int i;
	i=1;

	if (n < 0){
		return -1; /* returning -1 if n is less than 0 */
	}

	while(i != n/2){ /* looping through possible values*/
		if (n%i == 0 && n/i == i){ /* checking if it is divisble by the number and equal to itself*/
			return i;
		}
		i++;
	}
	return -1;
}
