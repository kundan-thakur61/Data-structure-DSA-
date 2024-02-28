/**
 * Dstructuring in array
 */
/*
const num1=[1,2,3]
const [a,b,c]=[1,2]
console.log(a);
console.log(b);
console.log(c);
const [p,q,r]=[1,2,[3,6,9,]]
console.log(p,q,r);*/

/**
 * Dstructing in object
 */

const per={
    name:"kundan",
    age:22,
    city:"koderma",
    address:{
        city:"domchanch",
        state:"jharkhand",
        zip:825418

    }
}

const{name,age,address:{city,state,zip}}=per
console.log(name);
console.log(age);
console.log(city);
console.log(city);
console.log(zip);
console.log(state);













