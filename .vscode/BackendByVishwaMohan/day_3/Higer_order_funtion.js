/**function function1(function2,a,b)
{
    return function2(a,b);
}
function sum(a,b)
{
    return a+b;
}
let result=function1(sum,5,6)
console.log(result);
// ****************************
function getgreat()
{
  return   function()
    {
        console.log("hello ji ");
    }
}
// console.log(typeof getgreat);
let result=getgreat();
result()
*/
//  **** For Each Methods******


// players=["Dhoni","Ro-hit","KingKohli","suryaKumar","ishan-Kishan"]

// players.forEach((cricketer) => 
//     console.log(cricketer));


//********map:Creation of new transformed array********* */


// arr=[1,2,3,4,5,6,7,8,9]
// cube_arr=arr.map(num=>num**3)
// console.log(cube_arr);

/**
 * filter
 */

// let arr=[1,2,3,4,5,6,7,8,9]
// let even=arr.filter((num)=>num%2==0)
// console.log(even);

/**
 * reduce
 */
const sum=[1,2,3,4,5,6,7,8,9].reduce((n1,n2)=>n1+n2)
console.log(sum);