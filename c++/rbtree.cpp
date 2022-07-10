// hacky impl of a red black tree
#include <bits/stdc++.h>

struct node {
  int key;
  char color;
  node* left;
  node* right;
  node* parent;
};

class rbtree {
public:
  rbtree(void)
    : m_root(0)
    , m_tmp(0)
  {
  }
  rbtree(const rbtree& _rbtree) {}
  rbtree& operator=(const rbtree& _rbtree) {}
  rbtree(rbtree&& _rbtree) {}
  rbtree& operator=(rbtree&& _rbtree) {}
private:
  node* m_root;
  node* m_tmp;
};

int main(int argc, char**argv) {

  return 0;
}
