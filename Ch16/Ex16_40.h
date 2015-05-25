#ifndef EX_16_40
#define EX_16_40
template <typename It>
auto fcn3(It beg,It end) -> decltype(*beg+0)
{
	return *beg;
}
#endif