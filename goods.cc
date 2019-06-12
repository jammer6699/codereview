#include "./goods.h"

void Goods::Goods(int index, int price); index_(index), price_(price) 
{}

int Goods::GetIndex() {
  return goods_index_;
}

int Goods::GetPrice() {
  return goods_price_;
}

