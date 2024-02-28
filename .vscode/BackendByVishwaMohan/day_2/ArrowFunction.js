/**
 * function with no args and no return type
 */

// var hello=()=>console.log(":hlw kundan");
// hello()

/**
 * sum of two numbers by using fn with not args and no return types
 */
// var sum=(a,b)=>a+b
// console.log(sum(9,6));

// var process=(a,b)=>
// {
//    console.log("need to process"); 
// return a*b;
// // console.log(arguments);//invalid
// }
// console.log(process(9,6));


/** what is IIFE
 * i:immediatly
 * invoke
 * function
 * expression
 */
(function()
{
    console.log("hlw boys");
})();

(function(a,b)
{
    console.log((a+b));
})(98,65);