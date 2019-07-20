
#ifndef HASHED_ENTRY_
#define HASHED_ENTRY_

#include <memory>
#include "Entry.h"

template<class KeyType, class ItemType>
class HashedEntry : public Entry<KeyType, ItemType>
{
private:
   std::shared_ptr<HashedEntry<KeyType, ItemType>> nextPtr;
   
public:
   HashedEntry();
   HashedEntry(KeyType itemKey, ItemType newEntry);
   HashedEntry(KeyType itemKey, ItemType newEntry,
               std::shared_ptr<HashedEntry<KeyType, ItemType>> nextEntryPtr);
   
   void setNext(std::shared_ptr<HashedEntry<KeyType, ItemType>> nextEntryPtr);
   auto getNext() const;
}; // end HashedEntry

#include "HashedEntry.cpp"
#endif
