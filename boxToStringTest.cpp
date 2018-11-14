#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

	struct Point p1,p2;
	struct Box b1,b2;

	initPoint(&p1,3.0,4.0);
	initBox(&b1,3.0,4.0,8.0,7.0);
	initBox(&b2,3.14159,6.2831853071,4.0,5.0);

	assertEquals("ul=(3,4),w=8,h=7", boxToString(b1), "boxToString(b1)");

	initPoint(&p2,3.14159,6.2831853071);
	assertEquals("ul=(3.14,6.28),w=4,h=5", boxToString(b2), "boxToString(b2)");
	assertEquals("ul=(3,6),w=4,h=5", boxToString(b2,1), "boxToString(b2,1)");
	assertEquals("ul=(3.142,6.283),w=4,h=5", boxToString(b2,4), "boxToString(b2,4)");
	assertEquals("ul=(3.1416,6.2832),w=4,h=5", boxToString(b2,5), "boxToString(b2,5)");

		   
	return 0;
}
