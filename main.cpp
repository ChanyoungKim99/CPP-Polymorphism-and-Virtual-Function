#include <iostream>

// 멤버함수 오버라이딩 사용
class ClassA
{
public:
	void Func1()
	{
		std::cout << "ClassA::Func1" << std::endl;
	}
	virtual void Func2()	// 가상 함수  -> 파생 클래스로 넘어감
	{
		std::cout << "ClassA::Func2" << std::endl;
	}
};

class ClassB : public ClassA
{
public:
	void Func1()
	{
		std::cout << "ClassB::Func1" << std::endl;
	}
	void Func2()
	{
		std::cout << "ClassB::Func2" << std::endl;
	}
};

int main()
{
	ClassA a;
	ClassB b;

	a.Func1();
	a.Func2();

	b.Func1();
	b.Func2();

	std::cout << "---------" << std::endl;

	ClassA* p = &b;				// 파생 클래스를 기반 클래스로 해석
	p->Func1();
	p->Func2();

	// 기반 클래스로 해석했기 때문에, 기반 클래스의 함수가 나온다.
	// 그러나 가상 함수는 안 나온다!
}