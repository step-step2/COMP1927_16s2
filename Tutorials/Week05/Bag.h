// Our Bag ADT

typedef struct BagRep *Bag;
void dropBag(Bag);
Bag BagCopy(Bag);
void BagInsert(Bag,int);
void BagDelete(Bag,int);
int BagMember(Bag,int);
Bag BagUnion(Bag,Bag);
Bag BagIntersect(Bag,Bag);
int BagNumElems(Bag);
int BagNumUniq(Bag);
void showBag(Bag);
void readBag(FILE *, Bag);
