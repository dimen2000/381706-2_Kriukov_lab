#ifndef __TTREENODE_H__
#define __TTREENODE_H__

#include <iostream>
#include <TTabRecord.h>
#include <TExeption.h>

template <class ValType> class TTreeTable;
template <class ValType> class TScanTable;
template <class ValType> class TSortTable;

using namespace std;



template<class ValType>
class TTreeNode : public TTabRecord<ValType>
{
private:
  TTreeNode<ValType>* pLeft;
  TTreeNode<ValType>* pRight;
public:
  TTreeNode(TKey k = "", ValType* val = NULL, TTreeNode<ValType>*left = NULL, TTreeNode<ValType>*right = NULL);
  ~TTreeNode();
  TTreeNode* GetLeft();
  TTreeNode* GetRight();
  template <class ValType> friend class TTreeTable;
};

template<class ValType>
TTreeNode<ValType>::TTreeNode(TKey k, ValType * val, TTreeNode<ValType>* left, TTreeNode<ValType>* right) :TTabRecord<ValType>(k, val)
{
  pLeft = left;
  pRight = right;
}

template<class ValType>
TTreeNode<ValType>::~TTreeNode()
{
  if (this->toDel)
    delete this->value;
}
template<class ValType>
TTreeNode<ValType> * TTreeNode<ValType>::GetLeft()
{
  return pLeft;
}

template<class ValType>
TTreeNode<ValType> * TTreeNode<ValType>::GetRight()
{
  return pRight;
}
#endif