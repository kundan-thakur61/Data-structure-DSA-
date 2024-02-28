/* TOPIC WILL BE COVERS

.Basic functions
.function arguments
.variables scope in functions
.Recursive function
.Nested function
.Anonymous function
.Function callback

*/

//.Basic functions
/*
//INVOKING FUNCTION
nameOFFUnction();//function with no argument
functionthattakesinput("the input",5,true);//functon with 
*/

//Writing Function

// function nameoffunction(){
   
// }

/*write a function thata ask for your name and then greets you*/
// function sayhello()
// {
//     console.log("what is your name? ");
//     console.log("hello !");
// }
// sayhello();



// let varcontainingFunction=function()
// {
//     let varinfunction="i am in a function";
//     console.log("hi there!",varinfunction);
// };
// varcontainingFunction();

// parameter and arguments
// function tester(para1,para2)
// {
//     return para1+" "+para2;
// }
// const args1="arguments1";
// const args2="arguments2";
// tester(args1,args2);
// console.log(tester);
// function addTwoNumber(x=2,y=3)
// {
// console.log(x+y);
// }
// addTwoNumber();
// addTwoNumber(10);
// addTwoNumber(4,5);

//special function  and operator
// 1.Arrow function
/* syntax:

(parm1,param2)=>body of function

for no parameters:
()=>body of function

for one parameters:
param=>body of function

for a multiline with two parameters:
(param1,param2)=>{
    //line 1;
    //many number of line
};

*/
// function doingstuff(x)
// {
// console.log(x);
// }

// let doingstuff=x=>console.log(x);
// doingstuff("great!");


// 1. (parm1,param2)=>body of function
// let sum=(x,y)=>console.log(x+y);
// sum(6,5);

// 2.for no parameter
// let sum=()=>console.log("hii");
// sum();

// const arr=["kundan","thakur","koderma","domchanch"];
// arr.forEach(e=>console.log(e));

// let arr=["i","am","kundan","thakur","from","koderma"];
// arr.forEach(e=>console.log(e));


/*...............spread operator........................*/
// let spread=["so","much","fun"];
// let message=["javascript","is",...spread,"and","very","powerful"];
// message.forEach(e=>console.log(e));
// output:      javascript is somuch fun and very ppowerful




// function addfournumber(p,q,r,s){
//     console.log(p+q+r+s);

// }
// let arr1=[9,5];
// let arr2=[6,7];
// addfournumber(...arr1,...arr2);





/*...............Rest parameter........................*/
// function message(param1,...param2)
// {
//     console.log(param1,param2);
// }
// message("hi","there","how are you");

// function someinfo(arg1,...arg2)
// {
//     console.log(arg1,arg2);
// }
// someinfo("details","name-kundan",896589);

/*...............Returning Fuction values........................*/

/*function returnsome(x,y)
{
    return x+y;
}

let result=returnsome(9,6);
let result2=returnsome(9,7);
console.log(result,result2);*/



// let resultArr=[];
// for(let i=0;i<10;i++)
// {
//     let result=addtwonumbers(i,2*i);
//     resultArr.push(result);
// }
// console.log(resultArr);
/*...............Returning With arrow functions........*/

// let addTwoNumber=(x,y)=>x+y;
// let result =addTwoNumber(12,15);
// console.log(result);
// ..............................
// let addTwoNumber=(x,y)=>{
// console.log("adding.........");
// return x+y;
// }
// console.log(addTwoNumber(15,12));




/*........ variable scope in function.......*/
// 1. Local Variables in functions
// 2.Global variables in functions

// 1. Local Variables in functions
/*
function checkability(x){
    console.log("available here....",x);//available here.... hii
}
checkability("hii");
console.log(" not available here....",x);//ReferenceError: x is not defined
*/

/*function checkability()
{
    let y="hii kundan thakur";
    console.log("available here...",y);//available here... hii kundan thakur
}
checkability();
console.log("not available here...",y);//ReferenceError: y is not defined
*/

