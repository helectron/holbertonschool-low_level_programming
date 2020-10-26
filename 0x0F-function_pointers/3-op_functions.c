#include "3-calc.h" 

/* op_add - func that adds two arguments 
* @args a [mandatory] - first function argument
* @args b [mandatory] - second function argument
* @return - addition of two arguments 
*/
int op_add(int a, int b)
{
return(a + b);
}

/* op_sub - func that substract two arguments 
* @args a [mandatory] - first function argument
* @args b [mandatory] - second function argument
* @return - substraction of two arguments 
*/
int op_sub(int a, int b)
{
return(a - b);
}

/* op_mul - func that multiply two arguments 
* @args a [mandatory] - first function argument
* @args b [mandatory] - second function argument
* @return - multiplication of two arguments 
*/
int op_mul(int a, int b)
{
return(a * b);
}

/* op_div - func that divide two arguments 
* @args a [mandatory] - first function argument
* @args b [mandatory] - second function argument
* @return - division of two arguments 
*/
int op_div(int a, int b)
{
return(a / b);
}

/* op_mod - func that gets the residual between two arguments 
* @args a [mandatory] - first function argument
* @args b [mandatory] - second function argument
* @return - module of two arguments 
*/
int op_mod(int a, int b)
{
return(a % b);
}