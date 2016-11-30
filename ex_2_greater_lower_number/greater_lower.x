struct numbers{
	int n1;
	int n2;
	int n3;
};

struct response{
	int greater;
	int lower;
};

program GREATER {
	version GREATER_1{
		response CALCULATE(numbers) = 1;
	}=1;
} = 1;
