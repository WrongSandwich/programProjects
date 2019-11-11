#ifndef BINOMIAL_NODE_H
#define BINOMIAL_NODE_H

class BinomialNode
{
private:
  int order;
  int key;
  BinomialNode* leftSibling;
  BinomialNode* rightSibling;
  BinomialNode* firstChild;
public:
  BinomialNode();
  BinomialNode(const int& key);
  BinomialNode(const int& key, const int& order, BinomialNode* leftSibling, BinomialNode* rightSibling);
  void setKey(const int& key);
  void setOrder(const int& order);
  void setLeft(BinomialNode* left);
  void setRight(BinomialNode* right);
  void setFirst(BinomialNode* child);
  int getKey() const;
  int getOrder() const;
  BinomialNode* getLeft() const;
  BinomialNode* getRight() const;
  BinomialNode* getFirst() const;
};

#endif
