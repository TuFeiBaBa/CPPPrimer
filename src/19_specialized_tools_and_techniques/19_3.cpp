#include <cassert>
#include <typeinfo>
class A {
public :
	virtual ~A(){

	}
};

class B :public A {
public:
	virtual ~B() {

	}
};

class C :public B {
public:
	virtual ~C() {

	}
};
class D :public B, public A {
public:
	virtual ~D() {

	}
};

int main()
{
	A* pa = new C;
	//����A����Ҫ�и��麯�������������û�С�������뱨����dynamic_cast�� : ��A�����Ƕ�̬����
	B* pb = dynamic_cast<B*>(pa);
	assert(pb != nullptr);

	B* pb2 = new B;
	C* pc = dynamic_cast<C*>((pb2));
	assert(pc == nullptr);

	A* pa2 = new D;
	B* pb3 = dynamic_cast<B*>(pa2);
	assert(pb3 != nullptr);
	return 0;
};