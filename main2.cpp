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

	// 부모 먼저 생성, 자식 먼저 삭제
	// 그럼 다형성은? 

	Parent* q = new Child;
	delete q;
	// 부모 먼저 생성 까지는 동일
	// 그러나 지우는 포인터의 타입이 Parent이기에,
	// 실제로 소멸되는건 Parent밖에 없다.
	// 그럼 어떻게 child를 없앨까?
	// -> virtual 소멸자를 사용!!
}