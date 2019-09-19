#include "rbheader.h"

void leftRotate(struct node *x);
{
	node y = x.right;
	x.right = y.left;
	if (y.left != Null)
	{
		y.left.parent = x;
	}
	
	y.parent = x.parent;
	
	if ( x == x.parent.left)
	{
		x.parent.left = y;
	}
	
	else
	{
		x.parent.right = y;
	}
	y.left = x;
	x.parent = y;
}
