#include <iostream>

class Parent
{
public:
	Parent()
	{
		std::cout << "[Parent] created!" << std::endl;
	}

	//~Parent()
	//{
	//	std::cout << "[Parent] destroyed!" << std::endl;
	//}

	virtual ~Parent()
	{
		std::cout << "[Parent] destroyed!" << std::endl;
	}
};

class Child : public Parent
{
public:
	Child()
	{
		std::cout << "[Child] created!" << std::endl;
	}

	~Child()
	{
		std::cout << "[Child] destroyed!" << std::endl;
	}
};

int main()
{
	Child* p = new Child;
	delete p;

	// �θ� ���� ����, �ڽ� ���� ����
	// �׷� ��������? 

	Parent* q = new Child;
	delete q;
	// �θ� ���� ���� ������ ����
	// �׷��� ����� �������� Ÿ���� Parent�̱⿡,
	// ������ �Ҹ�Ǵ°� Parent�ۿ� ����.
	// �׷� ��� child�� ���ٱ�?
	// -> virtual �Ҹ��ڸ� ���!!
}