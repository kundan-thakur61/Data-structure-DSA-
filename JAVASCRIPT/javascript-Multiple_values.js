// let arr1=["kundan",522,true];
// console.log(typeof arr1[0]);
// console.log(typeof arr1[1]);
// console.log(typeof arr1[2]);
// const arr=["hi hello" ,522];
// arr[0]="new value";
// arr[1]="kundan";
// console.log(arr);
// console.log(arr[1]);
// arr=["nope,now you are overwritting the array"];

/* ****ACCESSSING ELEMENT*****  */
// let car=["TOYOTA","RENAULT","SWIFT"];
// console.log(car[0]);
// console.log(car[1]);
// console.log(car[2]);
// console.log(car[-1]);
// car[0]="bmw";
// // console.log(car);
// car[-1]="audi";
// console.log(car[-1]);

/* ****BUILT-IN LENGHT PROPERRTY*****  */
// let colors=["red","yellow","orange"];
// let booleans=[true,false,true];
// let empty=[];
// console.log("lenght of color", colors.length);

// console.log("lenght of booleans", booleans.length);

// console.log("lenght of empty", empty.length);
// let lastElement=colors[colors.lenth-1];

// console.log(lastElement);
// numbers=[12,32,52];
// numbers[5]=85;
// console.log(numbers);



/*  ***ADDING AND REPLACING ELEMENT **** */
/*

1.PUSH():THE VALUE GETS ADDED TO THE END OF THE ARRAY
*/
/*
// EXAMPLE:
favroitfruits=["papaya","orange","lemon"];
// console.log(favroitfruits);
favroitfruits.push("mango");
console.log(favroitfruits);
*/

/* 2.splice():we can add element at the certain index*/
/*
// EXAMPLE
let shapes=["circle","triangle","rectange","pentagon","grapes","gauva","pineapple","applec"];
console.log(shapes);
shapes.splice(3,2,"square","hexagon");//here:3 represent IS ADD THE ELEMENT OF 3 index AND  3 is represent REMOVE FROM THE 3 INDEX TO END 
console.log(shapes);
*/




/* 3. concat():we can also add another array*/
// EXAMPLE:

//  let arr1=["apple","mango","pineapples"];
//  let arr2=["karela","patal","mirch"];
//  let arr3=arr1.concat( arr2,"kundan","rahul","satish");
//  console.log(arr3);


//      ***DELETING ELEMENTS***
/*
1.POP():REMOVING THE LAST ELEMENTIS DONE WITH POP() AND AS WELL AS FIRST INDEX WITH SHIFT().
let arr1=["apple","mango","pineapples"];
 let arr2=["karela","patal","mirch"];
 let arr3=arr1.concat( arr2,"kundan","rahul","satish");
 console.log(arr3);
arr3.pop();
arr3.pop();
arr3.pop();
arr3.pop();
console.log(arr3);
arr3.shift();
delete arr3[0];
console.log(arr3);*/



//      ***FINDING ELEMENTS***
/*
2.FIND():YO CHECK THE VALUES IS PRESENT ON ARRY IF IT DOESN'T MATCH THEY RETURN UNDEFINED

// EXAMPLE:


// let arr=[99,55,87,45,36] ;

// let findIndex1=arr.indexOf(4);

// let findIndex2=arr.indexOf(6);
// // console.log(findIndex1,findIndex2);

// arr.indexOf(4,5,0);
// console.log(arr);

let arr=["kundan","thakur","hello",];

let lastdog=arr.lastIndexOf("ap");
console.log(lastdog);



//      ***SORTING ELEMENTS***
/*
3.short():

// EXAMPLE:

 let names=["kundan","zalzala","prince","shashi","santosh","satish","rahul"];
 let number=[9, 8,7 ,4,5,6,3,2,1,9,6,3,2,5,8,7,4,1];
 let dobbles=[9.001,4.5,0.00001,6489.5454,54.65];
 let chars=['a','b','z','x','y','z','zz','aa','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'];
 


 console.log(names.sort());  
 
 console.log(number.sort());  
 
 console.log(dobbles.sort()); 
 
 console.log(chars.sort());   

*/
 

//      ***REVERSING ELEMENTS***

// 4.REVERSE():
// EXAMPLE:
let names=["kundan","zalzala","prince","shashi","santosh","satish","rahul"];
let N=names.reverse();


let number=[9, 8,7 ,4,5,6,3,2,1,9,6,3,2,5,8,7,4,1];
let M=number.reverse();


 let dobbles=[9.001,4.5,0.00001,6489.5454,54.65];
 let O=dobbles.reverse();


 let chars=['a','b','z','x','y','z','zz','aa','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'];
 let P=chars.reverse();


console.log(M,N,O,P);