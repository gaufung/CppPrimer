#include "Bulk_quote.h"
#include "Limit_quote.h"
#include "Quote.h"
#include <vector>
#include <memory>
using namespace std;
int main(){
	vector<shared_ptr<Quote>> basket;
	basket.push_back(make_shared<Quote>("gaufung",50));
	basket.push_back(make_shared<Bulk_quote>("cumt",4.5,10,0.2));
	cout<<basket.front()->net_price(14)<<endl;
	return 0;
}