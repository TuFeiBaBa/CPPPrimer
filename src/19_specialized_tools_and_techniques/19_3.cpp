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
	//基类A至少要有个虚函数，其他类可以没有。否则编译报错：“dynamic_cast” : “A”不是多态类型
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