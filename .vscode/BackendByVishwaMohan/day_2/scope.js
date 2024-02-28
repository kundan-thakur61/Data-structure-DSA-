/**
 * global scope:access anywhere 
 * 
 */
// var name="kundan"
// console.log(name);

// function fun()
// {
//     console.log(name);
// }
// fun()


/**
 * local scope:access only inside the function
 * 
 */
// function num()
// {
//     var x=25;
// console.log(x);
    
// }
// num()
// console.log(x);


/**
 * Block scope
 */

// {
//     var x=25;
//     console.log(x);
// }
// console.log(x);

/**
 * output :
  25
  25
 */

  {
        let x=25;
        console.log(x);
    }
    console.log(x);
    

// output:ReferenceError: x is not defined
