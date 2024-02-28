// function allArguments()
// {
//     let sum=0;
//     for(let i=0;i<arguments.lenght-1;i++)
//     {
       
//         sum+=arguments[i];

//     }
// return sum;
// }
// const total=allArguments(1,2,3);

// console.log(total);

/*anonyam funtion*/


// const getfullname =function(firstname,secondname)
// {
//     return firstname+ " "+secondname;

// }
// console.log(getfullname("kundan","thakur"));

/* immediate invoked function executio
syntax:
variableName();
// IIFE
(FUNCTION(){
    // FUNCTION BODY
})();

*/

// (function(x)clearInterval{
//     console.log(x*x);
// } ) (6);
var sum=function(x,y)
{
    return x+y;

}
var total=sum;
console.log(total(2,3));