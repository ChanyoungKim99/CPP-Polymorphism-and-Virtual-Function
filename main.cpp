#include <iostream>

// ����Լ� �������̵� ���
class ClassA
{
public:
	void Func1()
	{
		std::cout << "ClassA::Func1" << std::endl;
	}
	virtual void Func2()	// ���� �Լ�  -> �Ļ� Ŭ������ �Ѿ
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

	ClassA* p = &b;				// �Ļ� Ŭ������ ��� Ŭ������ �ؼ�
	p->Func1();
	p->Func2();

	// ��� Ŭ������ �ؼ��߱� ������, ��� Ŭ������ �Լ��� ���´�.
	// �׷��� ���� �Լ��� �� ���´�!
}