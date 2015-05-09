#ifndef EX7_43
#define EX7_43
class NoDefault{
public:
	NoDefault(int i) { }
};
class C{

	public:
		C():def(0) { }
	private:
		NoDefault def;
};
#endif