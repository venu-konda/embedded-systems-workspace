class Bank
{
	int account_no;
	string name;
	static int cnt;
	const static int password=12345;
	long int mobile_no;
	float balance;
	public :
	Bank();
	int passwordCheck(int a);
	void print();
	void check_balance();
	void deposit(float);
	bool withdraw(float);
	int transfer(float,int,Bank *);
};
int Bank :: cnt;
const int Bank :: password;

