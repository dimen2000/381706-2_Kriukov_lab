#ifndef __TKEY_H__
#define __TKEY_H__

#include <iostream>
#include <TExeption.h>
#include <string.h>

using namespace std;

class TKey
{
protected:
  char* key;
  int len;
public:
  TKey(char* k = "");
  TKey(const TKey &k);
  void SetKey(char* k);
  char* GetKey();
  TKey& operator = (const TKey& tr);
  TKey& operator = (const char* str);
  bool operator == (const TKey& tr);
  bool operator > (const TKey& tr);
  bool operator < (const TKey& tr);
  friend ostream& operator<<(ostream &os, TKey &q);
  ~TKey();
};

#endif