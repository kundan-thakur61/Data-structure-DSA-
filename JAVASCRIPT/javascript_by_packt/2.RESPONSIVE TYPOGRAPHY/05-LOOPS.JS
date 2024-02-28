/* WE WILLL LEARN ONE BY ONE
1.WHILE LOOP
2.DO WHILE LOPP
3.FOR LOOP
4.FOR IN
05 FOR OF LOOP

/*****1.WHILE LOOP***** 
SYNTAX:

WHILE(condition){
    //CODE
}

*/

// ques 1.
// let i=20;
// while(i>0){
//     console.log(i);
//     i=i-2;
// }
    
// let n=0;
// let n2=1;
// let temp;
// // fabonacciarray=[];


// while(0<25){
// // fabonacciarray.push(n1);
// temp=n1+n2;
// n1=n2;
// n2=temp;
// console.log(temp);
// }




// let somearray=["kundan","thakur","kailash","kunal"];

// let notfound=true;
// while(notfound&&somearray.length>0){
//     if(somearray[0]==="kundan"){
//         console.log("found her!");
//         break;
//     }
//     else{
//         somearray.shift();
//     }
// }


// let num1=0;
// let num2=1;
// let temp;
// fibonacciArray=[];
// while(fibonacciArray.length<25){
//     fibonacciArray.push(num1);

//     temp=num1+num2;
//     num1=num2;
//     num2=temp;
//     console.log("\t",+temp)  ;
//     num1++;
//     num2++;
// }


/*****1.DO-WHILE LOOP*****/
// let i=20;
// do{
//     console.log(i);

//     i=i-2;
// } while(i>0);



/*****FOR LOOP*****/
// for(let i=10;i>=0;i-=2)
// {
//     console.log(i);
// }

// let arr=[];
// for(let i=0;i<=100;i++)
// {
//     arr.push(i);
//     console.log(i);
// }


// let arr=[];
// for(let i=0;i<=100;i+=5)
// {
//     arr.push(i);
//     console.log(i);
// }


// let arrOfArrays=[];
// for(let i=0;i<3;i++){
//     arrOfArrays.push([]);
//     for(let j=0;j<7;j++){
//         arrOfArrays[i].push([j]);
//     }
// }
// console.table(arrOfArrays)

/*********LOOPS AND ARRAY********* */
// let names=["kundan","thakur","raj","rahul","satish"];
// for(let i=0;i<names.length;i++){
//     console.log("hello!",names[i])
// }


// let names=["dog","kunal","thakur","raj","kundsn","boss"];
// for(let i=0;i<names.length;i++){
//     if(names[i].startsWith("k")){
//         delete names[i];
//         continue;

//     }
//     names[i]="hiii"+names[i];

// }
// console.log(names);
// console.log("\n");





/*********FOR OF LOOPS********* 
 SYNTAX:

let ARR=[some array];
for(let variablename of arr)
{

}

let kundan=["lundan","thakur","raj"];
for(let thakur of kundan){
    console.log(kundan);

}*/
/*********LOOPS and objects********
let laptop={
    models:"TQ3878TC",
    BRAND :"HP",
    MANUFACTURING:"MADE BY HP",
    distributed:"india",
    year:1996,
    trusted:true,
};
for(let lap in laptop){
    console.log(laptop[lap]);
   
}*/



/*********BREAK AND CONTINUE*********/
// 1.
// for(let i=0; i<10; i++){
//     console.log(i);
//     if(i===4)
//     {
//         break;
//     }
// }

// 2.
/*
let car=[{
    model:"hyudai",
    make:"hyund",
    year:1999,
    color:"black",
},

{
model:"tata harrier",
make:"TATA",
year:2020,
color:"red",
},

{
model:"swift",
make:"swifts",
year:2021,
color:"black",

},

{
    model:"swift",
    make:"swifts",
    year:2020,
    color:"black",
    
    }
];
for(let i=0;i<car.length;i++){
    if(car[i].year>=2020)
    {
        if(car[i].color==="red")
        {
            console.log("i have found my new car:",car[i]);  
        break;
         }
    }
}*/

// for(let i=0;i<car.length;i++){
//     if(car[i].color!=="white")
//     {
//         continue;

//     }
//     if(car.year>=2020){
//         console.log(car[i]);
//     }
// }


// 3. to find the odd no. from 1to 50
/*
let i=1;
while(i<50){
i++;
if(((i-1)%2===0))
{
    continue;
}
console.log(i-1)
}
*/


let names=["kundan","thakur","rajenda","raj","sagr","sintu","satish",];
// for(let i=0;i<names.length;i++)
// {
//     let matches=0;
//     for(let j=0;j<names[i].length;j++)
//     {
//         if(names[i][j].startsWith("r")){
//             matches++;
//         }
//         else{
//             continue;
//         }
//         if(matches===2){
//             console.log(names[i]);
//             break;
//         }
//     }
// }
for(let naam of names){
    for(let member of  names){
        if(member.startsWith("k")){
            console.log(member);
            break;

        }
    }
}