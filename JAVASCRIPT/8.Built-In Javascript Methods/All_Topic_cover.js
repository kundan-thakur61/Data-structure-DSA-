// These Topics are covered in this chapter :
/*
1.Global javascript methods
2.string methods
3.math methods
4.date method
5.array method
6.number method

*/
/*.........Introdution to built-n javascropt methods........... */
/*
let s="hello ";
console.log(
    s.concat(" kundan ")
    .toUpperCase()
    .replace(" kundan ","thakur ")
    .concat(" you are amazing! ")   
);

*/
/*.........Global methods........... */
/*
let x=7;
console.log(Number.isNaN(x));
//           or
// console.log(isNaN(x));

*/
/*.........Decoding and encoding URIs........... */
// decodeUri() and encodeuUri()
/*
let uri="https://www.example.com/submit?name=kundan thakur";
let encode_uri=encodeURI(uri);
console.log("Encoded:",encode_uri);
let decode_uri=decodeURI(encode_uri);
console.log("decode:",decode_uri);

// OUTput:  Encoded: https://www.example.com/submit?name=kundan%20thakur
            decode: https://www.example.com/submit?name=kundan thakur
*/

/*.........decodeUriComponent() and encodedUriComponent()........... */
/*

let uri="https://www.example.com/submit?name=kundan thakur";
let encode_uri=encodeURIComponent(uri);
console.log("Encoded:",encode_uri);
let decode_uri=decodeURIComponent(encode_uri);
console.log("decode:",decode_uri);

// OUTPUT:Encoded: https%3A%2F%2Fwww.example.com%2Fsubmit%3Fname%3Dkundan%20thakur
          decode: https://www.example.com/submit?name=kundan thakur

 */

/*.........  Practice Exercise 8.1  ........... */
/*
const secretMsg1="how's%20it%20going%20%3F";
const secretMsg2="how it going";
const decodecomp=decodeURIComponent(secretMsg1);
console.log(decodecomp);
const encodecomp=encodeURIComponent(secretMsg2);
console.log(encodecomp);
const uri="http:www.basicscripts.com?=hello world";
const encoded =encodeURI(uri);
console.log(encoded);
// output:
how's it going ?
how%20it%20going
http:www.basicscripts.com?=hello%20world

*/

/*.........          Parsing  Number       ........... */
/*.........Making integer with parseInt()........... */
/*

let str_int="6";
let int_int=parseInt(str_int);
console.log("type of",int_int,"is",typeof(int_int));

output: type of 6 is number
*/
/*
let str_float="7";
let int_float =parseInt(str_float);
console.log("type of",int_float,"is",typeof(int_float));

let str_binary="0b101";
let int_binary=parseInt(str_binary);
console.log("type of",int_binary,"is",typeof(int_float));

output:type of 7 is number
       type of 0 is number
*/
/*
let str_NaN="hello";
let int_int =parseInt(str_NaN);
console.log("type of",int_int,"is",typeof(int_int));

output:type of NaN is number
*/
/*.........       Array Method     ........... */
/*.........     Performing a certain action for every item    ........... */

/*let arr=["grapefruit",4,"hello",5.6,true];//element
function printstuff(element,index)
{
console.log("printingstuff:",element,"on array position:",index);
}
arr.forEach(printstuff);
// or
let arr=["kundan thakur",93,476,true];
function elepos(element,index)
{
    console.log("element:", element,"at position",index)
}
arr.forEach(elepos);
*/
/*.........       Filtering An Array     ........... */

// 1.filter()
// 2.every()
// 3.copyWithin()
// 4.map()
// 5.indexOf()
// 6.lastIndexOf()

/*
let arr=["kundan",7476,,10,new Date(),"thakur",true];
function checkstring(element,index)
{
    return typeof element==="string";
    // return typeof element==="number";

}
let filterarr=arr.filter(checkstring);
console.log(filterarr);*/

/*.........   checking a condition for all elements    ........... */
/*
let arr=["kundan",7476,,10,new Date(),"thakur",true];
function checkstring(element,index)
{
    return typeof element==="number";
}
let filterarr=arr.every(checkstring);
console.log(filterarr);*/

/*......... Replacing part of an array with another part of the arry ........... */
// 3.copyWithin()
/*
let arr=["grapefruit",4,"hello",5.6,true];
arr.copyWithin(1,3);//index 3 replaced the index of 1
console.log(arr);*/

/*............Mapping the values of an array................*/
// map()

