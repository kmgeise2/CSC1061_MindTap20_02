// CSC1061_MindTap20_02
// Depth First Traversal and Breadth First Traversal
#include <iostream>
#include <fstream>
#include "graphType.h" 

using namespace std;

int main()
{
	graphType test; // instantiate one graphType object

	// Graph is an array of pointers to linked lists
	// Create the array by invoking the constructor
	// that accepts passed parameters
	graphType myGraph(50);

	cout << "Create graph" << endl;
	myGraph.createGraph();
	cout << endl << endl;

	cout << "Print graph" << endl;
	myGraph.graphType::printGraph();
	
	cout << "Depth First Traversal: ";
	myGraph.depthFirstTraversal();
	cout << endl;

	cout << "Breadth First Traversal: ";
	myGraph.breadthFirstTraversal();
	cout << endl;

	return 0;
}