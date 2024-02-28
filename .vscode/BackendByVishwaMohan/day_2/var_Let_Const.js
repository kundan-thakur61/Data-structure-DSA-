/**
 * var:
 *   1.it is used to define a variables.
 *2.  it has function scope but no block scope.
 *      it is hoisted
 */

//  1.

// function f1()
// {
//     var i=87;
//     console.log(i);
// }
// f1()
// console.log(i);//ReferenceError: i is not defined


// // 2.


// {
//     var i=78;

// }
// console.log(i);

// 3.
// console.log(i);
// var i=87;
// console.log(i);





/**
 * Let:
 *      1.No Hoisting
 *      2.it has also block scope
 */
// 1.


// console.log(i);
// let i=887;

// ReferenceError: Cannot access 'i' before initialization

// 2.

// {
//     let name="kundan"

// }
// console.log(name);
//ReferenceError: name is not defined



/**
 * const:
 *          const is same as let variables
 *          const variables are final ,canot be re assingned a value
 */

const country="bharat"
country ="india"  //not valid
// console.log(country);