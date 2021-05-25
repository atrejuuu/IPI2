#include "fcpp.hh"


int multsignal(int x, int y){
	print ("Weitere Multiplikation");
	return x*y;
}

int quadrat (int x){
return multsignal(x,x);	
}

bool ungerade (int zahl){
	return cond( zahl % 2 == 1, true, false);
} 

int exponentation (int basis,int exponent){
	
return cond(exponent <= 0,cond( exponent < 0,0,1), cond(ungerade(exponent) == 1,multsignal(basis,exponentation(basis,exponent-1)),quadrat(exponentation(basis,exponent/2))));
}


int main(int argc, char** argv){
	
	return print(exponentation(2,11));
}
/*Bei Exponent=15 werden 7 Multiplikationen ausgeführt
  Bei Exponent=8 werden 4 Multiplikationen ausgeführt
  Bei Exponent=11 werden 6 Multiplikationen ausgeführt*/
