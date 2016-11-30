struct message{
	char message[100];
	char author[100];
};

program MESSAGE{
	version MESSAGE_1{
		message SEND(message)=1;	
	} = 1;
}=1;



