#ifndef GOODS_H_
#define GOODS_H_

// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 
private:
	final int index_;
	final int price_;
 
 public:
  Goods(int index, int price);
  int GetIndex();
  int GetPrice(); 
};


#endif  // GOODS_H_
