#include <iostream>
#include "./shopping.h"

void GoodsList::Add(Goods object) {
  std::vector<Goods>::iterator i = std::find(list_.begin(), list_.end(), object);
  if (i == list_.end())  // object not in the list
  list_.push_back(object);
}

void GoodsList::Remove(Goods object) {
	std::vector<Goods>::iterator i = std::find(list_.begin(), list_.end(), object);
	if (i == list_.end())  // object not in the list
		list_.erase(i);
}



void GoodsList::Print() {
  for (std::vector<Goods>::iterator i = list_.begin();
      i != list_.end(); i++) {
    std::cout << "Goods #" << i->GetIndex() << " - Price : " <<
    i->GetPrice() << std::endl;
  }
}


void GoodsList::SortByPrice() {
  std::vector<Goods>::iterator p = list_.begin();
  std::vector<Goods>::iterator min = list_.end();
  for (std::vector<Goods>::iterator i = list_.begin();
      i != list_.end()-1; i++) {
    for (std::vector<Goods>::iterator j = i; j != list_.end(); j++) {
      if (min == list_.end()) {
        min = j;
        continue;
      }
      if (min->GetPrice() > j->GetPrice()) {
        min = j;
      }
    }
    std::iter_swap(i, min);
    min = list_.end();
  }
}


void GoodsList::SortByIndex() {
  std::vector<Goods>::iterator p = list_.begin();
  std::vector<Goods>::iterator min = list_.end();
  for (std::vector<Goods>::iterator i = list_.begin();
      i != list_.end()-1; i++) {
    for (std::vector<Goods>::iterator j = i; j != list_.end(); j++) {
      if (min == list_.end()) {
        min = j;
        continue;
      }
      if (min->GetIndex() > j->GetIndex()) {
        min = j;
      }
    }
    std::iter_swap(i, min);
    min = list_.end();
  }
}
