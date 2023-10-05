#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main()
{
	LinkedList li;
	cout<<"Adding nodes to List:"<<endl;
	// 2
	li.insert(NULL,2);
	li.displayList();
	// -1->2
	li.insert(NULL, -1);
	li.displayList();
	// -1->2->-7
	li.insert(li.findKey(2),-7);
	li.displayList();
	// -1->2->-7->10
	li.insert(li.findKey(-7),10);
	li.displayList();
	// -1->2->-7->10->3
	li.insert(li.findKey(10),3);
	li.displayList();
	// -1->2->-7->10->3->5
	li.insert(li.findKey(3),5);
	li.displayList();
	// -1->2->-7->10->3->5->-4
	li.insert(li.findKey(5),-4);
	li.displayList();
	cout << endl;

	cout << "Running delete function." << endl;

	cout << "Remove node at index: 3" << endl;
	if(!li.removeAtLocation(3))
	{
		cout<<"Delete failed!"<<endl;
	}
	li.displayList();
	cout << endl;

    cout << "Remove at index: 0" << endl;
    if(!li.removeAtLocation(0))
	{
		cout<<"Delete failed!"<<endl;
	}
	li.displayList();
	cout << endl;
    
    cout << "Remove at index: 20" << endl;
    if(!li.removeAtLocation(20))
	{
		cout<<"Delete failed!"<<endl;
	}
	li.displayList();
	cout << endl;

    return 0;
}