/*
let arr=[799,1299,1456,4565];
let mapped_Arr=arr.map(x=>x+500);
console.log(mapped_Arr);
*/
/*............Find The last occurence inan array................*/
// indexOf()
// lastIndexOf()
/*
let arr=["hi","hello","kundan","thakur"]
console.log(arr.lastIndexOf());*/
/*............practice exercise 8.2................*/
/*
const arr=["kundan","raj","prem","kundan","neeraj","kundan"];
const arr2=arr.filter((value,index,array)=>
{
    console.log(value,index,array.indexOf(value));
    return array.indexOf(value)===index;
});
console.log(arr2);
*/
/*............  practice exercise 8.3   ................*/
/*const myarr=[1,4,5,6];
const myarr1=myarr.map(function(ele)
{
    return ele*2;
});
console.log(myarr1);
const myarr2=myarr.map((ele)=>ele*2);
console.log(myarr2);*/



/*............  string methods   ................*/
/*............1.combining strings............*/
// 1.concat()
// 2.split()
// 3.join()
/*let s1="kundan ";
let s2="thakur";
let result=s1.concat(s2);
console.log(result);
*/
/*............2.converting a string to a array............*/

/*
let result="ku.ndan ,thakur";
let result_arr=result.split();
console.log(result_arr);*/
/*............3.converting a array to string ............*/
/*

let result=["kundan" ,"thakur"];
let result_arr=result.join("-");
console.log(result_arr);*/

/*............Workking with index and positions ............*/
/*
let poem="k,ku,kun,kund,kunda,kundan";
let index_re=poem.indexOf("ku");
console.log(index_re);
let indexNotFound=poem.indexOf("python");
console.log(indexNotFound);
let searchstr=" lo when i see my  ,i say hello";
// let pos =searchstr.search("lo");
// console.log(pos);
let pos =searchstr.search("javascript");
console.log(pos);
let pos1=poem.charAt(2);
console.log(pos1);
*/

/*Creating substrings:................................
slice(start,end)

*/
/*
let str="i am kundan thakur";
let str_slice=str.slice(6,18);
console.log(str_slice);

// output:undan thakur

let str="i am kundan thakur";
let str_slice=str.slice(14,16);
console.log(str_slice);
*/


/*.............Replacing parts of the string.................... */
// replace(old,new)
// replaceAll(old,new)
/*
let hi="Hi Hi";
let new_replace=hi.replaceAll("Hi","thakur");
console.log(new_replace);*/

/*.............Uppercase And Lowercase.................... */
/*
Q.1:
let str1="hi kundan thakur";
let str_uppercase=str1.toUpperCase();
console.log(str_uppercase);

let str2 ="I AM FROM KODERMA";
let str_lowercase=str2.toLowerCase();
console.log(str_lowercase);
// output:
HI KUNDAN THAKUR
i am from koderma

// Q.2
let caps="how are you?";
let fixed_caps=caps.toLowerCase();

let first_capital=fixed_caps.charAt(0).toUpperCase().concat(fixed_caps.slice(1));
console.log(first_capital);
*/

/*............The Start and End Of A String.................... */
// startsWith():there are case sensitive
// endsWith()
/*
let sentance1="you are doing great,keep up the good works!";
let start_with=sentance1.startsWith("you");
console.log(start_with);

let sentance2="you are doing great,keep up the good works!";
let End_with=sentance2.endsWith(" good works!");
console.log(End_with);

output: true
        true

        */

        /*...........Number methods.................... */
         /*...........checking if something is a number or not.................... */
        //  isNaN()
        // let x=10;
        // console.log(isNaN(x));
        // console.log(!isNaN(x));
        // let str="kundan";
        // console.log(isNaN(str));
        //     let str1="54";
        //     console.log(isNaN(str1));
        //     // output:
        //             false
        //             true
        //             true
        //             false
  /*...........checking if something is infinite.................... */
//   isFinite()
// let x=3;
// let str="finite";
// console.log(isFinite(x));
// console.log(isFinite(str));
// console.log(isFinite(Infinity));
// console.log(10/0);
// output:
// true
// false
// false
// Infinity


 /*...........checking if something is an integers.................... */
// Number.isInteger()
// let x=40;
// let str1="integers";
// console.log(Number.isInteger(x));
// console.log(Number.isInteger(str1));

// console.log(Number.isInteger(Infinity));
// console.log(Number.isInteger(2.54));
// // output:
// true
// false
// false
// false
 /*...........specify a number of decimals.................... */
// toFixed()

//  let x=1.23456;
//  let newX=x.toFixed(2);
//  console.log(x);
//  console.log(newX);
// //          or  
//  console.log(x,newX);
// //  output:
// //  1.23456
// //  1.23
// // 1.23456 1.23

 /*...........specify precision.................... */
//  toprecision():roundoff
//  let x=1.99456;
//  let newX=x.toPrecision(2);
//  console.log(x , newX);
//  output:
//  1.99556 2.00

 /*...........Math Methods.................... */
// 1.Math.max()
// 2.Math.min()
// 3.math.sqrt()
// 4.Math.pow()

