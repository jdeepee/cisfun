int is_prime_number(int n){
	int i;
	i=2;

	if (n == 1){ 
		return 0;
	}

	if (n < 0){
		return 0;
	} else {
		while (i < n){ /* Looping through possible values below n*/
			if (n % i == 0){ /* checking if it is divisible*/
				return 0;
			}
			i++;
		}
		return 1;
	}
}
