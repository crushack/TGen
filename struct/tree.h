#include <vector>
#include <utility>

#ifndef _TREE_H_
#define _TREE_H_

class tree {

public:
  tree();
  tree(std::vector<int>, int);
  tree(std::vector<std::pair<int, int> >);
  
  void clear();

  int size();
  int size(int);

  int edges();
  int egde(int, int);
  

};

#endif
