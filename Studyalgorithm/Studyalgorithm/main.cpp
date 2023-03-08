#include <iostream>
#include "RedBlackTree.h"

using namespace std;

int main()
{
	cin.tie(NULL);
	std::cout.tie(NULL);
	ios::sync_with_stdio(false);


    RedBlackTree t;
    t.insert(1);
	t.insert(2);
	t.insert(3);
	t.insert(4);
	t.insert(5);
    t.insert(6);

    t.insert(10);
    return 0;
}