/*
function checkability()
{
    let y="i'll return";
    console.log("Available here..",y);//Available here.. i'll return
    return y;
}
let z=checkability();
console.log("Outside the function..",z);//Outside the function.. i'll return
console.log("not Available here..",y);//ReferenceError: y is not defined
*/


/*........ Let vs var variables.......*/
// use var
/*function doingstuff()
{
  
    if(true)
    {
     var  x="local ";
    }
    console.log(x);//local
}
doingstuff();*/

// use let 
/* 
function doingstuff()
{
    if(true)
    {
        let x="local";
    }
    console.log(x);//ReferenceError: x is not defined
}
doingstuff();
*/
/*
function doingstuff()
{
    let x;
    if(true)
    {
         x="local";
    }
    console.log(x);//local
}
doingstuff();
*/
//let:
/*
function doingstuff()
{
    
    if(true)
    {
        
    
    console.log(x);//ReferenceError: Cannot access 'x' before initialization
    let x="local";
    }
}
doingstuff();
*/


// var:
/*function doingstuff()
{
    
    if(true)
    {
        
    
    console.log(x);//undefined
    var x="local";
    }
}
doingstuff();*/

// const: const is simillar to let.
/*function doingstuff()
{
    
    if(true)
    {
        
    const x="local";
    console.log(x);

    }
}
doingstuff();*/


// 2.Global variables in functions

/*
let globalVar="Accessible everywhere!";
console.log("outside function",globalVar);
function checkglobalVar(x)
{
    console.log("access to global vars inside function",globalVar);
}
checkglobalVar("some parameter");
console.log("still available",globalVar);
*/

// use let :
/*let x="global";
function doingstuff()
{
    if(true)
    {
        let x="local";
        console.log(x);//local
    }
}
doingstuff();
console.log(x);//global
*/

/*
let x="global";
function doingstuff()
{
    console.log(x);//global
}
doingstuff("parameter");
*/
/*
function confuseReader()
{
    x="gusss my scope";
    console.log("inside the function",x);
}
confuseReader();
console.log("outside the function:",x);*/


/*........Imeddiate invoked function expression(Iife).......*/
/*
syntax:
(
    function ()
    {
        statement;
    }
)
();
*/
/*
(
    function(x,y){
        console.log("hii Iife",x*y);

    }
)
(9,6);
*/

// (
//     ()=>{
//         console.log("how are you!");

//     }
// )();

// practice:
/*let string_value="kundan thakur ";
(
    function()
    {
        string_value="raj GodZilla";
        result=string_value;
        // return  result;
        console.log(result);
    }
)();*/

/*..............Recursive function.............*/
/*function getrecursive(num)
{
    console.log(num);
    if(num>0)
    {
    getrecursive(--num);
    } 
}
getrecursive(5);*/

/*function logRecursive(num)
{
    console.log("start function:",num);
    if(num>0)
    {
        logRecursive(num-1);
    }
    else{
        console.log("ended with recursive");
    }
    console.log("ended function:",num);
}
logRecursive(5);*/

// practice
// find factorial number
/*function factorials(num)
{
    if(num===0)
    {
        return 1;
    }
    else{
   return num*factorials(--num);
       
        
    }
    
}
console.log(factorials(5));*/

/*..............Nested function.............*/
/*function doOuterFunction(num)
{
console.log("outer function");
doInnerFunction(num);
function doInnerFunction(x)
{
    console.log(x+7);
    console.log("i can access outer variables",num);
}
}
doOuterFunction(2);*/


/*..............Anonymous functions.............*/

// non-anonymous function
/*
function doingstuffAnonymous()
{
    console.log("not so secret though");
}*/

 /*let functionvaraiable= function ()
{
    console.log("not so secret though");
};
functionvaraiable();*/

/*let function_variables=function(num)
{
    console.log("value=",num);
};
function_variables(5);*/


/*..............funcons callbacks .............*/
function doFlexibleStuff(executedstuff)
{
    executedstuff();
    console.log("inside doflexible");
}
doFlexibleStuff(kk);