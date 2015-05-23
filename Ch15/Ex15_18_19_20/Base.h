#ifndef BASE
#define BASE
class base{
public:
	void pub_mem();
protected:
	int prot_mem;
private:
	char priv_mem;
};
struct Pub_Derv : public base
{
	int f(){return prot_mem;}
	/* error
	char g(){return priv_mem;}
	*/
};
struct Priv_Derv : private base
{
	int f1() const {return prot_mem;}
};
struct Derived_from_Public : public Pub_Derv
{
	int use_base(){return prot_mem;}
};
struct Derived_from_Private : public Priv_Derv
{
	/* errorb
	int use_base(){return prot_mem;}
	*/
};
#endif