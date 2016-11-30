struct FIB{
	int number;
};

program FIBO{
	version FIBO_1{
		int CALCFIBO(FIB) = 1;
	} = 1;
} = 1;