// let highest=Math.max(7,0,5,0,8,1,8,0,6,1);
// let smallest=Math.min(7,0,5,0,8,1,8,0,6,1);
// let sqareRoot=Math.sqrt(64);
// let power=Math.pow(5,3);
// console.log(highest);
// console.log(smallest);
// console.log(sqareRoot);
// console.log(power);
// let highestOfWord=Math.max("hii",3,"bye");
// console.log(highestOfWord);

// output:
// 8
// 0
// 8
// 125
// NaN

/*...........Turning decimals into integers.................... */
// 1.Math.round():Normal rounding

// 2.Math.ceil():it is always roundong up to the first Integer it encounters.

// 3.Math.floor():The floor method is doing exact opposite of the ceil() methods .it rounds down to the nearest integer number

// 4.Math.turnc():it is same as floor() for positive numbers
/*
let x=6.78;
let y=5.34;
//1.Math.round()
console.log("x",x,"becomes",Math.round(x));
console.log("y",y,"becomes",Math.round(y));
output:
// x 6.78 becomes 7
// y 5.34 becomes 5

// 2.Math.ceil():
console.log("x",x,"becomes",Math.ceil(x));
console.log("y",y,"becomes",Math.ceil(y));
// x 6.78 becomes 7
// y 5.34 becomes 6

// 3.Math.floor():
console.log("x",x,"becomes",Math.floor(x));
console.log("y",y,"becomes",Math.floor(y));
// output:
// x 6.78 becomes 6
// y 5.34 becomes 5

// 4.Math.turnc():
console.log("x",x,"becomes",Math.trunc(x));
console.log("y",y,"becomes",Math.trunc(y));
// output:
// x 6.78 becomes 6
// y 5.34 becomes 5

*/
/*.............Exponent and Logarithm................*/

// let x=2;
// let exp=Math.exp(x);
// console.log("exp",exp);
// let log=Math.log(exp);
// console.log("log",log);
// output:
// exp 7.38905609893065
// log 2


/*.............Practice exercise 8.6.................... */
/*
console.log(Math.ceil(5.1));//6
console.log(Math.floor(5.9));//5
console.log(Math.round(5.5));//6
console.log(Math.random());// between zero or one (0.4692487150122182)

console.log("\n\n");

console.log(Math.random(Math.floor(Math.random()*11))); //0-10
console.log(Math.random(Math.floor(Math.random()*10))); //1-10
console.log(Math.random(Math.floor(Math.random()*100))); //1-100
console.log("\n\n");
function ranNum(min,max)
{
return Math.floor(Math.random()*(max-min+1)+min);
}
for(let i=0;i<100;i++)
{
    console.log(ranNum(1,100));
}


*/



/*.............    Date Methods................... */
/*............Create Dates.................... */
// let currentDateTime=new Date();
// console.log(currentDateTime);

// let now2=Date.now()
// console.log(now2);
// let milliDate=new Date(2023);
// console.log(milliDate);
// let stringDate=new Date("sat oct 13 2023 09:32 GMT+0200");
// console.log(stringDate);
// let specifyDate=new Date(2022,1,10,12,15,100);
// console.log(specifyDate);

/*.............    Mehods to get and set the element of a date................... */
/*let d=new Date();
console.log("day of week:",d.getDay());

console.log("day of month:",d.getDate());
console.log("month:",d.getMonth());
console.log("year:",d.getFullYear());
console.log("second:",d.getSeconds());

console.log("millisecond:",d.getMilliseconds());
console.log("time:",d.getTime());
console.log("\n\n");
console.log("\n\n");

d.setMonth(9);
console.log(d);

d.setDate(14);
console.log(d);

d.setHours(24);
console.log(d);

d.setTime(8);
console.log(d);

d.setFullYear(2023);
console.log(d);*/

/*.............   Parsing dates................... */
// let d1=Date.parse("october 14","2023");
// console.log(d1);

// // output:1002652200000
// // as you see there are many zeros because no time or second

// let d2=Date.parse("10/14/2023");
// console.log(d2);
// /*.............  Converting a date to a string................... */
// let d=Date("10/14/2023");
// // console.log(d.toDateString());
// console.log(d.toLocalDateString());
/*............. practice exercise 8.7.................. */

//    let future = new Date(2025, 5, 15);
//    console.log(future);
//    const months_m = ["January", "February", "March", "April", "May", "June", 
//    "July", "August", "September", "October", "November", "December"];
//    let day_d = future.getDate();
//    let month = future.getMonth();
//    let year_y= future.getFullYear();
//    let myDate = ${months_m[month-1]} ${day_d} ${year_y};
//    console.log(myDate);
// let str = "JavaScript";
 
// function scramble(val) {
//  let max = val.length;
//  let temp = "";
//  for(let i=0;i<max;i++){
//  console.log(val.length);
//  let index = Math.floor(Math.random() * val.length);
//  temp += val[index];
//  console.log(temp); 
//  val = val.substr(0, index) + val.substr(index + 1);
//  console.log(val);
//  }
//  return temp;
// }
// console.log(scramble(str));
