#include "LinkedList.hpp"

using namespace std;

// TODO
// Destructor
LinkedList::~LinkedList()
{
   //TODO
   cout<<"network deleted"<<endl;
}

// TODO
// Find a specific key and return a pointer to that node, else return NULL
// Given the key this function will find the node where the key is present
Node* LinkedList::findKey(int key) {
   Node* ptr = head;
   while (ptr != NULL && ptr->key != key)
   {
      ptr = ptr->next;
   }
   return ptr;
}

void LinkedList::insert(Node* prev, int newKey) {
  //Check if head is Null i.e list is empty
   if(head == NULL){
      head = new Node;
      head->key = newKey;
      head->next = NULL;
   }
   // if list is not empty, look for prev and append our node there
   else if(prev == NULL)
   {
      Node* newNode = new Node;
      newNode->key = newKey;
      newNode->next = head;
      head = newNode;
   }
   else {
      Node* newNode = new Node;
      newNode->key = newKey;
      newNode->next = prev->next;
      prev->next = newNode;
   }
}

// Print the keys in your list
void LinkedList::displayList() {
   Node* temp = head;

   if(temp == NULL){
      return;
   }

   while(temp->next != NULL){
       cout<< temp->key <<" -> ";
      temp = temp->next;
   }

   cout<<temp->key<<endl;
}

// TODO
// Delete node at a particular index
bool LinkedList::removeAtLocation(int n)
{
   bool isDeleted = false;

   if(head == NULL){
      cout<< "List is empty"<<endl;
      return isDeleted;
   }

   // Special case to delete the head
   if (n == 0) {
       //todo
       Node *temp = head;
       head = head->next;
       delete temp;
       temp = nullptr;
       isDeleted = true;
       return isDeleted;
   }

   Node *pres = head;
   Node *prev = NULL;

   //TODO
   for (int i = 0; i < n - 1; i++) {
      if (pres->next == NULL) {
         cout << "N is larger than the length of the list." << endl;
         return isDeleted;
      }
      pres = pres->next;
   }
   prev = pres;
   if (pres->next == NULL) {
      cout << "N is larger than the length of the list." << endl;
      return isDeleted;
   }
   pres = pres->next;

   prev->next = pres->next;
   delete pres;
   pres = prev->next;
   isDeleted = true;

   return isDeleted;
}